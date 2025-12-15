#include<cstdio>

struct Point
{
    int x;
    int y;
};

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    Point points[100];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    
    long long sumX = 0;
    long long sumY = 0;
    
    for (int i = 0; i < n; i++)
    {
        sumX = sumX + points[i].x;
        sumY = sumY + points[i].y;
    }
    
    double centerX = (double)sumX / n;
    double centerY = (double)sumY / n;
    
    printf("%.15lf %.15lf\n", centerX, centerY);
    
    return 0;
}