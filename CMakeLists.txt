cmake_minimum_required(VERSION 3.5.0)
project(drumkraken VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# DrumKraken executable
file(GLOB_RECURSE DRUMNKRAKEN_SOURCE src/*.cpp src/*.h)
add_executable(drumkraken ${DRUMNKRAKEN_SOURCE})

#TJALib
target_include_directories(drumkraken PUBLIC deps/tjalib/src)

add_subdirectory(deps/tjalib)
target_link_libraries(drumkraken tjalib)

#Raylib
set(raylib_USE_STATIC_LIBS)

target_include_directories(drumkraken PUBLIC deps/raylib/src)

add_subdirectory(deps/raylib)
target_link_libraries(drumkraken raylib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
