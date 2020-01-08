#include<stdio.h>
#include<conio.h>
void main(){
char name[30], city[30];
int age;
clrscr();
//scan and display different data types (char)
printf("Please enter your name: ");
gets(name);
printf("Please enter your city: ");
gets(city);
printf("Please enter your age: ");
scanf("%i", &age);
printf("Hello %s ! Your details are:\nYou live in %s and are %i years old", name, city, age);
getch();
}