// Write a program to swap two variables using third variable.

#include<stdio.h>
#include<conio.h>

void main(){
int a = 5;
int b = 9;
int c;
clrscr();
c = a;
a = b;
b = c;
printf("value of a is %d\n",a);
printf("value of b is %d",b);
getch();
}