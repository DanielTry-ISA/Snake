cmake_minimum_required(VERSION 3.20)

project(
    SnakeRetro
    VERSION 0.1
    LANGUAGES C
)
find_package(SDL2 REQUIRED)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(
    Snake
    src/main.c
    src/core/application.c
    src/platform/platform.c
)

target_include_directories(
    Snake
    PRIVATE
    src
)

target_link_libraries(
    Snake
    PRIVATE
    SDL2::SDL2
)

