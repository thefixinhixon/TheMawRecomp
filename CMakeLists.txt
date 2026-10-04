# themaw - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(themaw LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Linux needs SSSE3/SSE4.1 for the SDK's memory.cpp (same as condemned2)
if(NOT WIN32)
    add_compile_options(-mssse3 -msse4.1)
endif()

include(generated/rexglue.cmake)

# Sources
set(THEMAW_SOURCES
    src/main.cpp
    src/stubs.cpp
)

if(WIN32)
    add_executable(themaw WIN32 ${THEMAW_SOURCES})
else()
    add_executable(themaw ${THEMAW_SOURCES})
endif()

rexglue_setup_target(themaw)

# imgui headers ship inside the SDK tree but aren't added to the include
# path by rexglue_setup_target; add them explicitly (same as condemned2).
if(REXSDK_DIR)
    target_include_directories(themaw PRIVATE
        "${REXSDK_DIR}/thirdparty/imgui"
    )
endif()

if(TARGET imgui::imgui)
    target_link_libraries(themaw PRIVATE imgui::imgui)
elseif(TARGET imgui)
    target_link_libraries(themaw PRIVATE imgui)
endif()
