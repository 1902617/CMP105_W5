#include "Player.h"

Player::Player()
{
	int y = 0, y2 = 25, w = 22, h = 25;
	idle.addFrame(sf::IntRect(0, y, w, h));		
	idle.addFrame(sf::IntRect(22, y, w, h));
	idle.addFrame(sf::IntRect(44, y, w, h));
	idle.addFrame(sf::IntRect(66, y, w, h));
	idle.addFrame(sf::IntRect(88, y, w, h));
	idle.addFrame(sf::IntRect(110, y, w, h));
	idle.addFrame(sf::IntRect(132, y, w, h));
	idle.addFrame(sf::IntRect(154, y, w, h));
	idle.addFrame(sf::IntRect(176, y, w, h));
	idle.addFrame(sf::IntRect(198, y, w, h));
	idle.addFrame(sf::IntRect(220, y, w, h));

	idle.setFrameSpeed(1.f / 2.f);

	walk.addFrame(sf::IntRect(0, y2, w, h));
	walk.addFrame(sf::IntRect(22, y2, w, h));
	walk.addFrame(sf::IntRect(44, y2, w, h));
	walk.addFrame(sf::IntRect(66, y2, w, h));
	walk.addFrame(sf::IntRect(88, y2, w, h));
	walk.addFrame(sf::IntRect(110, y2, w, h));
	walk.addFrame(sf::IntRect(132, y2, w, h));
	walk.addFrame(sf::IntRect(154, y2, w, h));
	walk.addFrame(sf::IntRect(176, y2, w, h));

	walk.setFrameSpeed(1.f / 10.f);
	
}

Player::~Player()
{

}

void Player::update(float dt)
{

}

void Player::idleLeft(float dt)
{
	idle.setFlipped(true);
	idle.animate(dt);
	setTextureRect(idle.getCurrentFrame());
}

void Player::idleRight(float dt)
{
	idle.setFlipped(false);
	idle.animate(dt);
	setTextureRect(idle.getCurrentFrame());
}

void Player::walkingRight(float dt)
{
	walk.setFlipped(false);
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
}

void Player::walkingLeft(float dt)
{
	walk.setFlipped(true);
	walk.animate(dt);
	setTextureRect(walk.getCurrentFrame());
}