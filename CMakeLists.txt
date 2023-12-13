cmake_minimum_required(VERSION 3.24)
project(Bioskop123)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bioskop123 main.cpp Database.h ModelStudio.h ModelFilm.h ModelJadwal.h ViewStudio.h ViewFilm.h ViewJadwal.h)
