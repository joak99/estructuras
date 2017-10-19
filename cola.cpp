#include <vector>
#include <iostream>
#include "Queue.h"
using namespace std;


template <class Q>
Queue <Q> :: Queue():  vector <Q>(){}
template <class Q>
void Queue <Q> :: add(Q element){
	this-> push_back(element);
}

template <class Q>
void Queue <Q> :: show(){
	int n= this -> size();
	for(int i=0; i < n; i++){
		cout << this -> at(i)<<",";
	}cout <<endl;
}

template <class Q>
Q Queue <Q> :: eliminate(){
	this -> erase(this -> begin());
	
}

