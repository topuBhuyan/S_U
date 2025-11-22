// Bresnham Mid point Circle Point

#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

void bresenhamCircle(int r,int X,int Y,int cor)
{
    int x=0;
    int y=r;
    int d=3-2*r;
    int color=1;

    while(x<=y)
        {
            if(cor==0)
                {
                    putpixel((X/2)+x,(Y/2)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-x,(Y/2)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+y,(Y/2)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-y,(Y/2)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-y,(Y/2)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+y,(Y/2)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-x,(Y/2)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+x,(Y/2)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==2)
                {
                    putpixel((X/4)+x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==1)
                {
                    putpixel(((3*X)/4)+x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==3)
                {
                    putpixel((X/4)+x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==4)
                {
                    putpixel(((3*X)/4)+x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }


            if(d<0)
                {
                    d=d+4*x+6;
                    x++;
                }
            else
                {
                    d=d+4*(x-y)+10;
                    y--;
                    x++;
                }
        }
}

void midPointCircle(int r,int X,int Y,int cor)
{
    int x=0;
    int y=r;
    int p=1-r;
    int color=1;

    while(x<=y)
        {

            if(cor==0)
                {
                    putpixel((X/2)+x,(Y/2)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-x,(Y/2)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+y,(Y/2)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-y,(Y/2)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-y,(Y/2)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+y,(Y/2)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)-x,(Y/2)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/2)+x,(Y/2)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==2)
                {
                    putpixel((X/4)+x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==1)
                {
                    putpixel(((3*X)/4)+x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,(Y/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,(Y/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,(Y/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+x,(Y/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==3)
                {
                    putpixel((X/4)+x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)-x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel((X/4)+x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }
            else if(cor==4)
                {
                    putpixel(((3*X)/4)+x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-y,((3*Y)/4)+x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+y,((3*Y)/4)-x,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)-x,((3*Y)/4)+y,color++);
                    color=color>16?1:color;
                    delay(50);
                    putpixel(((3*X)/4)+x,((3*Y)/4)-y,color++);
                    color=color>16?1:color;
                    delay(50);
                }

            if(p<0)
                {
                    p=p+2*x+3;
                }
            else
                {
                    p=p+2*(x-y)+5;
                    y--;
                }
            x++;
        }
}
int main()
{
    int X,Y;
    initwindow(600,600,"bresenhamline");

    X=getmaxx();
    Y=getmaxy();

    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);

    int algo;
    int r,cor;

    cout<<"[0]: Bresemham Circle "<<endl;
    cout<<"[1]: Mid point Circle "<<endl;
    cin>>algo;
    cout<<"Enter Redius :";
    cin>>r;
    cout<<"Enter Coordinate ";
    cin>>cor;
    
    if(algo==0)
        {
            bresenhamCircle(r,X,Y,cor);
        }
    else if(algo==1)
        {
            midPointCircle(r,X,Y,cor);

        }

    while(!kbhit())
        {
            delay(200);
        }

    return 0;
}