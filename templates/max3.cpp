
// -- max3.cpp 
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// maximum of two values of any type 
template <typename T>
inline T const & max(T const & a, T const &b)
{
	return a < b? b: a;
}

// maximum of two pointers 
template <typename T>
inline T* const & max ( T* const & a, T* const&b)
{
	return *a < *b ? b: a;
}

// maximum of two C-strings 
inline char const * const & max (char  const * const& a, char const * const& b) 
{
	return strcmp(a, b) < 0? b: a;
}

int main() 
{
	int a = 7;
	int b= 42;
	int c = 0;
	c = ::max(a, b);
	cout << "Result : " << c << endl;

	string s = "hey";
	string t = "you";
	string u = "";
	u = ::max(s, t);
	cout << "Result : " << u << endl;


	int * p1 = &b;
	int * p2 = &a;
	int * p3 = NULL;

	p3 = ::max(p1, p2);
	cout << "Result : " << *p3 << endl; 

	char const * s1 = "David";
	char const * s2 = "Nico";
	char const * s3 = NULL;

	s3 = ::max(s1, s2);		
	cout << "Result : " << s3 << endl;

	return 0;
}
