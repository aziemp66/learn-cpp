// main.cpp - Modern C++ with RAII and smart pointers
#include "header/Asset.hpp"
#include "header/ImageAsset.hpp"
#include "header/DocsAsset.hpp"

#include <iostream>
#include <memory> // For std::unique_ptr and std::make_unique
#include <vector>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<unique_ptr<Asset>> assets;
    assets.push_back(make_unique<ImageAsset>("Photo1.jpg", 307200, 1920, 1080));
    assets.push_back(make_unique<ImageAsset>("Graphic.png", 102400, 800, 600));
    assets.push_back(make_unique<DocsAsset>("Report.pdf", 51200, "PDF"));

    for (const auto &asset_ptr : assets)
    {
        // The overloaded operator<< is invoked.
        // It polymorphically calls the correct print_details() method.
        std::cout << *asset_ptr << std::endl;
    }

    return 0;
}
