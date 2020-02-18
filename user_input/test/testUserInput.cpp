#include "testUserInput.hpp"
#include <iostream>
using namespace std;

namespace testuserinput {

bool all()
{
    bool result{true};
    bool pass{false};

    pass = test1();
    pass ? cout << "PASSED" << endl : cout << "FAILED" << endl;
    result &= pass;

    pass = test2();
    pass ? cout << "PASSED" << endl : cout << "FAILED" << endl;
    result &= pass;

    return result;
}

bool test1()
{
    cout << __func__<< " --> ";
    return true;
}

bool test2()
{
    cout << __func__<< " --> ";
    return false;
}

}