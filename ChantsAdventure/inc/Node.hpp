#ifndef NODE_HPP
#define NODE_HPP

#include <vector>     
class Asset;          

class Node {
public:
    void AddAsset(Asset* asset);      
    std::vector<Asset*> GetAssets(); 
private:
    std::vector<Asset*> assets;       
};

#endif // NODE_HPP
