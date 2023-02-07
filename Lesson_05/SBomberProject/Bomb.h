#pragma once
#include <vector>
#include "DynamicObject.h"
#include "DestroyableGroundObject.h"
#ifndef Bomb_H
#define Bomb_H
class Bomb : public DynamicObject
{
	std::vector <DestroyableGroundObject*>observers;
public:

	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;
	void accept(const Visitor& e) override;
	Bomb(const std::vector <DestroyableGroundObject*>&);
	void AddObserver(DestroyableGroundObject*);
	DestroyableGroundObject* CheckDestroyableObjects();
private:
	
};
#endif;
#ifndef Visitor_H
#define Visitor_H
class Plane;
#include "Visitor.h"
//#include "Plane.h"
#endif
