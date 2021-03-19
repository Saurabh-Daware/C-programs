#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char input[1000], output[1000];
    printf("Enter string: ");
    gets(input);
    while (input[count] != '\0')
    {
        ++count;
    }
    int j = count - 1;

    for (int i = 0; i < count; ++i, --j)
    {
        output[i] = input[j];
    }

    printf("Reversed string : %s", output);
}