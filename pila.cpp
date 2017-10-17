#include <vector>
#include <iostream>

using namespace std;

template <class T> 

class Pila : public vector <T> {
	public:
		Pila();
		//-Pila();
		void adicionar(T elemento);
		void mostrar();
		T eliminar();
};
template <class T>
Pila <T>::Pila(): vector<T>(){}

template <class T>
void Pila <T>:: adicionar(T elemento){
	push_back(elemento);
}
template <class T>
void Pila <T>:: mostrar(){
	int n= this -> size();
	for (int i= 0; i < n; i++){
		cout << this ->  at(i)<< ", ";
	}
}

template <class T>
T Pila <T>:: eliminar(){
	int lastPos = this -> size()-1;
	T elemento = this -> at(lastPos);
	this -> pop_back(elemento);
	return elemento;
}
