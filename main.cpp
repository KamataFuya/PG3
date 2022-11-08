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
	lc.name = "カマタ フウヤ";
	lc.checkoutDate = "20221101";
	lc.returnDate = "20221108";
	cout << lc.name << " 貸出日は " << lc.checkoutDate;
	cout << " 返却日は " << lc.returnDate << " です";
	return 0;
}