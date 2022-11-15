#include <iostream>
#include <string>
using namespace std;

struct LibraryCard {
	string name;
	string checkoutDate;
	string returnDate;
};

int main() {
	LibraryCard lc;
	lc.name = "éÅ ñº";
	lc.checkoutDate = "20221101";
	lc.returnDate = "20221108";
	cout << lc.name << " ë›èoì˙ÇÕ " << lc.checkoutDate;
	cout << " ï‘ãpì˙ÇÕ " << lc.returnDate << " Ç≈Ç∑";
	return 0;
}