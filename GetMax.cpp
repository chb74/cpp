#include <iostream>
#include <string>

using namespace std;

template<typename T>
inline T const& max(T const& a, T const& b)
{
	return a < b? b:a;
}

int main() {
	int i = 42;

	cout << "max(7, i): " << ::max(7, i) << endl;

	double f1 = 3.4;
	double f2 = -6.7;

	cout << "max(f1, f2) : " << ::max(f1, f2) << endl;

	string s1 = "mathematics";
	string s2 = "math";

	cout << "max(s1, s2) : " << ::max(s1, s2) << endl;

	return 0;
}

