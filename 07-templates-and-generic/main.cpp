// main.cpp - Modern C++ with RAII and smart pointers
#include "header/Asset.hpp"
#include "header/ImageAsset.hpp"
#include "header/DocsAsset.hpp"
#include "header/AssetLoader.hpp"
#include "header/DigitalAsset.hpp"

#include <iostream>
#include <memory> // For std::unique_ptr and std::make_unique
#include <vector>
#include <memory>

using namespace std;

auto main() -> int
{
    vector<unique_ptr<Asset>> assets;
    assets.push_back(load_asset<ImageAsset>("Logo.png", 204800, 1024, 768));
    assets.push_back(load_asset<ImageAsset>("Photo1.jpg", 307200, 1920, 1080));
    assets.push_back(load_asset<ImageAsset>("Graphic.png", 102400, 800, 600));
    assets.push_back(load_asset<DocsAsset>("Report.pdf", 51200, "PDF"));
    assets.push_back(load_asset<DocsAsset>("Letter.docx", 51200, "DOCX"));

    for (const auto &asset_ptr : assets)
    {
        // The overloaded operator<< is invoked.
        // It polymorphically calls the correct print_details() method.
        std::cout << *asset_ptr << std::endl;
    }

    return 0;
}
