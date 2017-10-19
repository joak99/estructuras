#ifndef __PILA_H__
#define __PILA_H__

#include <vector>
#include <iostream>
using namespace std;
template <class  T>

class Pila : public vector <T> {
public:
	Pila();
	void adicionar(T elemento);
	void mostrar();
	T eliminar();

};
#endif
