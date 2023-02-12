#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include "Bomb.h"

class BombIterator
{
public:
    BombIterator(const std::vector <DynamicObject*>& vec);
    std::vector<Bomb*>::iterator begin();
    std::vector<Bomb*>::iterator end();
    const std::vector<Bomb*>::iterator& operator++();
    const std::vector<Bomb*>::iterator& operator++(int);
    void erase(size_t n);
    void reset() { vecIndex = -1; }
    int size();

private:
	std::vector<Bomb*>::iterator Iterator;
	std::vector<Bomb*> newVecBomb;
    int vecIndex;
};

