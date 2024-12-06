#include "Node.hpp"
#include "Asset.hpp"
#include <vector> 

void Node::AddAsset(Asset* asset) {
    assets.push_back(asset);
}

std::vector<Asset*> Node::GetAssets() {
    return assets;
}
