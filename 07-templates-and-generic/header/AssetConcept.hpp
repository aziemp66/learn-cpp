// AssetConcepts.h - Defines concepts for the Asset hierarchy

#ifndef ASSET_CONCEPTS_HPP
#define ASSET_CONCEPTS_HPP

#include "Asset.hpp"
#include <type_traits>
#include <concepts>

using namespace std;

// This concept is satisfied if T is the same as Asset or is publicly derived from Asset.
template <typename T>
concept IsDerivedFromAsset = is_base_of_v<Asset, T>;

#endif // ASSET_CONCEPTS_H