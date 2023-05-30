#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main(){

	tuple<int, string> person(20, "Tim");

	cout << get<0>(person) << endl;
	cout << get<1>(person) << endl;
	get<1>(person) = "Maiths";
	cout << get<1>(person) << endl;


	tuple<int> t(1); // creating a simple tuple with 1 int
	auto t3 = tuple_cat(t, t); // creating a variable that store the match of twice t1 and sets the amount of int or string or char or whatever you have automaticly
	// you can for loop that to add space to a tuple
	// actually not you can't for loop inside of it or i don't know how to do it

	cout << get<0>(t3) << endl; // just print those value
	cout << get<1>(t3) << endl;

	return 0;
}