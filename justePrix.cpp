#include <iostream>
#include <ctime>
using namespace std;

int main(){

	srand(time(0));
	int random = (rand() % 100)+1;
	int value = random;
	int enter;
	int* pV = &value;

	int count = 0;

	bool run = true;
	while (count < 7){

		cout << "Enter a value to try to find the price : " << endl;
		cin >> enter;
		cin.ignore();

		count++;

		if (enter == *pV) {
			cout << "GG you find the correct price" << endl;
			break;
		} else if(enter < *pV){
			cout << "Price is higher" << endl;
		}else{
			cout << "Price is lower" << endl;

		}
	}
	cout << "The price was " << *pV << endl;
	return 0;
}