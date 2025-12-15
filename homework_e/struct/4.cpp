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
    
    Point points[101];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    
    double maxPerimeter = 0.0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int dx1 = points[i].x - points[j].x;
                int dy1 = points[i].y - points[j].y;
                double side1 = sqrt(dx1 * dx1 + dy1 * dy1);
                
                int dx2 = points[j].x - points[k].x;
                int dy2 = points[j].y - points[k].y;
                double side2 = sqrt(dx2 * dx2 + dy2 * dy2);
                
                int dx3 = points[k].x - points[i].x;
                int dy3 = points[k].y - points[i].y;
                double side3 = sqrt(dx3 * dx3 + dy3 * dy3);
                
                double perimeter = side1 + side2 + side3;
                
                if (perimeter > maxPerimeter)
                {
                    maxPerimeter = perimeter;
                }
            }
        }
    }
    
    printf("%.15lf\n", maxPerimeter);
    
    return 0;
}