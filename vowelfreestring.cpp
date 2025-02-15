#include <iostream>
using namespace std;
char* getVowelsFreeString(const char* const str);
int main()
{

	char* str = getVowelsFreeString("hello how are you? I am fine");
	cout << str;

	return 0;
}
char* getVowelsFreeString(const char* const str)
{
	int vowelfree = 0;
	int vowel = 0;
	int length = 0;
	for (int i =0;str[i] != '\0'; i = i + 1)
	{
		length = length + 1;
	}
	int index = 0;
	char* newarray = new char[length];
	for (int i = 0; str[i] != '\0'; i = i + 1)
	{
		if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
		{
			newarray[index] = str[i];
			index = index + 1;
		}
	}
	newarray[index] = '\0';
	return newarray;
}
