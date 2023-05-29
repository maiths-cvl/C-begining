#include <iostream>
using namespace std;

// permet de créer un tableau avec une taille non définie, donc de pouvoir ajouter des éléments au fur et a mesure comme en python

// new -> alouer de la mémoire
// delete -> rendre de la mémoire

void displayArray(int* array, int size){
	for (int i = 0; i<size; i++){
		cout << array[i] << endl;
	}
}

int main(){

	int number = 0;
	cin >> number;
	cin.ignore();

	int* array = new int[number]; // alloué number fois un entier

	for (int i = 0; i<number; i++) {
		array[i] = i;
	}

	cout << "shows array : "<< *array << endl;

	displayArray(array, number);

	delete[] array; // si la variable a des crochets il faut aussi en mettre sur le delete





	/*
	int* ptr = new int; // demander le bon nombre d'octets de mémoire pour int

	delete ptr; // une fois que l'on a fini utiliser le poiteur il faut rendre la mémoire donc le delete
	*/
	return 0;
}