#include <iostream>
#include <vector>
#include "LevelGUI.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void LevelGUI::Draw() const
{
    ScreenSingletone::getInstance().SetColor(CC_White);
    static vector <string>* Tank_message = Mediator::getInstance().Get_message();;
    static vector <double>* Tank_position = Mediator::getInstance().Get_tank_position();;
    ScreenSingletone::getInstance().GotoXY(x, y);
    char* buf = new (nothrow) char[width + 1];
    if (buf == nullptr)
    {
        return;
    }
    memset(buf, '+', width);
    buf[width] = '\0';
    cout << buf;
    ScreenSingletone::getInstance().GotoXY(x, y + height);
    cout << buf;
    delete [] buf;
    buf = nullptr;
    
    for (size_t i = size_t(y); i < height + y; i++)
    {
        ScreenSingletone::getInstance().GotoXY(x, (double)i);
        cout << "+";
        ScreenSingletone::getInstance().GotoXY(x + width - 1, (double)i);
        cout << "+";
    }

    ScreenSingletone::getInstance().GotoXY(3, 1);
    cout << "FramePerSecond: " << static_cast<int>(fps / (passedTime / 1000.0));
    ScreenSingletone::getInstance().GotoXY(25, 1);
    cout << "PassedTime: " << static_cast<int>(passedTime / 1000.0) << " sec";
    ScreenSingletone::getInstance().GotoXY(46, 1);
    cout << "BombsNum: " << bombsNumber;
    ScreenSingletone::getInstance().GotoXY(62, 1);
    cout << "Score: " << score;
    static int i = (passedTime/1000.0);
    if (i + 3 < (passedTime / 1000.0)) {
        Tank_message = Mediator::getInstance().Get_message();
        Tank_position = Mediator::getInstance().Get_tank_position();
    }
    for (int i = 0; i < Tank_message->size(); i++) {
        double pos = (*Tank_position)[i];
        ScreenSingletone::getInstance().GotoXY(pos, 25);
        cout << (*Tank_message)[i];
    }
    
}

void __fastcall LevelGUI::SetParam(uint64_t passedTimeNew, uint64_t fpsNew, uint16_t bombsNumberNew, int16_t scoreNew)
{
    passedTime = passedTimeNew;
    fps = fpsNew;
    bombsNumber = bombsNumberNew;
    score = scoreNew;
}
