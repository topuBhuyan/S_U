// Direct Equation

#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>

static int t =0;

int linedrawDE(int x1, int y1 , int x2, int y2)
{
	int x = x1;
	int y = y1;



	float x_f, m = (y2-y1)/(x2-x1), b = y1-m*x1;
	putpixel(x,y,15);
	while(y<y2)
	{
		y++;
		x_f = (y-b)/m;
		x = floor(x_f+0.5);
		putpixel(x,y,15);
	}
}

int main()
{
    int X,Y;
    initwindow(400,300,"Line Draw DDA");

    X=getmaxx();
    Y=getmaxy();
    linedrawDE(0,0,50,50);
    while(!kbhit())
    {

        delay(200);
    }

    return 0;
}
