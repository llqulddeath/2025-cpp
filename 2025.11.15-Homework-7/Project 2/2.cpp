#include <cstdio>

bool Election(bool x, bool y, bool z)
{
    int countTrue = 0;
    int countFalse = 0;
    
    if (x)
    {
        countTrue = countTrue + 1;
    }
    else
    {
        countFalse = countFalse + 1;
    }
    
    if (y)
    {
        countTrue = countTrue + 1;
    }
    else
    {
        countFalse = countFalse + 1;
    }
    
    if (z)
    {
        countTrue = countTrue + 1;
    }
    else
    {
        countFalse = countFalse + 1;
    }
    
    return countTrue > countFalse;
}

int main(int argc, char** argv)
{
    int xInput = 0;
    int yInput = 0;
    int zInput = 0;
    
    scanf("%d %d %d", &xInput, &yInput, &zInput);
    
    bool x = xInput != 0;
    bool y = yInput != 0;
    bool z = zInput != 0;
    
    bool result = Election(x, y, z);
    
    printf("%d", result);
    
    return 0;
}