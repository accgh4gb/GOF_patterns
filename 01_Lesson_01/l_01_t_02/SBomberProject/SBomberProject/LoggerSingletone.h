#pragma once
#include "FileLoggerSingletone.h"

static int logNum = 0;

class LoggerSingletone
{
public:
	static LoggerSingletone& getInstance()
	{
		static LoggerSingletone instance;
		return instance;
	}
	void __fastcall OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const std::string& str);

	void __fastcall WriteToLog(const std::string& str, int n);

	void __fastcall WriteToLog(const std::string& str, double d);

private:
	LoggerSingletone() {};
	~LoggerSingletone() {};
	FileLoggerSingletone *pFileLogger;
	LoggerSingletone(const LoggerSingletone& object) = delete;
	LoggerSingletone& operator = (const LoggerSingletone& object) = delete;
};