#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "Node.hpp"

class Linked_List {

	private :
		int size;
		Node* head;
	
	public :
		Linked_List();
		int get_size();
		void traverse();
		int insert_node(Node* node);
		Node* remove_node(int data);
};

#endif
