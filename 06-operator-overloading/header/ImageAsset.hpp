// ImageAsset.hpp

#ifndef IMAGE_ASSET_HPP
#define IMAGE_ASSET_HPP

#include "Asset.hpp"

class ImageAsset : public Asset
{
private:
    int resolution_x;
    int resolution_y;

public:
    ImageAsset(const std::string &name, unsigned long long size, int res_x, int res_y);

    ~ImageAsset() override;

    // The 'override' specifier is a modern C++ best practice.
    // It asks the compiler to verify that this function is indeed
    // overriding a virtual function from a base class.
    void print_details() const override;
};

#endif // IMAGE_ASSET_H