
#include <iostream>

#include "Plane.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Plane::Draw() const
{
    Color();
    DrawBody();
    DrawTail();
    DrawWings();

 /*   ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "=========>";
    ScreenSingleton::getInstance().GotoXY(x - 2, y - 1);
    cout << "===";
    ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
    cout << "////";
*/
}
void Plane::Color() const {
    ScreenSingletone::getInstance().SetColor(CC_LightBlue);
}
void Plane::DrawBody() const {
    ScreenSingletone::getInstance().GotoXY(x, y);
    cout << "=========>";
}
void Plane::DrawTail() const {
    ScreenSingletone::getInstance().GotoXY(x - 2, y - 1);
    cout << "===";
}
void Plane::DrawWings() const  {
    ScreenSingletone::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingletone::getInstance().GotoXY(x + 3, y + 1);
    cout << "////";
}
void ColorPlane::Color() const {
    ScreenSingletone::getInstance().SetColor(CC_Brown);
}
void BigPlane::DrawBody() const {
    ScreenSingletone::getInstance().GotoXY(x, y);
    cout << "===============>";
}
void BigPlane::DrawTail() const {
    ScreenSingletone::getInstance().GotoXY(x - 2, y - 1);
    cout << "======";
}
void BigPlane::DrawWings() const {
    ScreenSingletone::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\\\\\\\";
    ScreenSingletone::getInstance().GotoXY(x + 3, y + 1);
    cout << "////////";
}