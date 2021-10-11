#include <stdio.h>

int main()
{
    int MrInt[6], i, total_Int=0, avg_Int;
    float MrFloat[6], total_Float=0, avg_Float;
    printf("Enter wages of Mr.Int : ");
    for(i=0; i<6; i++)
    {
        scanf("%d", &MrInt[i]);
    }
    printf("Enter wages of Mr.Float : ");
    for(i=0; i<6; i++)
    {
        scanf("%f", &MrFloat[i]);
    }
    for(i=0; i<6; i++)
    {
        total_Int += MrInt[i];
        total_Float += MrFloat[i];
    }
    avg_Int = total_Int / 6;
    avg_Float = total_Float / 6;
    printf("Mr.Int total = %d and Average = %d\n", total_Int, avg_Int);
    printf("Mr.Float total = %f and Average = %f\n", total_Float, avg_Float);
    return 0;
}