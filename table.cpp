#include "table.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;


table::table(){
	m = 0;
	a = new list[m];
}

table::~table(){
	delete [] a;
	a = NULL;
}

int table::hash(double x){
	int index = int(x) % m;
	return index;
}

void table::insert(double x, list *T[]){
	int index = hash(x);
	T[index]->insert(x, T[index]->getHead());
}

void table::remove(double x, list *T[]){
	bool isThere = find(x, T);
	int index = hash(x);
	if (isThere == true){
		T[index]->erase(x, T[index]->getHead());
	}
	else{
		cout << "Number not in table";
	}
}

void table::print(){
	for (int i = 0; i < m; i++){
		cout << i << ": ";
		a[i].print();
		cout << endl;
	}
}

bool table::find(double x, list *T[]){
	return true;
}

void table::build(ifstream& file){
	double item;
	file >> m;
	a = new list[m];
	while (file >> item){
		insert(item, &a);
	}
}

list*& table::getArray(){
	return a;
}