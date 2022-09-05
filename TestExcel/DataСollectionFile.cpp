#include "DataÑollectionFile.h"

void DataÑollection::AddData(std::string& str) {
	data.push_back(str);
}

std::vector<std::string> DataÑollection::GetData() {
	if (data.size() == 0 || data.size() == NULL) {
		///
	}
	return data;
}

void DataÑollection::OpenFile(std::string& path) {

	std::string data_str;

	std::ifstream File(path);
	if (File.is_open()) {
		int i = 0;
		while (getline(File, data_str))
		{
		
			AddData(data_str);
		}
	}
	File.close();
}

int DataÑollection::GetStrSize() {
	return data.size();
}