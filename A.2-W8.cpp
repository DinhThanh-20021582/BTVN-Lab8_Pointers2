#include <iostream>

using namespace std;

int main()
{
	char a[4] = "abc";
	for (char* cp = a; (*cp) != '\0'; cp += 1) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}
// a. các dia chi bien a cach nhau 1 gia tri
// b. voi kieu int output la 4
// c. voi kieu double la 8
// d. ta thay khoang cach giua con tro va dia chi deu tang len 1 
