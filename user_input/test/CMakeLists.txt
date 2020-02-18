set(targetName test_user_input)

add_library(${targetName} STATIC
    testUserInput.hpp
    testUserInput.cpp
)

target_include_directories(${targetName}
  PUBLIC
    .
)