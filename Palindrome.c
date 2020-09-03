#include <stdio.h>

void Check(char text [], int len);

int main(void){
	char text [100];
    printf("Enter text: ");
    gets(text);
	int len = 0;
	while(text[len] != '\0'){
		len++;
	}
	Check(text,len);	
}

void Check(char text [], int len){
		
	if(text[0] != text[len-1]) {
		printf("String is not a palindrome");
	} else {
		printf("String is a palindrome");
	}
}