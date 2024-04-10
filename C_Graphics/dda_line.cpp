//Write a program to draw a line using DDA line drawing algorithm.
//AIM: To write a program to draw a line using DDA line drawing algorithm.
#include<graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>
#include<conio.h>
int main( )
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;
 
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 
printf("Enter the co-ordinates of first point :");
scanf("%f,%f",&x1, &y1);

printf("Enter the co-ordinates of second point :");
scanf("%f,%f",&x2, &y2);

dx=abs(x2-x1);
dy=abs(y2-y1);
 
if(dx>=dy)
step=dx;
else
step=dy;
 
dx=dx/step;
dy=dy/step;
 
x=x1;
y=y1;
 
i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
getch();
closegraph();

}            