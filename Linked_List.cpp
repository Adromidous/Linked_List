#include "Linked_List.hpp"

Linked_List::Linked_List() {

}

int Linked_List::get_size() {
	return this->size;
}

void Linked_List::traverse() {
	Node* curr = this->head;

	while (curr) {
		curr = curr->next;
	}

	return 1;
}

int Linked_List::insert_node(Node* node) {
}
