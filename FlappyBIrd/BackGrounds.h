#pragma once
#include "Sprite.h"
#include "System.h"
#include "Scene.h"

class BackGrounds
{
private:
	Sprite* background[2];
	Sprite* tile[2];
	Sprite* WhiteScreen;

	bool bScene = false;
	Scene* newScene = nullptr;
public:
	

	void BackGroundInit();
	void BackGroudUpdate();
	void ChangeScene(Scene* s);
};

