#ifndef DIGITAL_ASSET_HPP
#define DIGITAL_ASSET_HPP

#include <string>

using namespace std;

class DigitalAsset
{
private:
    string name;
    unsigned long long size_bytes;
    string type;

public:
    // Constructor declaration
    DigitalAsset(const std::string &name, unsigned long long size_bytes, const std::string &type);
    ~DigitalAsset();

    // Member function declarations (prototypes)
    void print_details() const;
    std::string get_name() const;
};

#endif // DIGITAL_ASSET_HPP