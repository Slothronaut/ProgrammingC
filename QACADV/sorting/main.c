#include <stdio.h>
#include <stdlib.h>

//prototype
int comparitor(const void *, const void *);

int main()
{
    int unsorted[] = {10,30,20,15,45};
    //initial unsorted data
    puts("Values are being sorted...\n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n\n", unsorted[i]);
    }
    //sort the data using qsort
    qsort(unsorted, 5, sizeof(int), comparitor);
    //finalised sorted data
    puts("Values after being sorted...\n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n\n", unsorted[i]);
    }
    return 0;
}

int comparitor(const void *num1, const void *num2)
{
    //typecast to an int pointer then dereference to get the int value
    return *(int *)num1 - *(int *)num2;
}
