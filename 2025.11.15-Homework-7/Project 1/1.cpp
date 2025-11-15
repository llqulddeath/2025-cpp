#include <cstdio>

double power(double a, int n)
{
    double result = 1.0;
    
    for (int i = 0; i < n; i++)
    {
        result = result * a;
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