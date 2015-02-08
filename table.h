#ifndef TABLE_H
#define TABLE_H

#include "list.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

class table{
private:
	list* a;
	int m;

public:
	table();
	~table();
	int hash(double x);
	void insert(double x, list *T[]);
	void remove(double x, list *T[]);
	void print();
	bool find(double x, list *T[]);
	void build(ifstream& file);
	list*& getArray();

};



#endif
