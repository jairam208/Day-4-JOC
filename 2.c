#include <stdio.h>

int main()
{
    int MrInt[6], i;
    float MrFloat[6];
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
    printf("\nMr.Int : ");
    for(i=0; i<6; i++)
    { 
        printf("%d ", MrInt[i]);
    }
    printf("\nMr.Float : ");
    for(i=0; i<6; i++)
    { 
        printf("%f ", MrFloat[i]);
    }
    printf("\nIn rev order : \n");
    for(i=5; i>=0; i--)
    {
        printf("%d ", MrInt[i]);
    }
    printf("\n");
    for(i=5; i>=0; i--)
    {
        printf("%f ", MrFloat[i]);
    } 
    return 0;
}