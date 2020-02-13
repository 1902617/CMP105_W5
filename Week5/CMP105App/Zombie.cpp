#include "Zombie.h"

Zombie::Zombie()
{
	walk.addFrame(sf::IntRect(0, 0, 55, 108));
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 20.f);

	idle.addFrame(sf::IntRect(165, 0, 55, 108));
	idle.addFrame(sf::IntRect(220, 0, 55, 108));
	idle.setFrameSpeed(1.f / 2.f);
}

Zombie::~Zombie()
{

}

void Zombie::update(float dt)
{
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
}

void Zombie::idleZombieL(float dt)
{
	idle.setFlipped(true);
	idle.animate(dt);
	setTextureRect(idle.getCurrentFrame());
}

void Zombie::idleZombieR(float dt)
{
	idle.setFlipped(false);
	idle.animate(dt);
	setTextureRect(idle.getCurrentFrame());
}

void Zombie::walkingRight()
{
	walk.setFlipped(false);
}

void Zombie::walkingLeft()
{
	walk.setFlipped(true);
}