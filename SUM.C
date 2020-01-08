#include<stdio.h>
#include<conio.h>
void main(){
float num1, num2, sum;
clrscr();
//write a C program to take input of 2 numbers from user and print it
printf("Please enter the first numnber: ");
scanf("%f", num1);
printf("Please enter the second number: ");
scanf("%f", num2);
sum= num1+num2;
printf("The sum of %f and %f is %f", num1, num2, sum);
getch();
}