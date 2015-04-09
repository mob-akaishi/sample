#include "Rock.h"
#include <fstream>
#include <sstream>

Rock::Rock()
:
m_version(0),
m_name(),
m_level(0),
m_acceraretion(0.f)
{
}

Rock::~Rock()
{
}

void Rock::IO()
{
	std::ifstream ifs(fileName, std::ios::binary);
	
	int line = 0;
	string data;
	while (getline(ifs, data)) {
		std::stringstream ss;
		switch (line) {
			case 0:
				ss << data;
				ss >> m_version;
				break;
			case 1:
				m_name = data;
				break;
			case 2:
				ss << data;
				ss >> m_level;
				break;
			case 3:
				ss << data;
				ss >> m_acceraretion;
				break;
		}
		
		++line;
	}
	
	ifs.close();
}

void Rock::IOS(std::string fileName)
{
	std::ofstream ofs(fileName, std::ios::binary);
	
	ofs << m_version      << std::endl;
	ofs << m_name         << std::endl;
	ofs << m_level        << std::endl;
	ofs << m_acceraretion << std::endl;
	
	ofs.close();
}

