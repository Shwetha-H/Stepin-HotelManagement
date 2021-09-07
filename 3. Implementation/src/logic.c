#include "stdio.h"
#include "math.h"

int addition(){
    printf("Enter the numbers you want to add: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The sum of %d and %d is %d\n",num1, num2, num1+num2);
}
int subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The subtraction of num1 and num2 is %d\n",num1-num2);
}
int multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The multiplication of a and b is %d\n",num1*num2);
}
int division(){
    printf("Enter the numbers you want to divide: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The division of a and b is %f\n",(float)num1/(float)num2);
}
int modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("The modulus of a and b is %d\n",num1%num2);
}
int factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    if (n<0)
    printf("\nFactorial of %d is -1",n);
    else
        for(int i=1;i<=n;i++){
            factorial=factorial*i; // factorial*=i;
    
    printf("\nFactorial of %d is %d",n,factorial);
}
}
int power() {
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
int square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
int cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
int squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
