#include <iostream>
#include <string>
using namespace std;

class Tree{

	friend void doubleAge(Tree &t);

private:
	int* age;

public:
	string* name;

	Tree(string name, int age);
	~Tree();

	int getAge() const{return *age;}
	void setAge(int age){
		this->age = new int(age);
	}

	string getName() const;
	void setName(string name);

};

Tree::Tree(string name, int age){
	this->name = new string(name);
	this->age = new int(age);
}
Tree::~Tree(){
	delete age;
	delete name;
}


string Tree::getName() const{return *name;}

void Tree::setName(string name){
	this->name = new string(name);
}

void doubleAge(Tree &t){
	*t.age *= 2;
}

int main(){

	Tree t("Jean-Jack", 15);

	cout << t.getName() << " " << t.getAge() << endl;

	t.setAge(16);

	cout << t.getName() << " " << t.getAge() << endl;

	doubleAge(t);
	
	cout << t.getName() << " " << t.getAge() << endl;	

	return 0;
}