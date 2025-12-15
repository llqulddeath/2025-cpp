#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int x = 0;
    long long result = 0;
    
    scanf_s("%d", &a);
    
    x = a / 10;
    result = (long long)x * (x + 1) * 100 + 25;
    
    printf("%lld", result);
    
    return 0;
}