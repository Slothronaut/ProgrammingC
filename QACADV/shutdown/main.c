#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char alphabet[26][9] = { "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "XRay", "Yankee", "Zulu" };

int main()
{
    int length = 0;
    char phrase[50];
    char uppercase;

    printf("Please enter a phrase: \n");
    scanf("%s", phrase);
    length = strlen(phrase);

    for(int i=0; i<length; i++)
    {
        uppercase = toupper(phrase[i]);
        printf("%s ", alphabet[uppercase-65]);
    }
}
