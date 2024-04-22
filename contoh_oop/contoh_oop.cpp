#include <iostream>
using namespace std;

class bangundatar {

private:
	float Panjang, Lebar;

public:
	float Luas;

	void input() {

		cout << "Masukan Panjangnya = ";
		cin >> Panjang;
		cout << "Masukan Lebarnya = ";
		cin >> Lebar;
	}

	float hitungluas() {
		return Panjang * Lebar;
	}

	void display() {
		cout << "panjangnya = " << Panjang << endl;
		cout << "lebarnya = " << Lebar << endl;
		cout << "luasnya = " << hitungluas() << endl;
	}
};

int main() {
	bangundatar pp;
	pp.input();
	pp.display();

	return 0;
}