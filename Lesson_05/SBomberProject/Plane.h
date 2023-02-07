#pragma once

#include "DynamicObject.h"
#ifndef Plane_H
#define Plane_H
class Plane : public DynamicObject {
public:

    void Draw() const override;

    inline void ChangePlaneY(double dy) { yDirection += dy; }
    void accept(const Visitor& e) override;
private:

};
#endif
#ifndef Visitor_H
#define Visitor_H
class Bomb;
#include "Visitor.h"
//#include "Bomb.h"
#endif

