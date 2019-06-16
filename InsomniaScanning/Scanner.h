#pragma once
#include <windows.h>
#include <string>
#include <unordered_map>

class Scanner 
{
public:
	//scanner used for scanning memory
	Scanner();
	~Scanner();
	//opens handle to process by name
	//returns true if successful
	bool openHandle(const std::string& a_ProcessName);
	//opens handle to process by ID
	//returns true if sucessful
	bool openHandle(const unsigned int a_ProcessID);
	//close handle
	void closeHandle();
	//find module by name and store all modules memory
	void findModule(const std::string& a_ModuleName);
	//print specified module's memory
	void printModuleBytes(const std::string& a_ModuleName);
	//print all module memory stored
	void printAllModuleBytes() const;

	void writeMemory();
private:
	//Process Handle
	HANDLE processHandle = NULL;
	//Key: Module Name
	//Pair: Bytes associated to Module
	std::unordered_map<std::string, std::vector<char>> moduleBytes;
};