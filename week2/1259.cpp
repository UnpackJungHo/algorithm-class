#include<iostream>
#include<vector>
using namespace std;

vector<string> s;

void Palindrome(int num) {
	bool isPalindrome = true;
	vector<int> v;

	while (num != 0) {
		v.push_back(num % 10);
		num /= 10;
	}
	for (int i = 0; i < v.size()/2; i++) {
		if (v.at(i) != v.at(v.size() - i-1)) {
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) {
		s.push_back("yes");
		v.clear();
	}
	else {
		s.push_back("no");
		v.clear();
	}

}


int main() {
	int num;
	while (1) {
		cin >> num;
		if (num == 0)
			break;
		Palindrome(num);
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s.at(i) << "\n";
	}

	return 0;
}