#include "Player/SnakeController.h"

namespace Player
{
	SnakeController::SnakeController() {}

	SnakeController::~SnakeController() { destroy(); }

	void SnakeController::initialize() {}

	void SnakeController::update()
	{
		switch (current_snake_state)
		{
		case Player::SnakeState::ALIVE:
			processPlayerInput();
			updateSnakeDirection();
			processSnakeCollision();
			moveSnake();
			break;
		case Player::SnakeState::DEAD:
			handleRestart();
			break;
		}
	}

	void SnakeController::render() {}

	void SnakeController::spawnSnake()
	{
	}

	void SnakeController::respawnSnake()
	{
	}

	void SnakeController::processPlayerInput()
	{
	}

	void SnakeController::updateSnakeDirection()
	{
	}

	void SnakeController::moveSnake()
	{
	}

	void SnakeController::processSnakeCollision()
	{
	}

	void SnakeController::handleRestart()
	{
	}

	SnakeState SnakeController::getSnakeState() { return current_snake_state; }

	void SnakeController::setSnakeState(SnakeState state) { current_snake_state = state; }

	void SnakeController::reset()
	{
	}

	void SnakeController::destroy()
	{
	}
}