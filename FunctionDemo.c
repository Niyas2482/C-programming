#include <stdio.h>

int add(int, int);
int main()
{
    int a = 5, b = 10;
    int r = add(a, b); 
    printf("%d", r);
    return 0;
}


int add(int n1, int n2) 
{

    return n1 + n2;
}