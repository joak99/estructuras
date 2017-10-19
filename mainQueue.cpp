#include <iostream>
#include <vector>
#include "cola.cpp"

using namespace std;

int main(){

	Queue <int> q ;
	q.add(1);
	q.add(2);
	q.add(3);
	
	q.show();
	q.eliminate();
	q.show();
	q.eliminate();
	q.show();
	q.eliminate();
	q.show();
	q.eliminate();
	q.show();
	
	return 0;

}


