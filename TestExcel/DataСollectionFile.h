#pragma once
#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class DataÑollection {
public:
	DataÑollection() {}

	void AddData(std::string& str);
	std::vector<std::string> GetData();

	void OpenFile(std::string& path);
	int GetStrSize();

	~DataÑollection() {

	}
private:
	std::string path;
	std::vector<std::string> data;
};