#include <iostream>
using namespace std;

int howManySubstrings(char* a, char* b)
{
	int j = 0, counter = 0, num = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		while (a[i] == b[j])
		{
			counter++;
			i++;
			j++;
		}
		if (counter == strlen(b))num++;
		j = 0;
		counter = 0;
	}
	return num;
}

int main()
{
	char a[] = { "abcdabcabababc" };
	char b[] = { "abc" };
	std::cout << howManySubstrings(a, b);
}
