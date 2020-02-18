set(targetName user_input)

add_library(${targetName} STATIC 
    readUserInput.cpp
    readUserInput.hpp
)

target_include_directories(${targetName}
  PUBLIC
    .
)

add_subdirectory(test)