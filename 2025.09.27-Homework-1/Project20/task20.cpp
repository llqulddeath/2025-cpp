    #include "cstdio"

int main(int argc, char *argv[])
{
    int v;
    int t;
    int s;
    int result;
    
    scanf("%d %d", &v, &t);
    
    s = v * t;
    result = s % 109;
    
    if(result < 0)
    {
        result = result + 109;
    }
    
    result = result % 109;
    if(result == 0)
    {
        result = 109;
    }
    
    printf("%d", result+1);
    
    return 0;
}