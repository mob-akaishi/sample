#include "Master.h"

namespace
{
	const int LOCK_INIT = 0xffff;
}

Master::Master()
:
m_lock(LOCK_INIT)
{
}

Master::~Master()
{
}

void Master::Lock(int seed)
{
	m_lock = 0x100;
	
	m_lock += 0x404*(3*seed);
	
	m_lock /= (2 + seed);
	
	m_lock -= seed^99;
}

void Master::Unlock()
{
	m_lock = LOCK_INIT;
}

int Master::getKey() const
{
	if (m_lock == LOCK_INIT) {
		return 0;
	}
	
	return m_lock;
}
