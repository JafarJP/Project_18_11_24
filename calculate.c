#include<stdio.h>
int add(int,int);
int sub(int,int);
int multi(int,int);
int div (int,int); 
int main()
{
    printf("Choose one of the following\n");
    int a,b;
    int value;
    scanf("%d%d",&a,&b);
    printf("1.ADD \n 2.SUB \n 3.MUL \n 4.DIV \n");
    scanf("%d",&value);
    switch (value)
    {
    case 1: printf("The sum is %d \n", sum(a,b)); /* constant-expression */
        /* code */
        break;
    case 2: printf("The sub is %d \n", sub(a,b)); /* constant-expression */
        /* code */
        break;
    case 3: printf("The mul is %d \n", multi(a,b)); /* constant-expression */
        /* code */
        break;
    case 4: printf("The div is %d \n", div(a,b)); /* constant-expression */
        /* code */
        break;
    
    default:
        printf("Choose a correct option\n");
        break;
    }
    return 0;
}




