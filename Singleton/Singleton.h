#pragma once

template<typename Var>
class Singleton
{
public:

	Var MyInstance() {
		if (m_Instance == nullptr) { m_Instance = new Var(); }
		return m_Instance;
	}

private:
	static Singleton* m_Instance = nullptr;
};

