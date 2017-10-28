
#include "colap.h"
#include "proceso.h"
#include "unidadp.h"
#include <list>
#include <iostream>
using namespace std;

int main(){
	ColaPrioridad cp;
	UnidadProcesamiento cpu;
	for (int i=0; i < 10; i++){
		Proceso p(i);
		p.mostrarse();
		cp.adicionar(p);
	}
	do{
		cp.mostrarse();
		Proceso q= cp.obtenerPrimero();
		cp.retirar();
		cpu.procesar(q);
		if(q.getEstado() !=  "Finished"){
			cp.adicionar(q);
		
		}	
	}while(cp.estaVacia() != true);
	return 0;
}