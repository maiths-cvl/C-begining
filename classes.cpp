#include <iostream>
#include <string>
using namespace std;

class BankAccount{

private:
	string password;

public:
	string name;
	int balance;

	BankAccount(string* password, string* name, int* balance);

	string getPassword();

	void setPassword(string* p);
	void setName(string* n);

	void printName() const; // meilleur de rajouter cosnt a la fin de la méthode quand elle ne modifie pas le programme

	/*friend bool auth(string passedPassword){
		return passedPassword == password;
	}*/

};

void BankAccount::setName(string* n){
	name = *n;
}

void BankAccount::printName() const { // pareille que plus haut
	cout << name << endl;
}

int main(){

	BankAccount account1;
	account1.name = "Nageeb";
	account1.balance = 3000;
	//account1.password = "pass";

	BankAccount account2("pass2", "Janel", 1500);

	cout << account1.name << endl;
	//cout << account1.auth("pass") << endl;

	cout << account2.name << endl;

	return 0;
}