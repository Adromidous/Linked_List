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
		std::cout << curr->data << ", " << std::endl;
	}

	return 1;
}

int Linked_List::insert_node(Node* node) {

	if (node == null) {
		return 0;
	}

	Node* curr = this->head;

	while (curr->next) {
		curr = curr->next;
	}
	curr.next = node;

	return 1;
}

Node* Linked_List::remove_node(int data) {
	Node* curr = this->head;
	Node* ret_node = null;

	while (curr->next) {
		if (curr->next.data == data) {
			ret_node = curr->next;
			curr->next = curr->next->next;
		}	
	}
	return ret_node;	
}
