#!/bin/bash 

cd src
rm -rf CMakeFiles
rm cmake_install.cmake libtoto.so Makefile
cd ../doc
rm -rf CMakeFiles html latex
rm cmake_install.cmake Doxyfile Makefile
cd ../main
rm -rf CMakeFiles bin
rm cmake_install.cmake Makefile
cd ../tests
cd build
rm test_constructor test_operator test_simple
cd ..
rm -rf CMakeFiles bin
rm cmake_install.cmake Makefile CMakeCache.txt
cd ..
rm -rf  googl* CMakeFiles Testing
rm CMakeCache.txt cmake_install.cmake CTestTestfile.cmake Makefile


