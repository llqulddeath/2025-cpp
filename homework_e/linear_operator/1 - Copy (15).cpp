#include<cstdio>

int main(int argc, char** argv)
{
    long long n = 0;
    long long m = 0;
    long long result = 0;
    
    scanf_s("%lld %lld", &n, &m);
    
    if (n > m)
    {
        result = m;
    }
    else
    {
        result = n;
    }
    
    printf("%lld", result);
    
    return 0;
}