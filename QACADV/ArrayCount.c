#include <stdio.h>
#include <stdlib.h>
int sum_it(int[]);

int main()
{
    //f_ptr is a point to a function returning an integer
    int (*f_ptr)(int*);
    f_ptr = sum_it;
    int data[5] = { 1, 2, 3, 4, 5 };
    //int result = sum_it(data);
    int result = f_ptr(data);
    printf("%d", result);
    return 0;
}

int sum_it(int arr[])
{
    //count the individual numbers in the array
    int finalsum = 0;
    for(int i = 0; i<5; i++)
    {
        finalsum += arr[i];
    }
    return finalsum;
}
