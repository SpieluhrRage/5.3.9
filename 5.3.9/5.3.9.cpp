#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	string str;
	setlocale(LC_ALL, "Rus");
	cout << "Enter string of latin symbols: " << endl;
	getline(cin, str);
	for (int i = 0; i <= str.length() - 1; i++) {
		cout << int(str[i]) << endl;
	}

}