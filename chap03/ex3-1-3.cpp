#include <stdio.h>

double counter = 50;        // global variable

int main()
{
    for (int counter = 1;   // this refers to the
         counter != 10;     // local variable
          ++counter)
    {
        printf("%f\n",
                ::counter           // global variable
                /                   // divided by
                counter);           // local variable
    }
    return 0;
}
