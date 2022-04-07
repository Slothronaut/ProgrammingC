#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char data_fill(char address[][]);

char IPAddressTable[255][2];

int main()
{
    data_fill(temps);
    for(int i=1; start < end; start++,i++)
    {
        float * val = *start;
        printf("\n\n#### Start of Day %d: \n", i);
        printf("Temp 1 for Day %d: %.2f\n", i, val[0]);
        printf("Temp 2 for Day %d: %.2f\n", i, val[1]);
        printf("Temp 3 for Day %d: %.2f\n", i, val[2]);
        printf("Temp 4 for Day %d: %.2f\n", i, val[3]);
        printf("#### End of Day %d! \n\n", i);
    }
    return 0;
}

char data_fill(char (*address)[][])
{
    char address_input[255];
    char hostname_input[255];
    for(int i = 0; i<1; i++)
    {
        for(int j = 0; j<1; j++)
        {
            printf("Enter the Hostname: \n", i+1);
            scanf("%f", &hostname_input);
            printf("Enter the IP Address: \n", j+1);
            scanf("%f", &address_input);
            address[i] = hostname_input;
            address[j] = address_input;
}
