#pragma once
#include <stdint.h>
#include <string>

class FileLoggerSingletone
{
public:
	static FileLoggerSingletone* GetInstance()
	{
		static FileLoggerSingletone theInstance;
		return &theInstance;
	}

	void __fastcall OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const std::string& str);

	void __fastcall WriteToLog(const std::string& str, int n);

	void __fastcall WriteToLog(const std::string& str, double d);

private:
	FileLoggerSingletone() {};
	FileLoggerSingletone(const FileLoggerSingletone& obj) = delete;
	FileLoggerSingletone& operator= (const FileLoggerSingletone& obj) = delete;
};

