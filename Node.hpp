#ifndef NODE_HPP
#define NODE_HPP

class Node {
	public:	
		int data;
		Node* next;
		Node(int data=0, Node* next=nullptr);
		int get_data();
		Node* get_next();
		void set_data(int set_data);
		void set_next(Node* next=nullptr);
};

#endif
