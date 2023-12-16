#include <iostream>
using namespace std;

int howManySubstrings(char* a, char* b)
{
	int j = 0, counter = 0, num = 0, copy;
	for (int i = 0; i < strlen(a); i++)
	{
		copy = i;
		while (a[i] == b[j])
		{
			counter++;
			i++;
			j++;
		}
		if (counter == strlen(b))return copy;
		j = 0;
		counter = 0;
	}
	return -1;
}

int main()
{
	char a[] = { "bcdabcabababc" };
	char b[] = { "abc" };
	std::cout << howManySubstrings(a, b);
}
