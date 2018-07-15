#include <iostream>
#include <stdlib.h>

using namespace std;

int add_5(int n);

int add_5p(int *p);

void array_function(int x[]);

int main(){
	int x;
	cin >> x;
	add_5(x);
	cout << "x with function:"<< x << endl;
	add_5p(&x);
	cout << "x with pointer maniputation:"<< x << endl;
	// system("pause");
	int y[5];
	for(int k =0; k<=4; k++){
		scanf("%i", &y[k]);
	}
	array_function(y);

	for(int k =0; k<=4; k++){
		printf("\n%i", y[k]);
	} 
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

void array_function(int x[]){
	int i;
	for(i=0; i<=4; i++){
		x[i] = x[i] +2;
	}
}