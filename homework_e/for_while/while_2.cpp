#include <cstdio>

int main(int argc, char** argv)
{
    double x = 0.0;
    double y = 0.0;
    
    scanf("%lf %lf", &x, &y);
    
    int day = 1;
    double distance = x;
    
    while (distance < y)
    {
        distance = distance * 1.15;
        day = day + 1;
    }
    
    printf("%d\n", day);
    
    return 0;
}