#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    
    scanf("%d %d", &a, &b);
    
    int m = a;
    int n = b;
    int temp = 0;
    
    while (n != 0)
    {
        temp = n;
        n = m % n;
        m = temp;
    }
    
    int gcd = m;
    long long lcm = (long long)a * (long long)b / (long long)gcd;
    
    printf("%lld\n", lcm);
    
    return 0;
}