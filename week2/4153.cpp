/*#include<iostream>
#include<vector>
using namespace std;

vector<string> s;

void rAngle(int a, int b, int c) {
	if (c * c == a * a + b * b) 
		s.push_back("right");
	else
		s.push_back("wrong");
}

int main() {
	int a, b, c;

	while (true) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		if (a > b)
			rAngle(b, c, a);
		else if (b > c)
			rAngle(a, c, b);
		else
			rAngle(a, b, c);
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s.at(i) << "\n";
	}

	return 0;
}*/