#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Entity{

private:
	string* name;
	int* hp;

public:
	int* id;

	Entity(string name, int hp, int id);
	~Entity();

	void setName(string nn);
	string getName() const;

	void setHp(int hp);
	int getHp() const;

	void setId(int id);
	int getId() const;

};

Entity::Entity(string name, int hp, int id){
	this->name = new string(name);
	this->hp = new int(hp);
	this->id = new int(id);
}

Entity::~Entity(){
	delete name;
	delete hp;
	delete id;
}

string Entity::getName() const{
	return *name;
}

int Entity::getHp() const{
	return *hp;
}

void Entity::setName(string nn){
	this->name = new string(nn);
}

void Entity::setHp(int hp){
	this->hp = new int(hp);
}

int Entity::getId() const{
	return *id;
}

void Entity::setId(int id){
	this->id = new int(id);
}

int main(){

	Entity e("volibear", 20, 001);

	cout << e.getName() << " " << e.getHp() << " " << e.getId() << endl;

	cout << *e.id << endl;

	return 0;
}