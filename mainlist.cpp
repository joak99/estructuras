#include <vector>
#include <iostream>
#include "list.cpp"
using namespace std;

int main(){
	List <char> li;
	li.add('h');
	li.add('o');
	li.add('l');
	li.add('a');
	li.show();
	li.length();
	//li.search('s');
	li.search('h');
}
