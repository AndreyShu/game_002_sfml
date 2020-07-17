#include "Player.h"

void Player::initVariables()
{
	this->movementSpeed = 10.f;
}

void Player::initShape()
{
	this->shape.setFillColor(sf::Color::Green);
	this->shape.setSize(sf::Vector2f(50.f, 50.f));
}

Player::Player(float x, float y)
{
	this->shape.setPosition(x, y);

	this->initVariables();
	this->initShape();
}

Player::~Player()
{

}

void Player::updateInput()
{
	//Keyboard
	//Left
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		this->shape.move(-this->movementSpeed, 0.f);
	}
	//Right
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		this->shape.move(this->movementSpeed, 0.f);
	}
	//Up
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
	this->shape.move(0.f, -this->movementSpeed);
	}
	//Down
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
	this->shape.move(0.f, this->movementSpeed);
	}

}

void Player::update(sf::RenderTarget* target)
{
	//Window bounds collision

	this->updateInput();
}

void Player::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
