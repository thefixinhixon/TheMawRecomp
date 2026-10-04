#!/usr/bin/env python3
"""The Maw: sub_822C0A10 tail-branches into the shared epilogue of
sub_822BFF10 at loc_822C09E8, which codegen cannot wire as a call.
Emit the epilogue inline in the thunk (identical machine semantics).
Idempotent; run after fix-codegen-maw.py."""
from pathlib import Path
p = Path(__file__).parent.parent / "generated" / "default" / "themaw_recomp.10.cpp"
s = p.read_text()
old = """\t// b 0x822c09e8
\t// FATAL: unresolved function 0x822C09E8 (no CallTarget in FunctionNode)
\tREX_FATAL("Unresolved call from 0x822C0A4C to 0x822C09E8");
\treturn;"""
new = """\t// b 0x822c09e8 (manually resolved: shared epilogue of sub_822BFF10,
\t// emitted inline - identical machine semantics)
\tctx.r1.s64 = ctx.r31.s64 + 656;
\t__restgprlr_14(ctx, base);
\treturn;"""
if old in s:
    p.write_text(s.replace(old, new)); print("patched epilogue site")
else:
    print("already patched or site changed")
