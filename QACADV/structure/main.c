#include <stdio.h>
#include <stdlib.h>

struct connection
{
    char addr1[50];
    char addr2[50];
    int port;
};

//Function to print the struct
void print_struct(struct connection *ptr_struct1)
{
    printf("\nAddress One: %s\nAddress Two: %s\nPort Number: %d\n", ptr_struct1->addr1, ptr_struct1->addr2, ptr_struct1->port);
}

//Function to modify the connection port number
void modify_port(struct connection *ptr_struct1)
{
    ptr_struct1->port=1776;
}

int main()
{
    struct connection socket1;

    printf("Enter address one: \n");
    scanf("%s", &socket1.addr1);
    printf("Enter address two: \n");
    scanf("%s", &socket1.addr2);
    printf("Enter port number: \n");
    scanf("%d", &socket1.port);

    print_struct(&socket1);
    modify_port(&socket1);
    print_struct(&socket1);

    return 0;
}
