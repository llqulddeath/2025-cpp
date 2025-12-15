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
    
    int maxIndex = 0;
    int maxDistanceSquared = points[0].x * points[0].x + points[0].y * points[0].y;
    
    for (int i = 1; i < n; i++)
    {
        int currentDistanceSquared = points[i].x * points[i].x + points[i].y * points[i].y;
        
        if (currentDistanceSquared > maxDistanceSquared)
        {
            maxDistanceSquared = currentDistanceSquared;
            maxIndex = i;
        }
    }
    
    printf("%d %d\n", points[maxIndex].x, points[maxIndex].y);
    
    return 0;
}