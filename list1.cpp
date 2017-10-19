int hista:: buscar(T elem){
	for(int i=0; i < this -> size(); i++){
		T tmp= this -> at (i);
		if (tmp == elem)
			return i;
	}
	return -1
}

void lista::setElemento(int pos, T element^){
	this -> at(pos)= elem;
}
