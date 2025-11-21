// Bresenham Circle Drawing

#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

void bresenhamCircle(int r , int X, int Y)
{
	// variable decl. and init.
	int x = 0;
	int y = r;
	int d = 3 - 2*r;
	int h = X/4;
	int k = 3*Y/4;
	
	while(x<=y)
	{
		putpixel(x+ h, y + k, 10);
		putpixel(y+ h, x + k, 10);
		putpixel(-y+ h, x + k, 10);
		putpixel(-x+ h, y + k, 10);
		delay(50);
		putpixel(-x+ h, -y + k, 5);
		putpixel(-y+ h, -x + k, 5);
		putpixel(y+ h, -x + k, 5);
		putpixel(x+ h, -y + k, 5);
		
		if(d<0)
		{
			d = d + 4*x + 6;
		}
		else
		{
			d = d + 4*(x-y) + 10;
			y--; 
		}
		x++;
		
	}

}


void MidpointCircle(int r , int X, int Y)
{
	// variable decl. and init.
	int x = 0;
	int y = r;
	int d = 1 - r;
	int h = X/4;
	int k = 3*Y/4;
	
	while(x<=y)
	{
		putpixel(x+ h, y + k, 10);
		putpixel(y+ h, x + k, 10);
		putpixel(-y+ h, x + k, 10);
		putpixel(-x+ h, y + k, 10);
		delay(50);
		putpixel(-x+ h, -y + k, 5);
		putpixel(-y+ h, -x + k, 5);
		putpixel(y+ h, -x + k, 5);
		putpixel(x+ h, -y + k, 5);
		
		if(d<0)
		{
			d = d + 2*x + 3;
		}
		else
		{
			d = d + 2*(x-y) + 5;
			y--; 
		}
		x++;
		
	}

}
int main()
{
    int X,Y, r;
    initwindow(400,400,"bresenhamCircle");

    X=getmaxx(); //399
    Y=getmaxy(); //399

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
	r = 100;
	int ch;
	cin>>ch;
	
	if(ch==1)
	{
    bresenhamCircle(r, X, Y);
	}
	else if(ch==2)
	{
	
	MidpointCircle(r,X,Y);
	}
	else
	{
		cout<<"Wrong input,try again later!!";
	}
    while(!kbhit())
    {
        delay(200);
    }

    return 0;
}
