#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int result = 0;
    
    scanf_s("%d %d", &a, &b);
    
    if ((a % b == 0) || (b % a == 0))
    {
        result = 1;
    }
    else
    {
        result = 666;
    }
    
    printf("%d", result);
    
    return 0;
}