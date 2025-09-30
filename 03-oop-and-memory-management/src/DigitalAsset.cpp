#include "../header/DigitalAsset.hpp"
#include <iostream>

using namespace std;

DigitalAsset::DigitalAsset(const string &name, unsigned long long size_bytes, const string &type) : name(name), size_bytes(size_bytes), type(type) {}

void DigitalAsset::print_details() const
{
    cout << "Name: " << name << "\n";
    cout << "Size (bytes): " << size_bytes << "\n";
    cout << "Type: " << type << "\n";
}

string DigitalAsset::get_name() const
{
    return name;
}

DigitalAsset::~DigitalAsset()
{
    cout << "DigitalAsset '" << this->name << "' is being destroyed." << endl;
}