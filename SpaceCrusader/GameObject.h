#pragma once

#include <iostream>
#include "SFML\Graphics.hpp"
#include "Globals.h"

class GameObject
{
private:
	int ID;
	bool alive;
	bool collidable;


protected:
	float x;
	float y;

	float velX;
	float velY;

	int dirX;
	int dirY;

	int boundX;
	int boundY;

	int maxFrame;
	int curFrame;
	int frameCount;
	int frameDelay;
	int frameWidth;
	int frameHeight;
	int animationDirection;
	int animationColumns;

	sf::Texture texture;
	sf::Sprite sprite;


public:
	GameObject();
	void Init(float x, float y, float velX, float velY, int dirX, int dirY, int boundX, int boundY);
	void virtual Update(float dt);
	void virtual Render(sf::RenderWindow &window);

	float GetX() { return x; }
	float GetY() { return y; }

	void SetX(float x) { GameObject::x = x; }
	void SetY(float y) { GameObject::y = y; }

	int GetBoundX() { return boundX; }
	int GetBoundY() { return boundY; }

	int GetID() { return ID; }
	void SetID(int ID) { GameObject::ID = ID; }

	bool GetAlive() { return alive; }
	void SetAlive(bool alive) { GameObject::alive = alive; }

	bool GetCollidable() { return collidable; }
	void SetCollidable(bool collidable) { GameObject::collidable = collidable; }

	bool CheckCollisions(GameObject otherObject);
	void virtual Collided(int objectID);
	bool Collidable();



};

