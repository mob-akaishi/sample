
#ifndef ROCK_
#define ROCK_

#include <string>

class Rock
{
public:
	Rock();
	
	~Rock();
	
	void IO();
	
	void IOS(std::string& fileName);
	
private:
	explicit Rock(const Rock&) delete;
	Rock& operator = (const Rock&) delete;
	
private:
	int         m_version;
	std::string m_name;
	int         m_level;
	float       m_acceraretion;
};

#endif // end of ROCK_
