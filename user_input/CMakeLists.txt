set( _target user_input )

add_library(${_target} STATIC
    readUserInput.hpp
    readUserInput.cpp
)