#include "../header/DocsAsset.hpp"

#include <iostream>

using namespace std;

DocsAsset::DocsAsset(const string &name, unsigned long long size_bytes, const string &doc_type)
    : Asset(name, size_bytes), doc_type(doc_type) {}

void DocsAsset::print_details() const
{
    cout << "Document Asset - Name: " << name << endl
         << "Size: " << size_bytes << " bytes" << endl
         << "Type: " << doc_type << endl;
}

DocsAsset::~DocsAsset()
{
    cout << "DocsAsset '" << this->name << "' is being destroyed." << endl;
}
