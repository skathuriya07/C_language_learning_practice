#include<stdio.h>
#include<conio.h>
void main(){
float pi=3.14, radius, area;
clrscr();
//finding area of a circle by taking user input
printf("Please enter the radius of the circle: ");
scanf("%f", &radius);
area= pi*radius*radius;
printf("The area of the circle is: %f", area) ;
getch();
}