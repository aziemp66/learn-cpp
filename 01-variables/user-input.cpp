#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string myName;
    cout << "Type your name : ";
    cin >> myName;

    cout << "Your name is : " << myName << "\n";

    int myAge;
    cout << "Type your age : ";
    cin >> myAge;

    cout << "Your age is : " << myAge << "\n";

    myAge >>= 1;
    cout << myAge << "\n";

    myAge <<= 2;
    cout << myAge << "\n";

    return 0;
}
