#include <iostream>
#include <string>
using namespace std;

class Player{

public:
	string* name;
	int* hp;

	Player(string* name, int* hp);
	~Player();

	void setName(string nn);
	string getName() const;

	void setHp(int* hp);
	int getHp() const;

};

Player::Player(string* name, int* hp){
	this->name = new string(*name);
	this->hp = new int(*hp);
}

Player::~Player(){
	delete name;
	delete hp;
}

string Player::getName() const{
	return *name;
}

int Player::getHp() const{
	return *hp;
}

void Player::setName(string nn){
	this->name = new string(nn); // set the pointer of name to a new string of the value of the variable name passed in the function
}

void Player::setHp(int* hp){
	this->hp = new int(*hp); // set the pointer of hp to a new int of the value of the pointer of the hp passed in the function
}

int main(){

	string n = "Jake";
	int hpp = 20;

	Player player1(&n, &hpp); // constructor need the adress of the variables

	cout << player1.getName() << " " << player1.getHp()<< endl;

	n = "NeoJake"; // dont need to use it because it donc uses a pointer in the function so it can take a string variable
	hpp = 19; // need to change the value of hpp because need to have a variable to use a pointer

	player1.setName("NeoJake"); // actually takes a string variable (there is no variable to dont use too much space)
	player1.setHp(&hpp);

	cout << player1.getName() << " " << player1.getHp()<< endl;

	return 0;
}