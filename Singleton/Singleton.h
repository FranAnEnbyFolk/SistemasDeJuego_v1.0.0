#pragma once

template<typename Var>
class Singleton
{
private:
	static Singleton m_Instance;

public:
	Singleton();
	virtual void StartUp();
	virtual void ShutDown();
};

