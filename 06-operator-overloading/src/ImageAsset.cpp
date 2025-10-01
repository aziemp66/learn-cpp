// ImageAsset.cpp

#include "../header/ImageAsset.hpp"
#include <iostream>

using namespace std;

ImageAsset::ImageAsset(const string &name, unsigned long long size, int res_x, int res_y)
    : Asset(name, size), resolution_x(res_x), resolution_y(res_y) {}

void ImageAsset::print_details() const
{
    cout << "Image Asset: " << name << " (" << size_bytes << " bytes)" << endl;
    cout << "  Resolution: " << resolution_x << "x" << resolution_y << endl;
}

ImageAsset::~ImageAsset()
{
    cout << "ImageAsset '" << this->name << "' is being destroyed." << endl;
}