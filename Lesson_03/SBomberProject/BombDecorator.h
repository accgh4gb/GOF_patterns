#pragma once


#include "DynamicObject.h"
#include "Bomb.h"


class BombDecorator : public DynamicObject {
public:
	BombDecorator(DynamicObject* newBomb) : pBombObj(newBomb) {	}
	void Draw() const override;
	void SetPos(double nx, double ny) override;
	uint16_t GetWidth() const override;
	void Move(uint16_t time) override;
	void SetSpeed(double) override;
	void SetDirection(double, double) override;
	double GetY() const override;
	double GetX() const override;

private:
	DynamicObject* pBombObj;
};