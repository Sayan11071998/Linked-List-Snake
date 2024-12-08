#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>
#include "Player/SnakeController.h"

namespace Player
{
	class SnakeController;

	class PlayerService
	{
	public:
		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();

		void spawnPlayer();

		int getPlayerScore();
		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();
		std::vector<sf::Vector2i> getCurrentSnakePositionList();

	private:
		SnakeController* snake_controller;

		void createController();
		
		void destroy();
	};
}