#include <fstream>


class Rock
{
	Rock()
	{
	}
	
	~Rock()
	{
	}
	
	void IOS(std::string fileName)
	{
		std::ifstream ifs(fileName, std::ios::binary);
		
		ifs.close();
	}
};

