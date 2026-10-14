#include<stdio.h>
#include<stdlib.h>

int Addition(
                int iNo1, //First input
                int iNo2  //Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;      //Business logic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);   

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}