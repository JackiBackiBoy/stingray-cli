@echo off

clang++ -std=c++17 -O3 src/main.cpp src/camera.cpp src/scene.cpp src/sphere.cpp -o cli
cli.exe
