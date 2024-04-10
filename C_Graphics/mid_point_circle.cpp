//Write a program to draw a circle using Mid-Point Circle Drawing Algorithm.
//AIM: To write a program to draw a circle using Mid-Point Circle Drawing Algorithm.
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
putpixel(x0 + x, y0 + y, 7);
putpixel(x0 + y, y0 + x, 7);
putpixel(x0 - y, y0 + x, 7);
putpixel(x0 - x, y0 + y, 7);
putpixel(x0 - x, y0 - y, 7);
putpixel(x0 - y, y0 - x, 7);
putpixel(x0 + y, y0 - x, 7);
putpixel(x0 + x, y0 - y, 7);
 
if (err <= 0)
{
    y += 1;
    err += 2*y + 1;
}
 
if (err > 0)
{
    x -= 1;
    err -= 2*x + 1;
}
    }
}
 
int main()
{
int gdriver=DETECT, gmode, error, x, y, r;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
printf("Enter radius of circle: ");
scanf("%d", &r);
 
printf("Enter co-ordinates of center(x and y): ");
scanf("%d%d", &x, &y);
drawcircle(x, y, r);
getch();
return 0;
}
//Output:
//Enter radius of circle: 50
//Enter co-ordinates of center(x and y): 100 100

//conclusion: In this program, we draw a circle using the Mid-Point Circle Drawing Algorithm. The algorithm is used to draw a circle in the computer graphics. The algorithm is based on the idea of determining the next pixel position of the circle based on the current pixel position. The algorithm is efficient and easy to implement. The program takes the radius and center of the circle as input and draws the circle on the screen using the drawcircle function. The drawcircle function calculates the pixel positions of the circle using the Mid-Point Circle Drawing Algorithm and draws the circle on the screen using the putpixel function. 