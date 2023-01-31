#include "BombIterator.h"

int BombIterator::size() { return newVecBomb.size(); }

void BombIterator::erase(size_t n) {
    auto it = newVecBomb.begin();
    newVecBomb.erase(it + n);
}

const std::vector<Bomb*>::iterator& BombIterator::operator++ () {
    return (++Iterator);
}

const std::vector<Bomb*>::iterator& BombIterator::operator++ (int) {

    std::vector<Bomb*>::iterator it = this->Iterator;
    Iterator++;
    return it;
}

BombIterator::BombIterator(const std::vector <DynamicObject*>& vec) {
    Bomb* pBomb;
    for (int i = 0; i < vec.size(); i++) {
        pBomb = dynamic_cast<Bomb*> (vec[i]);
        if (pBomb != nullptr) newVecBomb.push_back(pBomb);
    }
    Iterator = newVecBomb.begin();
}

std::vector<Bomb*>::iterator BombIterator::begin() {

    return newVecBomb.begin();
}

std::vector<Bomb*>::iterator BombIterator::end() {
    return newVecBomb.end();
}