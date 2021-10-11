#include <stdio.h>

int main()
{
    char c[10]={'M','T','W','T','F','S'};
    int MrInt[]={560,660,590,760,480,960};
    float MrFloat[]={97.50,66.0,79.25,76.55,98.45,96.40};
    int i, j, max_Int, max_Float;
    max_Int = MrInt[0];
    max_Float = MrFloat[0];
    for(i=1; i<6; i++)
    {
        if(MrInt[i]>max_Int)
        {
            max_Int = MrInt[i];
        }
        if(MrFloat[i]>max_Float)
        {
            max_Float = MrFloat[i];
        }
    }
    int pos_int, pos_float;
    for(i=0; i<6; i++)
    {
        if(MrInt[i]==max_Int);
        {
            pos_int = i;
            break;
        }
    }
    for(j=0; j<6; j++)
    {
        if(MrFloat[i]==max_Float);
        {
            pos_float = j;
            break;
        }
    }
    printf("Mr.Int can party on %c and Mr.Float can party on %c", c[pos_int], c[pos_float]);
    return 0;
}