#include <cstdio>

double power(double a, int n)
{
    double result = 1.0;
    
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = result * a;
        }
        
        a = a * a;
        n = n / 2;
    }
    
    return result;
}

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    
    scanf("%lf %d", &a, &n);
    
    double answer = power(a, n);
    
    printf("%.0lf", answer);
    
    return 0;
}