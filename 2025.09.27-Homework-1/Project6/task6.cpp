#include "cstdio"

int main(int argc, char *argv[])
{
    int g;
    int l;
    scanf("%d %d", &g, &l);
    
    int total;
    total = g + l - 1;
    int g_missed;
    g_missed = total - g;
    int l_missed;
    l_missed = total - l;
    
    printf("%d %d", g_missed, l_missed);
    
    return 0;
}