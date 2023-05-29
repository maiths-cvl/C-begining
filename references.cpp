#include <iostream>

using namespace std;

int main(){

	const int a = 4;

	cout << a << endl;


	int * ptr = &a;
	int& ptrR = a;

	return 0;
}