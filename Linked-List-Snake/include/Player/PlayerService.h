#pragma once

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

	private:
		SnakeController* snake_controller;

		void createController();
		
		void destroy();
	};
}