#include <string>
#include "LoggerSingletone.h"
#include "FileLoggerSingletone.h"

void __fastcall LoggerSingletone::OpenLogFile(const std::string& FN)
{
	if (!LoggerSingletone::pFileLogger) {
		LoggerSingletone::pFileLogger = &FileLoggerSingletone::GetInstance();
	}
	LoggerSingletone::pFileLogger->GetInstance().OpenLogFile(FN);
}

void LoggerSingletone::CloseLogFile()
{
	LoggerSingletone::pFileLogger->GetInstance().CloseLogFile();
}


void __fastcall LoggerSingletone::WriteToLog(const std::string& str)
{

	LoggerSingletone::pFileLogger->GetInstance().WriteToLog(std::to_string(++logNum) + ": " + str);
}

void __fastcall LoggerSingletone::WriteToLog(const std::string& str, int n)
{
	LoggerSingletone::pFileLogger->GetInstance().WriteToLog(std::to_string(++logNum) + ": " + str, n);
}

void __fastcall LoggerSingletone::WriteToLog(const std::string& str, double d)
{
	LoggerSingletone::pFileLogger->GetInstance().WriteToLog(std::to_string(++logNum) + ": " + str, d);
}