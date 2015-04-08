

class Master
{
	Master()
	{
	}
	
	~Master()
	{
	}
	
	private int m_rock;
	
	void Rock(int seed)
	{
		m_rock = 0x100;
		
		m_rock += 0x404*(3*seed);
		
		m_rock /= (2 + seed);
		
		m_rock -= seed^99;
	}
};

