#include <iostream>
using namespace std;

class Costs;
class Revenue{

	friend bool profit(Revenue rev, Costs cos);

private:
	int revenue;

public:
	Revenue(int revenue) : revenue(revenue) {} ;
};

class Costs{

	friend bool profit(Revenue rev, Costs cos);

private:
	int costs;

public:
	Costs(int c=0) { // mettre une valeur par défaut au cas ou on ne précise pas comme en python
		costs = c;
	}

	void setCosts(int c) {
		costs = c;
	}
};

bool profit(Revenue rev, Costs cos) {
	if (rev.revenue > cos.costs) return true;
	else return false;
}

int main(){

	Revenue r(100);
	Costs c;
	
	int a;
	cin >> a;
	cin.ignore();
	c.setCosts(a);

	cout << profit(r, c) << endl;

	return 0;
}