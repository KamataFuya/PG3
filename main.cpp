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
	lc.name = "�� ��";
	lc.checkoutDate = "20221101";
	lc.returnDate = "20221108";
	cout << lc.name << " �ݏo���� " << lc.checkoutDate;
	cout << " �ԋp���� " << lc.returnDate << " �ł�";
	return 0;
}