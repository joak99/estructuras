#include <vector>
#include <iostream>
#include "pila.h"

using namespace std;

template <class T>
Pila <T>::Pila(): vector<T>(){}

template <class T>
void Pila <T>:: adicionar(T elemento){
	this -> push_back(elemento);
}
template <class T>
void Pila <T>:: mostrar()
{
	int n= this -> size();
	for (int i= 0; i < n; i++){
	
		cout << this ->  at(i)<< ",";
	}
	cout<< endl; 
}

template <class T>
T Pila <T>:: eliminar(){
	int lastPos = this -> size()-1;
	T elemento = this -> at(lastPos);
	this -> pop_back();
	return elemento;
}

//hOLAAAAAAAAAA
