#include <iostream>

#include "testUserInput.hpp"
#include <testStructures.hpp>

using namespace std;
using namespace test;

namespace testuserinput {

bool all()
{
    cout << "Running All User Input Tests..." << endl;

    bool result{true};
    result &= runAndLogResult(test1, "test1");
    result &= runAndLogResult(test2, "test2");

    return result;
}

bool test1()
{
    return true;
}

bool test2()
{
    return true;
}

}