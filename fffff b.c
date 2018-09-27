#include<stdio.h>
int main(void)
{
    float m;
    float g;
    float t;
    while(g!=-1){
            printf("enter the gallons used (-1 to end):");
    scanf("%f",&g);
     printf("enter the miles used :");
    scanf("%f",&m);
    t=m/g;
    printf("the miles/gallons :%f",t);
    }
    return 0;

}
