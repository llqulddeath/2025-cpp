#include <cstdio>

bool IsPrime(int n)
{
    if (n == 2)
    {
        return true;
    }
    
    if (n % 2 == 0)
    {
        return false;
    }
    
    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main(int argc, char** argv)
{
    int n = 0;
    
    scanf("%d", &n);
    
    if (IsPrime(n))
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }
    
    return 0;
}