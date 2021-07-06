#pragma once

#include "Renderer.h"
#include "Singleton.h"

class Scene
{
public: 
	// vTable ( ���߾� ���̺� ) �����ؿ���
	virtual void Init() PURE;
	virtual void Update() PURE;
	virtual void Exit();
};

