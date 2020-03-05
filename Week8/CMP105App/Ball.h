#pragma once
#include "Framework/GameObject.h"
class Ball : public GameObject
{
public:
	Ball();
	~Ball();

	void handleInput(float dt) override;

	float speed = 200;
};

