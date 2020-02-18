#include <iostream>
#include <testUserInput.hpp>
using namespace std;

int main()
{
    bool pass{true};
    pass &= testuserinput::all();

    if (pass)
    {
        cout << "All tests passed" << endl;
        return 0;
    }
    cout << "Not all tests passed" << endl;
}