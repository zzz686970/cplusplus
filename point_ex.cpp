#include <iostream>
#include <stdlib.h>

using namespace std;

int add_5(int n);

int main(){
	int x;
	cin >> x;
	add_5(x);
	cout << x << endl;

	// system("pause");
	return 0;
}

int add_5(int n){
	n = n + 5;
	return n;
}