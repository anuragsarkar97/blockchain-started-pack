#include "Blockchain.h"

Blockchain ::Blockchain() {
    offChain.emplace_back(Block(0,"Genesis Block!"));
    nDifficulty = 3; // change this if you want to increase mining difficulty ....
}

void Blockchain::addBlock(Block newBlock) {
    newBlock.previousHash = getLastHash().getHash();
    newBlock.minBlock(nDifficulty);
    offChain.push_back(newBlock);
}

Block Blockchain::getLastHash() const {
    return offChain.back();
}


void Blockchain::getHash() {
    offChain.back().returnNewHash();
}

void Blockchain::getData() {
    offChain.back().returnData();
}