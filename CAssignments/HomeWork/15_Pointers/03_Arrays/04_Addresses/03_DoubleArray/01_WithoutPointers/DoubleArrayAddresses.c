#include<stdio.h>

int main(void)
{
    //variablde declarations
    double dArray[10];
    int i;

    //code
    for (i = 0; i < 10; i++)
        dArray[i] = (float)(i + 1) * 1.333333f;

    printf("\n\n");
    printf("Elements of the double Array : \n\n");
    for (i = 0; i < 10; i++)
        printf("dArray[%d] = %lf\n", i, dArray[i]);

    printf("\n\n");
    printf("Elements of the double Array  : \n\n");
    for (i = 0; i < 10; i++)
        printf("dArray[%d] = %lf \t \t Address = %p \n", i, dArray[i], &dArray[i]);

    return (0);

}
