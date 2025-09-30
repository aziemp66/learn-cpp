#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int myNum = 12;
    string myText = "My Number is ";
    char myChar = 'C';
    float myFloat = 3.14;
    bool myBool = true;

    cout << myText << myNum << "\n";
    myNum = 15;

    cout << myText << myNum << "\n";
    myNum = 15;

    cout << "My Char is " << myChar << "\n";
    cout << "My Float is " << myFloat << "\n";
    cout << "My Bool is " << myBool << "\n";

    const int myConstInt = 67;
    cout << "My Const Int is " << myConstInt << "\n";

    return 0;
}
