#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	int c;
	cin >> c;
	cin.ignore();
	int * tab = (int *) malloc(c*sizeof(int));

	*tab = -5; // on peut marquer *(tab+n) n étant l'index donc *tab = *(tab+0)
	*(tab+1) = 0;
	tab[2] = 2; // ou alors marquer comme un array normal car en réalité un array normal n'est rien d'autre qu'une liste de pointeurs
	tab[3] = 10;
	tab[4] = 50;

	for (int i=0;i<c;i++){
		cout << tab[i] << endl;
	}

	free(tab);

	return 0;
}