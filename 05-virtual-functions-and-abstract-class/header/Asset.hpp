// Asset.hpp - Abstract base class for all digital assets

#ifndef ASSET_H
#define ASSET_H

#include <string>
#include <iostream>

class Asset
{
protected:
    std::string name;
    unsigned long long size_bytes;

public:
    Asset(const std::string &name, unsigned long long size_bytes)
        : name(name), size_bytes(size_bytes) {}

    // A virtual destructor is crucial for base classes in a polymorphic hierarchy.
    // It ensures that the correct derived class destructor is called.
    virtual ~Asset() = default;

    // A pure virtual function. The '= 0' makes this function pure virtual
    // and makes the Asset class abstract.
    virtual void print_details() const = 0;

    std::string get_name() const { return name; }
};

#endif // ASSET_H