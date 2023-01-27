#pragma once

#include <iostream>
#include <vector>
#include "SBomber.h"
#include "Bomb.h"
#include "DynamicObject.h"
#include "GameObject.h"


class AbstractCommand
{
public:
	virtual ~AbstractCommand() {}
	virtual void Execute() = 0;
	
};

class DeleteDynamicObjCmd : public AbstractCommand
{
public:
	DeleteDynamicObjCmd(std::vector<DynamicObject*>& newVecDynObj, DynamicObject* newBomb) :
		vecDynamicObj(newVecDynObj), pBombObj(newBomb) {}
	void Execute() override;

private:
	std::vector<DynamicObject*>& vecDynamicObj;
	DynamicObject* pBombObj;
};

class DeleteStaticObjCmd : public AbstractCommand
{
public:
	DeleteStaticObjCmd(std::vector<GameObject*>& newVecStaticObj, GameObject* newGameObj) :
		vecStaticObj(newVecStaticObj), pStaticObj(newGameObj) {}
	void Execute() override;

private:
	std::vector<GameObject*>& vecStaticObj;
	GameObject* pStaticObj;
};

class DropBombCmd : public AbstractCommand
{
public:
	DropBombCmd(const Plane* newPlane, std::vector<DynamicObject*>& newVecDynObj, uint16_t& newBombsNumber, int16_t& newScore) :
		pPlaneObj(newPlane), vecDynObj(newVecDynObj), CmdBombsNumber(newBombsNumber), cmdScore(newScore) {};
	void Execute() override;

private:
	const Plane* pPlaneObj;
	std::vector <DynamicObject*>& vecDynObj;
	uint16_t& CmdBombsNumber;
	int16_t& cmdScore;
};