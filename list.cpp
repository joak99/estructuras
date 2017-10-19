#include <vector>
#include <iostream>
#include "list.h"
using namespace std;

template <class L>
List <L>:: List(): vector <L>(){}

template <class L>
void List<L>::add(L element){
	this -> push_back(element);
}

template <class L>
void List <L>:: show(){
	for (int i=0; i < this->size(); i++){
		cout << this -> at(i)<< ",";
	}
	cout <<endl;
}

template <class L>
int List <L>:: length(){
	int len = this -> size();
	cout << "the length is: " << len; 
	cout << endl;
}
/*

template <class L>
int List <L>:: search(L element){
	for (int i=0; i < this-> size(); i++){
		if (element == i){
			//cout <<"you're searching the element: "<< element;
			//cout << endl;
			//cout <<"the element  wasn't found, dude. Sorry :(";
			//cout <<endl;
			cout <<"you found it"<<endl;
			return i;

		}
	cout <<"Sorry, the element wasn't found."<<endl;
	}
}*/
template <class L>
void List <L>:: insert1(L element, int pos){

	this -> insert(pos, element);

}

//template <class L>
//template <class L
