#ifndef DOCS_ASSET_HPP
#define DOCS_ASSET_HPP

#include <string>

#include "Asset.hpp"

// Documentation-only subclass to illustrate operator<< usage with Asset
class DocsAsset : public Asset
{
private:
    std::string doc_type;

public:
    DocsAsset(const std::string &name, unsigned long long size_bytes, const std::string &doc_type);
    ~DocsAsset() override;

    void print_details() const override;
};

#endif // DOCS_ASSET_HPP