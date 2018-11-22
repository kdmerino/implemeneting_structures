#ifndef NODE_CLASS_H
#define NODE_CLASS_H

template <class data_abs>
class node {
public:
	// Constructors
	typedef data_abs data;
	node(data input = data(), node* head = nullptr, node* tail = nullptr) :
		value_field(input), head_ptr(head), tail_ptr(tail) {};
	~node();
	// Setters
	void set_value(data input);
	void set_head(node* head);
	void set_tail(node* tail);
	// Getters
	data value() const;
	node* head();
	node* tail();
	const node* head() const;
	const node* tail() const;

	//private:
	data value_field;
	node* head_ptr;
	node* tail_ptr;
};

// Constructors
typedef int data;
template <class D>
node<D>::~node() { ; }
// Setters
template <class D>
void node<D>::set_value(data input) { value_field = input; }
template <class D>
void node<D>::set_head(node* head) { head_ptr = head; }
template <class D>
void node<D>::set_tail(node* tail) { tail_ptr = tail; }
// Getters
template <class D>
D node<D>::value() const { return value_field; }
template <class D>
node<D>* node<D>::head() { return head_ptr; } // Modifiable node data and pointer
template <class D>
node<D>* node<D>::tail() { return tail_ptr; }
template <class D>
const node<D>* node<D>::head() const { return head_ptr; } // Constant node data + pointer
template <class D>
const node<D>* node<D>::tail() const { return tail_ptr; }


#endif