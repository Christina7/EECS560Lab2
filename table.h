#ifndef TABLE_H
#define TABLE_H


#include "list.h"
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

class table{
	private:
		double a;
	public:
		table();
		~table();
		void insert(double x, double *&T);
		void remove(double x, double *&T);
		void print();
		bool find(double x, double *&T);
		void build(ifstream& file);
		double*& getArray();
		
};



#endif
