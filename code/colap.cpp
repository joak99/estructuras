#include "colap.h"
#include <list>
#include "proceso.h"
#include <iostream>
using namespace std; 

 
 
ColaPrioridad::ColaPrioridad(){
}

 
void ColaPrioridad::adicionar(Proceso p){
	this -> buffer.push_front(p);
}
 
 
void ColaPrioridad::retirar(){
	this -> buffer.pop_front();
} 
 

Proceso ColaPrioridad::obtenerPrimero(){
	return this -> buffer.front();
}
 
void ColaPrioridad::mostrarse(){
	
	list <Proceso>::iterator iteratorBuff;
	for(iteratorBuff = buffer.begin(); iteratorBuff != buffer.end(); iteratorBuff++){
		Proceso p= *iteratorBuff;
		
		p.mostrarse();
	}
	//cout << endl;
	/*int n= this -> buffer.size();
	list <Proceso> tmp(buffer);
	for (int i=0; i < n; i++){
		 Proceso p= tmp.front();
		 tmp.pop_front();
		 p.mostrarse();

	}*/
}
 
bool ColaPrioridad::estaVacia(){
	/*if (this -> buffer.size()== true){
		return true;
	}*/
	return buffer.empty();
}