#include<cstdio>

int main(int argc, char** argv)
{
    int v = 0;
    int t = 0;
    int distance = 0;
    int position = 0;
    
    scanf_s("%d %d", &v, &t);
    
    distance = v * t;
    position = ((distance % 109) + 109) % 109;
    
    if (position == 0)
    {
        position = 109;
    }
    
    printf("%d", position);
    
    return 0;
}