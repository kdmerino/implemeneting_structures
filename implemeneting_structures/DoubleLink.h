#ifndef DOUBLELINK_H
#define DOUBLELINK_H
# include "node_class.h"

template <class t>
class doubleLink
{
public:
	doubleLink(node<t>* head_src = nullptr, node<t>* tail_src = nullptr) : 
		head(head_src), tail(tail_src), size(bool(head_src && tail_src) + bool(head_src)) { ;	}
	~doubleLink() { ; }
//private:
	node <t>* head;
	node <t>* tail;
	int size;
};

#endif


