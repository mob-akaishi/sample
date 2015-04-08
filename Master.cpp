

class Master
{
	Master()
	:
	m_lock(0xffff)
	{
	}
	
	~Master()
	{
	}
	
	private int m_lock;
	
	void Lock(int seed)
	{
		m_lock = 0x100;
		
		m_lock += 0x404*(3*seed);
		
		m_lock /= (2 + seed);
		
		m_lock -= seed^99;
	}
	
	void Unlock()
	{
		m_lock = 0xffff;
	}
};

