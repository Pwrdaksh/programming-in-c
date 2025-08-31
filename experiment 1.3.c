#include <stdio.h>
#include <conio.h>
int main(){
printf ("Name- daksh pawar\nSAP_ID 590028473\nCourse-BCA\nBatch-6");
printf("\n--------------------------------------\n");
int a;
int b;
int SUM;
printf("Enter the value of first number: ");
scanf("%d",&a);
printf("Enter the value of second number: ");
scanf("%d",&b);
SUM=a+b;
printf("The sum of %d and %d is: %d\n", a, b, SUM);
getch();
return 0;
}