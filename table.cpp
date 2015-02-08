#include "table.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;


table::table(){
	a = NULL;
	m = 0;
}

table::~table(){
	delete[] a;
	a = NULL;
}

int table::hash(double x){
	int index;
	return index % m;
}

void table::insert(double x, list *T[]){
	
}

void table::remove(double x, list *T[]){

}

void table::print(){
	
}

bool table::find(double x, list *T[]){

}

void table::build(ifstream& file){
	file >> m;
	a = new list[m];
}

list*& table::getArray(){

}