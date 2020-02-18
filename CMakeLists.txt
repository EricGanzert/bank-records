cmake_minimum_required( VERSION 3.13 )

project(bank_records CXX)

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

add_library(user_input STATIC 
    readUserInput.cpp
    readUserInput.hpp
)

add_executable(bank_records main.cpp)

target_link_libraries(bank_records PRIVATE user_input)

add_executable(tests EXCLUDE_FROM_ALL runAllTests.cpp)
