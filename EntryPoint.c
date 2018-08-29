#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    int iAns=0;
    printf("Enter number greater than 5:");
    scanf("%d",&iValue);
    iAns=Substract(iValue);

    printf("Answer:%d\n",iAns);

    return 0;
}
