#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main()
{
	char msg[100];
	char* ptr;
	cout << "Enter text to reverse: ";
	cin >> msg;

	int len = strlen(msg);
	ptr = &msg[len - 1];
	while (ptr > &msg[0] || ptr==&msg[0] )
	{
		cout << *ptr;
		ptr--;
	}
	return 0;
}