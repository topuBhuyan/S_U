// Bresnham Line Drawing

#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

void bresenhamline(int x1, int y1, int x2, int y2){
    int dx, dy, d, inc1, inc2;
    float m;
    dx = x2 - x1;
    dy = y2 - y1;
    d = 2 * dy - dx;
    inc1 = 2 * dy;
    inc2 = 2 * (dy-dx);
    m = dy/dx;

    if(m < 1) {
        while(x1 <= x2) {
            putpixel(x1, y1, 15);
            delay(100);
            if(d <= 0){
                d = d + inc1;
            }
            else {
                d = d + inc2;
                y1++;
            }
            x1++;
        }
    }
    else {
        d = 2 * dx = dy;
        inc1 = 2 * dx;
        inc2 = 2 * (dx - dy);

        while(y1 <= y2){
            putpixel(x1, y1, 15);
            delay(100);
            if(d <= 0){
                d = d + inc1;
            }else {
                d = d + inc2;
                x1++;
            }
            y1++;
        }
    }
}

int main() {
    int X, Y;
    initwindow(400, 400, "bresenhamline");

    X = getmaxx();
    Y = getmaxy();

    line(0, Y/2, X, Y/2);
    line(X/2, 0, X/2, Y);

    bresenhamline(1, 1, 50, 100);

    while(!kbhit()){
        delay(200);
    }
    return 0;
}
