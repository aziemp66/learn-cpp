// main.cpp - Modern C++ with RAII and smart pointers

#include "header/DigitalAsset.hpp"
#include "header/ImageAsset.hpp"

#include <iostream>
#include <memory> // For std::unique_ptr and std::make_unique
#include <vector>
#include <memory>

using namespace std;

void manage_assets()
{
    cout << "Managing digital assets..." << endl;
    cout << "--- Entering manage_assets scope ---" << endl;

    // Stack-allocated object. Its lifetime is tied to the current scope.
    DigitalAsset local_asset("Logo.png", 20480, "PNG Image");
    local_asset.print_details();
    cout << endl;

    // Heap-allocated object managed by a unique_ptr.
    // std::make_unique is the preferred way to create unique_ptrs.
    // No 'new' is used in application code.
    unique_ptr<DigitalAsset> heap_asset =
        make_unique<DigitalAsset>("Manual.pdf", 5242880, "PDF Document");

    heap_asset->print_details(); // Arrow syntax still works.
    cout << "--- Exiting manage_assets scope ---" << std::endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    manage_assets();

    cout << "Back in main function." << endl
         << endl;

    vector<unique_ptr<ImageAsset>> image_assets;
    image_assets.push_back(make_unique<ImageAsset>("Photo1.jpg", 307200, 1920, 1080));
    image_assets.push_back(make_unique<ImageAsset>("Graphic.png", 102400, 800, 600));

    for (const auto &asset : image_assets)
    {
        asset->print_details();
        cout << endl;
    }

    return 0;
}
