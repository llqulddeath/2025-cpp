#include "cstdio"

int main(int argc, char *argv[])
{
    long long a;
    long long b;
    long long r;
    
    scanf("%lld %lld", &a, &b);
    
    r = a % b;
    if(r < 0)
    {
        r = r + (b > 0 ? b : -b);
    }
    
    printf("%lld", r);
    
    return 0;
}