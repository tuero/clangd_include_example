cmake_minimum_required (VERSION 3.12)

project(test_clangd_include)

add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_20)
