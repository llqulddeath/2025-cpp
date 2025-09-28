#include "cstdio"

int main(int argc, char *argv[])
{
    int a;
    int b;
    int result;
    
    scanf("%d %d", &a, &b);
    
    if(a % b == 0 || b % a == 0)
    {
        result = 1;
    }
    else
    {
        result = 2;
    }
    
    printf("%d", result);
    
    return 0;
}