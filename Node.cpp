#include <new>	//FOR STD::NOTHROW
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

void Node::set_next(Node* next) {
	this->next = next;
}	
