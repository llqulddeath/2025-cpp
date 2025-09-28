#include "cstdio"

int main(int argc, char *argv[])
{
    int a;
    scanf("%d", &a);
    
    int b;
    b = a - 1;
    int c;
    c = a + 1;
    
    printf("The next number for the number %d is %d.\n", a, c);
    printf("The previous number for the number %d is %d.", a, b);
    
    return 0;
}