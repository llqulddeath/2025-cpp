#include<cstdio>
#include<cmath>

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
    
    double maxDistance = 0.0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int dx = points[i].x - points[j].x;
            int dy = points[i].y - points[j].y;
            
            double distance = sqrt(dx * dx + dy * dy);
            
            if (distance > maxDistance)
            {
                maxDistance = distance;
            }
        }
    }
    
    printf("%.15lf\n", maxDistance);
    
    return 0;
}