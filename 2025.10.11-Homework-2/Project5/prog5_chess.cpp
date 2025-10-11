#include<cstdio>

int main(int argc, char** argv)
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    
    int dx = x2 - x1;
    int dy = y2 - y1;
    
    int absDx = dx;
    if (absDx < 0)
    {
        absDx = -absDx;
    }
    
    int absDy = dy;
    if (absDy < 0)
    {
        absDy = -absDy;
    }
    
    if ((absDx == 1 && absDy == 2) || (absDx == 2 && absDy == 1))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}