#include <iostream>

void DisplayArray(int* arrays, int sizes){
	for (int i = 0; i<sizes; i++){
		std::cout << arrays[i] << std::endl;
	}
}


int main() {

	/* this is an array exemple

	int anotherKindOfArray[10] = {};

	int sizez = sizeof(anotherKindOfArray) / sizeof(anotherKindOfArray[0]);

	for (int i = 0; i<sizez; i++){
		std::cout << anotherKindOfArray[i] << std::endl;
	}
	anotherKindOfArray[2] = 1;

	for (int i = 0; i<sizez; i++){
		std::cout << anotherKindOfArray[i] << std::endl;
	}
	*/

	/* this is a dinamic allocation exemple

	int len = 5;
	int* arrays = new int[len];


	for (int i = 0; i<len; i++){
		arrays[i] = i;
	}

	DisplayArray(arrays, len);


	delete[] arrays;*/

	return 0;
}