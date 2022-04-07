#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#ifdef __unix__
#include <unistd.h>
#elif defined _WIN32
#include <windows.h>
#endif // __unix__

//#define sleep(x) sleep(1000 * (x))

void signal_handler(int);

int main()
{
    //Binding custom signal handler to CTRL+C
    signal(SIGINT, signal_handler);

    while(1)
    {
        printf("Doing something...\n");
        sleep(2);
    }
    return 0;
}

void signal_handler(int sig_num)
{
    printf("Intercepted signal %d, exiting!\n", sig_num);
}
