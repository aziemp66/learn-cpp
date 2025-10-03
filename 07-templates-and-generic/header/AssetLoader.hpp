#include "AssetConcept.hpp"
#include <memory>
#include <string>
#include <stdexcept>

// The template parameter 'T' is now constrained by our concept.
template <IsDerivedFromAsset T, typename... Args>
std::unique_ptr<T> load_asset(Args &&...args)
{
    return std::make_unique<T>(std::forward<Args>(args)...);
}
