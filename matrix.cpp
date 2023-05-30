#include <iostream>
#include <string>
using namespace std;

int main(){
	int row, column;
	cout << "Enter the row and column you want in this matrix" << endl;;
	cin >> row >> column;
	int arr[row][column];

	for(int i = 0; i<row;i++){
		for(int j = 0;j<column;j++){
			cin >> arr[i][j];
		}
	}

	cout << "Elements has been succesfully added to the matrix" << endl;

	for(int i = 0; i<row;i++){
		for(int j = 0;j<column;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}