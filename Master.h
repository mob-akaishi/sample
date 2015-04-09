
#ifndef MASTER_
#define MASTER_

class Master
{
public:
	Master();
	
	~Master();
	
	void Lock(int seed);
	
	void Unlock();
	
	int getKey() const;
	
private:
	explicit Master(const Master&) delete;
	Master& operator = (const Master&) delete;
	
private:
	int m_lock;
};

#endif // end of MASTER_
