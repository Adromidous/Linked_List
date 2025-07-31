#include <iostream>
#include "Linked_List.hpp"


int main() {

	Node* node = new Node(5, NULL);

	std::cout << "NODE DATA: " << node->get_data() << std::endl;

	Linked_List* ll = new Linked_List();

	std::cout << "LINKED LIST SIZE: " << ll->get_size() << std::endl;
	
	if (ll->is_empty()) {
		std::cout << "LINKED LIST IS EMPTY!" << std::endl;
	}

	ll->insert_node(node);

	ll->traverse();
	//Clean up all nodes
	delete node;	
	delete ll;

	return 0;
}
