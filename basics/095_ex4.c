#include<stdio.h>
int crash ()
{
    char *tester = "NULL";
    for (int i = 0; i < 100000000000000000000; ++i)
    {
        printf("%c", tester[i]);
    }
}
int main(int argc, char *argv[])
{
    crash();
    // yep that's a crash
    // what a beauty
}
