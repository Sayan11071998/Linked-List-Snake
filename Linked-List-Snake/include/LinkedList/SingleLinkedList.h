#pragma once
#include <SFML/System/Vector2.hpp>
#include "LinkedList/Node.h"

namespace LinkedList
{
	class SingleLinkedList
	{
	public:
		SingleLinkedList();
		~SingleLinkedList();

		void initialize(float width, float height, sf::Vector2i position, Direction direction);
		void render();

		void insertNodeAtTail();
		void updateNodePosition();
		void updateNodeDirection(Direction direction_to_set);
		bool processNodeCollision();
		void removeNodeAtHead();
		void removeAllNodes();

		bool processNodeCollision();
		Node* getHeadNode();

	private:
		Node* head_node;

		float node_width;
		float node_height;

		sf::Vector2i default_position;
		Direction default_direction;

		Node* createNode();
		sf::Vector2i getNewNodePosition(Node* reference_node);
	};
}