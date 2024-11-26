#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int Sum(int a, int b ){
	return a + b;
}
void hello() {
	cout << "hello world";
}
enum class Color {
	White,
	Red,
	Orange,
	Blue,
};
struct Point {
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	Color color;

};
int main() {

		tuple<string, int> p = { "hello", 42 };
		auto [word, freq] = p;  // word = "hello"; freq = 42;
		cout << word<<Sum(1,2);
		hello();
}