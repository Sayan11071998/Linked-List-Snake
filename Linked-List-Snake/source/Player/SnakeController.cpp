#include "Player/SnakeController.h"
#include "Global/ServiceLocator.h"
#include "Level/LevelService.h"
#include "Event/EventService.h"
#include <iostream>

namespace Player
{
	using namespace LinkedList;
	using namespace Global;
	using namespace Level;
	using namespace Event;
	using namespace Time;

	SnakeController::SnakeController()
	{
		single_linked_list = nullptr;
		createLinkedList();
	}

	SnakeController::~SnakeController() { destroy(); }

	void SnakeController::createLinkedList()
	{
		single_linked_list = new SingleLinkedList();
	}

	void SnakeController::initialize()
	{
		float width = ServiceLocator::getInstance()->getLevelService()->getCellWidth();
		float height = ServiceLocator::getInstance()->getLevelService()->getCellHeight();

		single_linked_list->initialize(width, height, default_position, default_direction);

	}

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

	void SnakeController::render() { single_linked_list->render(); }

	void SnakeController::spawnSnake()
	{
		for (int i = 0; i < initial_snake_length; i++)
		{
			single_linked_list->insertNodeAtTail();
		}
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
		delete single_linked_list;
	}
}