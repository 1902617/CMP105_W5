#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Zombie: public GameObject
{ 
public:
	Zombie();
	~Zombie(); 

	void update(float dt) override;
	void idleZombieL(float dt);
	void idleZombieR(float dt);
	void walkingRight();
	void walkingLeft();

protected:
	Animation walk;
	Animation idle; 
};