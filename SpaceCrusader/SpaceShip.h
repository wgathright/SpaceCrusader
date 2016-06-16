#pragma once
#include "GameObject.h"

class SpaceShip : public GameObject
{
private:
	int lives;
	int score;
	int animationRow;

public:
	SpaceShip();

	void Init(sf::Texture texture, sf::Sprite sprite);
	void Update();
	void Render();

	void MoveUp();
	void MoveDown();
};
