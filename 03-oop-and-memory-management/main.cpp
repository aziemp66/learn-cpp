#include "header/DigitalAsset.hpp"
#include <iostream>

using namespace std;

void manage_assets()
{
    cout << "Managing digital assets..." << endl;
    cout << "--- Entering manage_assets scope ---" << endl;

    // Stack-allocated object. Its lifetime is tied to the current scope.
    DigitalAsset local_asset("Logo.png", 20480, "PNG Image");
    local_asset.print_details();

    // Heap-allocated object. Its lifetime is manually controlled.
    DigitalAsset *heap_asset = new DigitalAsset("Manual.pdf", 5242880, "PDF Document");
    heap_asset->print_details();

    std::cout << "--- Explicitly deleting heap_asset ---" << std::endl;
    delete heap_asset; // The destructor for heap_asset is called here.

    std::cout << "--- Exiting manage_assets scope ---" << std::endl;
}

int main(int argc, char const *argv[])
{
    manage_assets();

    return 0;
}
