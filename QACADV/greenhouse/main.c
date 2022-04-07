#include <stdio.h>
#include <stdlib.h>

void data_fill(float (*arr)[4]);

float temps[2][4];
float (*start)[4] = &temps[0];
float (*end)[4] = &temps[2];

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

void data_fill(float (*arr)[4])
{
    float user_input;
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("Enter data for day: %d - Time: %d\n", i+1, j+1);
            scanf("%f", &user_input);
            arr[i][j] = user_input;
        }
    }
}
