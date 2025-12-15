#include<cstdio>

int main(int argc, char** argv)
{
    int m = 0;
    int t = 0;
    int result = 0;
    
    scanf_s("%d", &m);
    scanf_s("%d", &t);
    
    result = t / m;
    
    if (result % 2 == 1)
    {
        printf("Ivan");
    }
    else
    {
        printf("Denis");
    }
    
    return 0;
}