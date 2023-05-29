#include<iostream>

using namespace std;

void Foo(int* a) { // a is the adress of Foo({variable})
	*a = 50; // set the value of the adresse of a to 50;
}

int main(){

	int* ptr = nullptr;
	int a = 10;
	int * p_a = &a;

	Foo(&a); // tell to use the foo function with parameter of the adress of a

	cout << "value of a : " << a << endl;
	cout << p_a << endl;
	cout << *p_a << endl;

	*p_a = 11;
	cout << *p_a << endl;
	cout << a << endl;

	return 0;
}