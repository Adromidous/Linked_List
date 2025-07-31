#include "Linked_List.hpp"
#include <iostream>

Linked_List::Linked_List() {
	this->size = 0;
	this->head = nullptr;
}

int Linked_List::get_size() {
	return this->size;
}

int Linked_List::is_empty() {
	if (this->size == 0) {
		return 1;
	} else {
		return 0;
	}
}

void Linked_List::traverse() {
	Node* curr = this->head;
	
	std::cout << "======TRAVERSAL BEGIN======" << std::endl;
	
	while (curr) {
		std::cout << curr->data << " ";
		curr = curr->next;
	}

	std::cout << std::endl;

	std::cout << "======TRAVERSAL ENDS======" << std::endl;
}

int Linked_List::insert_node(Node* node) {

	if (node == nullptr) {
		return 0;
	}

	if (this->is_empty()) {
		this->head = node;
		++this->size;
		return 1;
	}

	Node* curr = this->head;

	while (curr->next) {
		curr = curr->next;
	}

	curr->next = node;
	++this->size;

	return 1;
}

Node* Linked_List::remove_node(int data) {
	Node* curr = this->head;
	Node* ret_node = nullptr;

	while (curr->next) {
		if (curr->next->data == data) {
			ret_node = curr->next;
			curr->next = curr->next->next;
		}	
	}

	return ret_node;	
}
