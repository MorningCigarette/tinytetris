cmake_minimum_required(VERSION 3.0.0)
project(tinytetris VERSION 0.1.0 LANGUAGES C CXX)

# 查找并链接 curses 库
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(tinytetris main.cpp)

# 链接 curses 库
target_link_libraries(tinytetris ${CURSES_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
