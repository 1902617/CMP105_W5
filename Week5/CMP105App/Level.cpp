#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	zombTexture.loadFromFile("gfx/animZombie.png");
	float zombieCounter = 0;
	currZombie = 0;
	isIdle = true;
	idleDir = false;
	speed = 500.0f;

	for (int i = 0; i <= 4; i++)
	{
		zombies[i].setSize(sf::Vector2f(55,108));
		zombies[i].setPosition(100, (100 + zombieCounter));
		zombies[i].setTexture(&zombTexture);
		zombieCounter += 100;
	}

	playerTexture.loadFromFile("gfx/ArcherSpriteSheet.png");
	player.setSize(sf::Vector2f(180, 240));
	player.setPosition(300, 300);
	player.setTexture(&playerTexture);


}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	/*if(input->isKeyDown(sf::Keyboard::W))
	{
		currZombie--;
		if (currZombie <= 0)
		{
			currZombie = 0;
		}
		input->setKeyUp(sf::Keyboard::W);
	}*/

	/*if (input->isKeyDown(sf::Keyboard::S))
	{
		currZombie++;
		if (currZombie >= 4)
		{
			currZombie = 4;
		}
		input->setKeyUp(sf::Keyboard::S);
	}*/

	if (input->isKeyDown(sf::Keyboard::D))
	{
		isIdle = false;
		idleDir = false;
		player.walkingRight(dt);
		player.move(speed * dt, 0);
		player.update(dt);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		isIdle = false;
		idleDir = true;
		player.walkingLeft(dt);
		player.move(-speed * dt, 0);
		player.update(dt);
	}

	if (!input->isKeyDown(sf::Keyboard::D) && !input->isKeyDown(sf::Keyboard::A))
	{
		isIdle = true;
	}
}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);

	if (isIdle && idleDir)
	{
		for (int i = 0; i <= 4; i++)
		{
			player.idleLeft(dt);
		}
	}
	else if(isIdle && !idleDir)
	{
		for (int i = 0; i <= 4; i++)
		{
			player.idleRight(dt);
		}
	}
}

// Render level
void Level::render()
{
	beginDraw();

	////for (int i = 0; i <= 4; i++)
	////{
	//	window->draw(zombies[i]);
	//}
	window->draw(player);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}