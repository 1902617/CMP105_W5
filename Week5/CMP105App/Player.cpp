#include "Player.h"

Player::Player()
{
	int y = 0, w = 22, h = 25;
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
	//idle.addFrame(sf::IntRect(242, y, w, h));


	idle.setFrameSpeed(1.f / 10.f);
	/*
	walk.addFrame(sf::IntRect(55, 0, 55, 108));
	walk.addFrame(sf::IntRect(110, 0, 55, 108));
	walk.addFrame(sf::IntRect(165, 0, 55, 108));
	walk.addFrame(sf::IntRect(220, 0, 55, 108));
	walk.addFrame(sf::IntRect(275, 0, 55, 108));
	walk.addFrame(sf::IntRect(330, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.addFrame(sf::IntRect(385, 0, 55, 108));
	walk.setFrameSpeed(1.f / 20.f);
	*/
	
}

Player::~Player()
{

}

void Player::update(float dt)
{
	idle.animate(dt);
	setTextureRect(idle.getCurrentFrame());
//	walk.animate(dt);
	//setTextureRect(walk.getCurrentFrame());
}

void Player::idleLeft(float dt)
{
	//idle.setFlipped(true);
	//idle.animate(dt);
	//setTextureRect(idle.getCurrentFrame());
}

void Player::idleRight(float dt)
{
	//idle.setFlipped(false);
	//idle.animate(dt);
	//setTextureRect(idle.getCurrentFrame());
}

void Player::walkingRight()
{
	//walk.setFlipped(false);
}

void Player::walkingLeft()
{
	//walk.setFlipped(true);
}