#include <iostream>
#include <stdlib.h>

using namespace std;

int add_5(int n);

int add_5p(int *p);

int main(){
	int x;
	cin >> x;
	add_5(x);
	cout << "x with function:"<< x << endl;
	add_5p(&x);
	cout << "x with pointer maniputation:"<< x << endl;
	// system("pause");
	return 0;
}

int add_5(int n){
	n = n + 5;
	return n;
}

int add_5p(int *p){
	*p = *p + 5;
	return *p;
}