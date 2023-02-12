
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    ScreenSingletone::getInstance().SetColor(CC_LightMagenta);
    ScreenSingletone::getInstance().GotoXY(x, y);
    cout << "*";
}