#include <vector>
#include <stdio.h>
#include <set>
#include <math.h>
#include <queue>
#include <string.h>
#include <iomanip>
#include <iostream>

using namespace std;

long long values[100];
long long binet[100];
double gold = 1.61803398875;
//double gold = 1.618;

void fib(){
	values[0] = 0;
	values[1] = 1;
	for(int i = 2; i<100; i++){
		values[i] = values[i-1]+values[i-2];
	}
}

void bin(){
	binet[0] = 0;
	binet[1] = 1;
	double val;
	double sqrt5 = sqrt(5);
	for(int i = 2; i < 100; i++){
		val = pow(gold,i);
		val-= pow( (gold * (-1.0)), (i*(-1)));
		val = val/sqrt5;
		val += 0.5;
		binet[i] = (long long) val;
	}
}

int main(){
	fib();
	bin();
	cout << "\ti\treal\tbinet\tdif" << endl; 
	for(int i = 0; i<100; i++){	
		cout <<"\t"<< i << "\t" << values [i] << "\t" << binet[i] << "\t" << (values[i]-binet[i]) << endl;
	}
}
