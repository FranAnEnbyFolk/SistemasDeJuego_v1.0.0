#pragma once

template<typename Var>
class Singleton
{
public:

	Var Instance() {
		if (m_Instance == nullptr) { m_Instance = new Var(); }
		return m_Instance;
	}

	void StartUp() {  };

	void ShutDown() {  };

private:
	static Singleton* m_Instance = nullptr;
};

