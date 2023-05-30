#include <iostream>
#include <cstdlib> // ajout de la librairie pour malloc
using namespace std;

int main() {

	int * pa = (int *) malloc(sizeof(int));
	if (pa == NULL) {
		cout << "L'allocation de la mémoire a échoué" << endl;
		return 1;
	}

	*pa = 50;

	cout << "Adresse de pa : " << pa << "\nValeur à l'adresse pointée par pa : " << *pa << endl;

	free(pa); // free utilisé quand le pointeur à été ajouté avec malloc
	// delete c'est pour les autres cas genre : new int(1);

	return 0;
}