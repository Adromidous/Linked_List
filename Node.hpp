#ifndef NODE_HPP
#define NODE_HPP

class Node {
	protected:
		int data;
		Node* next;

	public:	
		Node(int data=0, Node* next=null);
		int get_data();
		Node* get_next();
		int set_data(int set_data);
		Node* set_next(Node* next=null);
};

#endif
