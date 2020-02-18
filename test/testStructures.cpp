#include "testStructures.hpp"
#include <iostream>
using namespace std;

namespace test {
bool runAndLogResult(function<bool()> testFunction, string name)
{
    cout << name << " --> ";

    bool result = testFunction();
    result ? cout << "PASSED" << endl : cout << "FAILED" << endl;
    return result;
}

}