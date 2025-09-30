#include "header/DigitalAsset.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    DigitalAsset *myPhoto = new DigitalAsset("VacationPhoto", 2048000, "image/jpeg");

    cout << "Created Asset : \n";
    myPhoto->print_details();

    // Clean up
    delete myPhoto;

    return 0;
}
