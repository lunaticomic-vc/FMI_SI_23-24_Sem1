#include <iostream>

void swapWord(char* text, char* word)
{
	size_t lenght1 = strlen(text);
	size_t lenght2 = strlen(word);
	int j = 0;
	int counter = 0;
	int copy;
	for(int i = 0; i < lenght1; i++)
	{
		copy = i;
		while ((text[i] & 0xDF) == (word[j] & 0xDF) && j<lenght2)
		{
			counter++;
			i++;
			j++;
		}
		if (counter == lenght2 && !((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')))
		{
			for (int p = 0; p < lenght2; p++)
			{
				text[copy + p] = '*';
			}
		}
		j = 0;
		counter = 0;
	}
}



int main()
{
	char a[] = { "Howdy! How are you? How was your day?" };
	char b[] = { "how" };
	swapWord(a, b);
	for (int i = 0; i < strlen(a); i++)
	{
		std::cout << a[i];
	}

}
