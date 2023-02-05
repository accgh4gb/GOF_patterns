#include "AbstractCommand.h"
#include <string>

void DeleteDynamicObjCmd::Execute()
{
    auto it = vecDynamicObj.begin();
    for (; it != vecDynamicObj.end(); it++)
    {
        if (*it == pBombObj)
        {
            vecDynamicObj.erase(it);
            break;
        }
    }
}

void DeleteStaticObjCmd::Execute()
{
    auto it = vecStaticObj.begin();
    for (; it != vecStaticObj.end(); it++)
    {
        if (*it == pStaticObj)
        {
            vecStaticObj.erase(it);
            break;
        }
    }
}

void DropBombCmd::Execute()
{
    if (CmdBombsNumber > 0)
    {
        double x = pPlaneObj->GetX() + 4;
        double y = pPlaneObj->GetY() + 2;

        Bomb* pBomb = new Bomb;
        pBomb->SetDirection(0.3, 1);
        pBomb->SetSpeed(2);
        pBomb->SetPos(x, y);
        pBomb->SetWidth(SMALL_CRATER_SIZE);

        vecDynObj.push_back(pBomb);
        CmdBombsNumber--;
        cmdScore -= Bomb::BombCost;
    }
}