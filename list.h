#ifndef __LIST_H__
#define __LIST_H__

#include <vector>
#include <iostream>
using namespace std;

template <class L>

class List : public vector <L>{
	public:
		List();
		void add(L element);
		L eliminate(int pos);
		void show();
		int length();
		void insert(L element);
		int search(L element);
		L getElement(int pos);
		void setElement(L element, int pos);

};

#endif
