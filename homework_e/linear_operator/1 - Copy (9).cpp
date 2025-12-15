#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int result = 0;
    
    scanf_s("%d", &n);
    
    if (n % 10 == 0)
    {
        result = n / 10;
    }
    else
    {
        result = n / 10 + 1;
    }
    
    printf("%d", result);
    
    return 0;
}