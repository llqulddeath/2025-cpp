#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("-1");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            double root = -double(c) / double(b);
            printf("1\n");
            printf("%.5f", root);
        }
    }
    else
    {
        int discriminant = b * b - 4 * a * c;
        
        if (discriminant < 0)
        {
            printf("0");
        }
        else if (discriminant == 0)
        {
            double root = -double(b) / (2.0 * double(a));
            printf("1\n");
            printf("%.5f", root);
        }
        else
        {
            double sqrtD = sqrt(double(discriminant));
            double root1 = (-double(b) - sqrtD) / (2.0 * double(a));
            double root2 = (-double(b) + sqrtD) / (2.0 * double(a));
            
            printf("2\n");
            if (root1 < root2)
            {
                printf("%.5f\n", root1);
                printf("%.5f", root2);
            }
            else
            {
                printf("%.5f\n", root2);
                printf("%.5f", root1);
            }
        }
    }
    
    return 0;
}