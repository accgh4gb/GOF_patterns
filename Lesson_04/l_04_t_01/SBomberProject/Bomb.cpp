#include <iostream>

#include "Bomb.h"
//#include "MyTools.h"
#include "ScreenSingletone.h"
#include "BombDecorator.h"

//using namespace std;
//using namespace MyTools;

void Bomb::Draw() const
{
    ScreenSingletone::getInstance().SetColor(CC_LightMagenta);
    ScreenSingletone::getInstance().GotoXY(x, y);
    std::cout << "*";
}

void BombDecorator::Draw() const
{
    pBombObj->Draw();
    ScreenSingletone::getInstance().GotoXY(pBombObj->GetX(), pBombObj->GetY() - 1);
    std::cout << "|";
}
void BombDecorator::SetPos(double nx, double ny) { pBombObj->SetPos(nx, ny); }
uint16_t BombDecorator::GetWidth() const { return pBombObj->GetWidth(); }
void BombDecorator::Move(uint16_t time) { pBombObj->Move(time); }
void BombDecorator::SetSpeed(double sp) { pBombObj->SetSpeed(sp); }
void BombDecorator::SetDirection(double nx, double ny) { pBombObj->SetDirection(nx, ny); }
double BombDecorator::GetY() const { return pBombObj->GetY(); }
double BombDecorator::GetX() const { return pBombObj->GetX(); }
