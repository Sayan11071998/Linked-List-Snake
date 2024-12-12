#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>
#include "Level/LevelService.h"
#include "Player/SnakeController.h"

namespace Player
{
	using namespace Level;
	class SnakeController;

	class PlayerService
	{
	public:
		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();

		void spawnPlayer(LinkedListType level_type);

		int getSnakeSize();
		int getPlayerScore();
		bool isSnakeSizeMinimum();

		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();

		bool isPlayerDead();
		SnakeState getSnakeState();
		std::vector<sf::Vector2i> getCurrentSnakePositionList();

	private:
		SnakeController* snake_controller;

		void createController();
		
		void destroy();
	};
}