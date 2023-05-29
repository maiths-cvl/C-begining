#include <iostream>
#include <string>
using namespace std;

class Voiture{

private:
	int id;

public:
	string name;
	string typee;
	int date;

	Voiture(int i, string n, int d, string t);
	~Voiture();

	int getId() const;

	void setId(int i);

};

Voiture::Voiture(int i, string n, int d, string t){
	id = i;
	name = n;
	date = d;
	typee = t;
}

Voiture::~Voiture(){}

int Voiture::getId() const{
	return id;
}

void Voiture::setId(int i){
	id = i;
}

int main(){

	Voiture test(1012, "Kja", 02, "dontcare");

	cout << test.getId() << endl;
	cout << test.name << endl;
	test.setId(1000);
	cout << test.getId() << endl;

	return 0;
}