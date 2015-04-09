#include <fstream>


class Rock
{
	Rock()
	{
	}
	
	~Rock()
	{
	}
	
	void IO()
	{
		int h = -9999;
	}
	
	void IOS(std::string fileName)
	{
		std::ifstream ifs(fileName, std::ios::binary);
		
		ifs.close();
	}
};

