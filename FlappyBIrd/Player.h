#pragma once
#include "Sprite.h"
#include "Font.h"

class Player : public Sprite
{
public:
	Sprite* body;

	Sprite* gameover;
	Sprite* blackscreen;
	Sprite* New;

	Font* HighScore;
	Font* curScore;

	explicit Player();
	virtual ~Player() {};

	bool turn;
	float tickTurn = 0.0f;

	vec2 velocity = { 0,0 };
	vec2 vEye = { 0,0 }; // eyeVector

	void Update() override;
	void Jump();
};

class PlayerMNG : public Singleton<PlayerMNG>
{
public:
	Player* player;

	void CreatePlayer() { player = new Player(); };
};