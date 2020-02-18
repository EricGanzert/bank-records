add_library(test_structures STATIC
    testStructures.hpp
    testStructures.cpp
)

target_include_directories(test_structures PUBLIC 
    .
)

add_executable(tests runAllTests.cpp)

target_link_libraries(tests PUBLIC
    test_user_input
    test_structures
)