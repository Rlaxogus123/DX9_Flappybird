#pragma once
template <class T>

// �̱��� ���� �����ϱ�
class Singleton
{
private:
	static T* ins;
public:
	static T* GetIns()
	{
		if (ins == nullptr)
			ins = new T();
		return ins;
	}
};
template <class T> T* Singleton<T>::ins = nullptr;

class Time
{
public:
	static float deltaTime;
	static float scaleTime;
};