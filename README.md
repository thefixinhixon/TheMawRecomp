# The Maw — Linux Recompilation

A native Linux port of the Xbox 360 XBLA game **The Maw** (Twisted Pixel,
2009), built with the [ReXGlue SDK](https://github.com/ReXGlue/rexglue-sdk)
static recompiler — the same toolchain family as
['Splosion Man](https://github.com/thefixinhixon/SplosionManRecomp),
[Dante's Inferno](https://github.com/thefixinhixon/hells-gate-recomp) and
[Condemned 2](https://github.com/thefixinhixon/Condemned2Recomp).

**Status: playable on Linux** — title screen, "Retrieving Data", settings
save, level transitions, enemy spawns and Bulb Valley progression all
verified by playing, on Kubuntu (AMD RX 6600 / RADV), with graphics,
PipeWire audio, controller + vibration, and FSR upscaling.
**Windows build: in progress** via GitHub Actions (see
`.github/workflows/windows.yml`) — the launcher compiles; the game build
is being brought up the same way 'Splosion Man's was.

> **No game data is included in this repository or its releases.**
> You must supply your own legally obtained copy of the game: the XBLA
> package for title ID **584108C2**, or a folder containing `default.xex`
> extracted from it. The TP launcher (below) can import and extract the
> XBLA package for you. The Maw is © Twisted Pixel Games / Microsoft.
> This is a fan-made interoperability project; do not redistribute
> game assets.

## Download

Linux builds ship as an AppImage plus a folder zip (see Releases):
extract, `chmod +x` the AppImage, run — the launcher auto-detects your
game folder (`~/Games`, mounted drives, next to the launcher) or lets
you pick it, and its **Import XBLA Package** button extracts a stock
XBLA package into a ready-to-play folder. Requirements: a distro with
glibc 2.43 (the current packages are built on a recent toolchain —
older-distro rebuilds are on the roadmap), Vulkan drivers for your
GPU, and PipeWire or PulseAudio.

## The launcher

The **TP Maw Launcher** is a bespoke Qt6 launcher shared with the
'Splosion Man port (`tp-launcher/` in this repo, per-game themed from
one codebase):

- **Game tab**: detection status, one-click XBLA package import
  (built-in STFS extractor — no external tools), PLAY.
- **23 settings in four explained sections** (Graphics / Audio /
  Storage & Logs / Advanced), each with a plain-language note on what
  it does: resolution scale 720p→4K, FSR or bilinear presentation, FXAA,
  MSAA, VSync, frame limit, audio gain and routing, your choice of
  save-data and log locations — plus a **Reset to Defaults** button.
- Settings persist between runs; the exact command line assembled for
  every launch is written to `last-command.txt` next to the logs.

## Building from source

You need: the ReXGlue SDK (pinned commit, with the house patches and
FidelityFX enabled), clang 20, Qt6 dev, Vulkan headers, and
**PipeWire + SPA development headers** — without them SDL silently
builds *without* a PipeWire audio backend and the game has no sound on
PipeWire systems. (Ask us how we know.)

1. Clone the SDK at `f5337cdc947ff6d4c4196737e2c807a48f2a1fc2`,
   init its submodules, and apply `patches/house-sdk.patch`
   (`git apply`, 57 files — the accumulated house fixes: input
   threading, codegen discovery, shader-cache and presentation work).
2. Codegen from your own `default.xex` (or use the included
   `generated/`): `rexglue codegen`. **If you re-run codegen you must
   redo the post-processing dance** before the tree will build and
   play: build once, run `scripts/fix-codegen-maw.py`, run
   `scripts/patch-epilogue.py`, build again. The `generated/` tree in
   this repo is already in that post-dance state — it's the tree that
   produced the shipping Linux build.
3. Build the game: CMake preset `linux-amd64-release` on Linux,
   `win-amd64-release` on Windows, with
   `-DREXSDK_DIR=<sdk tree> -DREXGLUE_ENABLE_FIDELITYFX=ON`.
   (FidelityFX defaults OFF and fails *silently* — the game just looks
   blurry. Check for it.)
4. Build the launcher in `tp-launcher/` (CMake, Qt6,
   `-DTP_GAME=maw`).

Note: **never mix** the executable and `librexruntime.so` /
`librexgpu-xenos.so` (or their Windows `.dll` counterparts) from
different build sets — it corrupts the heap.

## Known landmine: `/dev/shm` leaks (Linux)

The runtime backs guest memory with a ~4.8 GB `xenia_memory_*` file in
`/dev/shm` per run. Crashed or killed runs **leak** these files; when
`/dev/shm` fills, new runs die with a bus error (exit code 7)
immediately after "Guest memory arena mapped". The TP launchers vacuum
stale files before launching; if you're running the game directly,
check `df -h /dev/shm` and remove stale files belonging to dead
processes: `rm /dev/shm/xenia_memory_*`.

Also: a crash while the shader cache writes can poison it — if the
game starts freezing on transitions, delete the cache subfolder under
your save-data location (your saves live elsewhere and are safe).

## Credits & disclosure

- **Twisted Pixel Games** — for The Maw, and for Frank.
- **ReXGlue SDK team and upstream rexglue contributors** — the
  recompiler and runtime that make this possible.
- The TP launcher is an original, clean-room design built for the
  Twisted Pixel ports (extraction, detection and settings model
  informed by the house's earlier launcher work on the Dante's
  Inferno and Condemned 2 recompilations).
- This port was built by Jason Hixon with heavy AI assistance
  (Muse, by Meta) on the coding side, and tested the old-fashioned
  way: by playing it. The bugs were real, the Maw got fed.
