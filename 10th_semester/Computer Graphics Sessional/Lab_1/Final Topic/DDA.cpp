// DDA Algorithm

#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>

void lineDrawDDA(int coord,int Mx,int My, int x1, int y1,int x2,int y2)
{
    int x,y;
    float xf,yf;
    int cx= Mx/2,cy= My/2;
    int sx= 1, sy= 1;

    if(coord==1)
    {
        sx=1;
        sy=-1;
    }
    else if(coord==2)
    {
        sx= -1;
        sy= -1;
    }
    else if(coord==3)
    {
        sx= -1;
        sy= 1;

    }
    else if(coord==4)
    {
        sx=1;
        sy=1;
    }

    if(x1>x2 || y1>y2)
    {
        x1=x1+x2;
        x2=x1-x2;
        x1=x1-x2;

        y1=y1+y2;
        y2=y1-y2;
        y1=y1-y2;
    }

    float m=(y2-y1)/(x2-x1);
    int col = 1;
    if(m<=1)
    {
        x=x1;
        yf=y1;

        while(x<=x2)
        {
            int y=floor(yf+0.5);
            putpixel(cx+(sx*x),cy+(sy*y),15);
            if(col>15)
            {
            	col = 1;
			}
			delay(200);
			
            x++;
            yf=yf+m;
        }
    }
    else // m>1
    {
        y=y1;
        xf=x1;

        while(y<=y2)
        {

            int x=floor(xf+0.5);
            putpixel(cx+(sx*x),cy+(sy*y),15);
            y++;
            if(col>15)
            {
            	col = 1;
			}
            delay(200);
            xf=xf+1.0/m;
            
        }

    }


}



int main()
{
    int X,Y;
    initwindow(400,300,"Line Draw DDA");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    int x1,y1,x2,y2;
    
    lineDrawDDA(2,X,Y,10,20,50,150);

    while(!kbhit())
    {

        delay(200);
    }

    return 0;
}
DDA_Imple.cpp
Displaying DDA_Imple.cpp.