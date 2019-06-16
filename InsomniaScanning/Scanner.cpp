#include "Scanner.h"

Scanner::Scanner() {}

Scanner::~Scanner() {}

bool Scanner::openHandle(const std::string& a_ProcessName)
{

	return false;
}

bool Scanner::openHandle(const unsigned int a_ProcessID)
{
	return false;
}

void Scanner::closeHandle()
{
}

void Scanner::findModule(const std::string& a_ModuleName)
{
}

void Scanner::printModuleBytes(const std::string& a_ModuleName)
{
}

void Scanner::printAllModuleBytes() const
{
}

