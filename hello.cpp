#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

struct complexNumber {
	int age;
	string name;

};
int main() {
	complexNumber ted;
	ted.age = 10;
	ted.name = "Ted";
	cout << "Name: " << ted.name <<"\n" << "Age: " << ted.age;
}