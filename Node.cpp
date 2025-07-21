#include "Node.hpp"

Node::Node(int data, Node* next) {
	this->data = data;
	this->next = next;
}

int Node::get_data() {
	return this->data;
}

Node* Node::get_next() {
	return this->next;
}

int Node::set_data(int set_data) {
	if (set_data < 0):
		return 0;
	
	this->data = set_data;
	return 1;
}

Node* Node::set_next(Node* next) {
	this->next = next;
}	
