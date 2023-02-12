#include "FileLoggerSingletone.h"
#include "Visitor.h"

void LogVisitor::log(const Bomb& bomb) const {
	FileLoggerSingletone::getInstance().WriteToLog("XBombCoord", bomb.GetX());
	FileLoggerSingletone::getInstance().WriteToLog("YBombCoord", bomb.GetY());
}

void LogVisitor::log(const Plane& plane) const {
	FileLoggerSingletone::getInstance().WriteToLog("XPlaneCoord", plane.GetX());
	FileLoggerSingletone::getInstance().WriteToLog("YPlaneCoord", plane.GetY());

}