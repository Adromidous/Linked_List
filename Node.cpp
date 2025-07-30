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

void Node::set_data(int set_data) {
	this->data = set_data;
}

Node* Node::set_next(Node* next) {
	this->next = next;
}	

Node* Node::create_node (int data, Node* next) {
	return new (std::nothrow) Node(data, next); //THROW NULLPTR INSTEAD OF ERROR
}
