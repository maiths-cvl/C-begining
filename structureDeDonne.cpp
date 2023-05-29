#include <iostream>
#include <string>
using namespace std;

// public visible et accessible de tout le reste du programme
// protected
// private visible que dans cette classe

struct Player{
	string name;
	int hitPoints;
	int Damages;


	bool isDead(){
		return hitPoints <= 0;
	}

	void attack(Player& other);
};

void Player::attack(Player& other){
	other.hitPoints -= Damages;
} // défini la fonction en dehors de la structure

int main(){

	Player player1;
	player1.name = "Kail";

	Player player2;
	Player player3;

	cout << player1.name << endl;
	cout << player1.isDead() << endl;

	player2.hitPoints = 5;
	player1.Damages = 5;

	player1.attack(player2);

	cout << player2.isDead() << endl;

	return 0;
}