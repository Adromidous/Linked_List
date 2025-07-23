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

Node* Node::create_node (int data, Node* next) {
	return new (std::nothrow) Node(data, next); //THROW NULLPTR INSTEAD OF ERROR
}
