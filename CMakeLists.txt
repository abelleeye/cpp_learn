cmake_minimum_required(VERSION 3.21)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 14)

file (GLOB files chapter_*/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
