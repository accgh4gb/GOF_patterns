
#include <conio.h>

#include "SBomber.h"
//#include "MyTools.h"
#include "ScreenSingletone.h"
#include "FileLoggerSingletone.h"

using namespace std;

//========================================================================================================================

int main(void)
{
    FileLoggerSingletone::GetInstance()->OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        ScreenSingletone::getInstance().ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();

    } while (!game.GetExitFlag());

    FileLoggerSingletone::GetInstance()->CloseLogFile();

    return 0;
}
