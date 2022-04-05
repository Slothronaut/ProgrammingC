#include <stdio.h>
#include <stdlib.h>

void data_fill(float *);
void zero_it(float *);
void display(float *);

const int DAYS = 7;
float temp[7];

int main()
{
    //zero_it(temp);
    data_fill(temp);
    display(temp);
}

//input temp func
void data_fill(float *arr_ptr)
{
    for(int i=0; i<DAYS; i++)
    {
        printf("Day %d of %d\n", i+1, DAYS);
        puts("Temp?");
        scanf("%f", &arr_ptr[i]);
    }
}

//display temp func
void display(float *arr_ptr)
{
    for(int i=0; i<DAYS; i++)
    {
        printf("Day %d of %d: %.2f\n", i+1, DAYS, arr_ptr[i]);
    }
}
