#include "pila.cpp"
#include <stdexcept>

int main(){
try{
	Pila <int> p;
	
	p.adicionar(2);
	p.adicionar(3);
	p.adicionar(6);
	p.adicionar(7);
	
	p.mostrar();
	
	p.eliminar();
	
	p.mostrar();
	p.eliminar();
	p.mostrar();
	p.eliminar();
	p.mostrar();
	p.eliminar();
	p.mostrar();
	p.eliminar();
	p.mostrar();
	p.eliminar();
	p.mostrar();
	return 0;
	
}catch (const std::out_of_range &oor){
	cout <<"No hay mas para eliminar papuuu >:u" << endl;
	}
}
