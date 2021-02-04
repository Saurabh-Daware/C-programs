#include <stdio.h>
#include <string.h>

void Check(char text[], int len);

int main(void)
{
	char text[100];
	printf("Enter text: ");
	gets(text);
	int len = strlen(text);
	Check(text, len);
}

void Check(char text[], int len)
{
	int isPalindrome = 0;

	for (int i = 0; i < len; ++i)
	{
		if (text[i] != text[len - i - 1])
		{
			isPalindrome = 1;
		}
	}

	if (isPalindrome == 0)
	{
		printf("String is a palindrome");
	}
	else
		printf("String is not a palindrome");
}