#include "../header/Asset.hpp"
#include <iostream>

using namespace std;

ostream &operator<<(std::ostream &os, const Asset &asset)
{
    // This is the "public" interface for printing.
    // It can't access private/protected members directly.
    // So, it calls a public (or in this case, a virtual) member function.
    asset.print_details(); // This will be dispatched polymorphically!
    return os;             // Return the stream to allow for chaining (e.g., std::cout << a << b;).
}
