#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void update(float dt) override;
	void idleLeft(float dt);
	void idleRight(float dt);
	void walkingRight();
	void walkingLeft();

protected:
	Animation walk;
	Animation idle;
};