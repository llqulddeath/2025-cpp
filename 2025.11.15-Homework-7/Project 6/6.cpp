#include <cstdio>

int phi(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    int prev1 = 1;
    int prev2 = 1;
    int current = 0;
    
    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}

int main(int argc, char** argv)
{
    int n = 0;
    
    scanf("%d", &n);
    
    int result = phi(n);
    
    printf("%d", result);
    
    return 0;
}