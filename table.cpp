#include "table.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;


table::table(){
	m = 10;
	a = NULL;
}

table::~table(){
	delete [] a;
	a = NULL;
}

int table::hash(double x){
	int index = int(x) % m;
	return index;
}

void table::insert(double x){
	int index = hash(x);
	a[index].insert(x, a[index].getHead());
}

void table::remove(double x){
	bool isThere = find(x);
	int index = hash(x);
	if (isThere == true){
		a[index].erase(x, a[index].getHead());
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

bool table::find(double x){
	return true;
}

void table::build(ifstream& file){
	int item;
	file >> item;
	m = item;
	a = new list[m];
	while (file >> item){
		insert(item);
	}
}

list*& table::getArray(){
	return a;
}