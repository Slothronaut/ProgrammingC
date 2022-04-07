#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days = 0;
    int recordings = 0;
    printf("How many days need to be recorded? \n");
    scanf("%d", &days);
    printf("How many recordings per day are required? \n");
    scanf("%d", &recordings);

    float (*readings)[days] = calloc(recordings, sizeof(float));

    float input;
    printf("Enter first reading: \n");
    scanf("%f", &input);
    readings[0][0] = input;
    printf("%f", readings[0][0]);

    free(readings);
    return 0;
}

