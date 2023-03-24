#include<iostream>
class Road {
public:
	double length;
	int width;
	Road();
};
Road::Road() {
	length = 555.5;
	width = 2;
}
int main() {
	using namespace std;
	cout << "Test v0.1:Ok.\n";
	Road road;
	cout << "Before access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	road.length = 444.4;
	road.width = 444.4;
	cout << "\nAfter access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
