int **pp; //pp is a pointer to a pointer to an int

float *apf[10]; //apf is an array of 10 pointers to a float

int *frp(int, char); //frp is a function which returns a pointer to an int

char (*pf)(short); //pf is a pointer to a function which returns a char

int *(*pf2)(void); //pf2 is a pointer to a function which returns a pointer to an int

date *func(void); //func is a function which returns a pointer to a date struct

date *(*pfunc)(void); //pfunc is a pointer to a function which returns a point to a date struct

int (*x)[10]; //x is a pointer to an array of 10 ints
