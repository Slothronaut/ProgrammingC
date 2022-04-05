#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Palindrome(char str[]);
void reversestr(char *p);

int main()
{
    char userstring[200];
    char *ptr_userstring = userstring;
    printf("Please enter a string: \n");
    scanf("%s", &userstring);

    reverse(ptr_userstring);

    printf("%s", *ptr_userstring);
    return 0;
}

void reversestr(char *p)
{
    int i = 0;
    char temp;
    int length;

    for(i = 0; *(p+i) != '\0'; i++)
    {
        length++;
    }

    for(i = 0; i < length--; i++)
    {
        temp = p[i];
        p[i] = [length-i];
        p[length-i] = temp;
    }
}
