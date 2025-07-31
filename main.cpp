#include <iostream>
#include "Linked_List.hpp"


int main() {

	Node* node = new Node(5, NULL);

	std::cout << "NODE DATA: " << node->get_data() << std::endl;

	delete node;	

	return 0;
}
