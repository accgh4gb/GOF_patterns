#pragma once

#include "DynamicObject.h"

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // Стоимость бомбы в очках

	void Draw() const override;

private:

};