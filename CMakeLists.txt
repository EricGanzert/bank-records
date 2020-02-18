cmake_minimum_required( VERSION 3.13 )

set(targetName launch)
project(${targetName} CXX)

set_property( GLOBAL PROPERTY GLOBAL_DEPENDS_NO_CYCLES ON )
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(
    -Wall
    -Wextra
    -Werror
    -Wno-switch
    -Wno-switch-enum
)

add_executable(${targetName} main.cpp)

add_subdirectory(user_input)

target_link_libraries(${targetName} PUBLIC user_input)

add_executable(tests EXCLUDE_FROM_ALL runAllTests.cpp)
