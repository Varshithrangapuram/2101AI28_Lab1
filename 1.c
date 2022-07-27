#include <stdio.h>
int main() {
float a,b;
int c;
printf("enter two numbers\n");
scanf("%f %f",&a,&b);
printf("enter the operation you wanted to perform between two numbers\n");
printf("press 0 for addition operation\n press 1 for subtraction operation\n press 2 for multiplication operation\n press 3 for division operation\n");
scanf("%d",&c);
if(c==0)
printf("addition between a and b gives %f\n",a+b);
if(c==1)
printf("subtraction between a and b gives %f\n",a-b);
if(c==2)
printf("multiplication between a and b gives %f\n",a*b);
