#include <iostream>
#include "Linked_List.hpp"
#include "Node.hpp"

int main() {

	Node* first_node = new Node(5, nullptr);
	Node* second_node = new Node(2, nullptr);

	std::cout << "NODE DATA: " << first_node->get_data() << std::endl;

	Linked_List* ll = new Linked_List();

	std::cout << "LINKED LIST SIZE: " << ll->get_size() << std::endl;
	
	if (ll->is_empty()) {
		std::cout << "LINKED LIST IS EMPTY!" << std::endl;
	}

	ll->insert_node(first_node);

	ll->traverse();

	ll->insert_node(second_node);

	ll->traverse();

	ll->remove_node(5);

	ll->traverse();

	ll->remove_node(2);

	ll->traverse();

	//Clean up all nodes
	delete first_node;	
	delete second_node;
	delete ll;

	return 0;
}
