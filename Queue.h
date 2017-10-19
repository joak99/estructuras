#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <vector>
using namespace std;

template <class Q>

class Queue : public vector <Q>{
	public:
		Queue();
		void add(Q element);
		void show();
		Q eliminate();

};

#endif
