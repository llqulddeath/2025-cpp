#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int result = 0;
    
    if (n == 1)
    {
        result = 0;
    }
    else if (n % 2 == 0)
    {
        result = n / 2;
    }
    else
    {
        result = n;
    }
    
    printf("%d", result);
    
    return 0;
}