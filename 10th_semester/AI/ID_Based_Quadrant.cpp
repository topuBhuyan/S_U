// id based quadrant line draw

#include <graphics.h>
#include <iostream>
using namespace std;

void BresenhamLine(int x1,int y1,int x2,int y2,int q, int w, int h){

    if(q == 2){                     
        x1 = w - x1;  
        x2 = w - x2;
    }
    else if(q == 3){               
        x1 = w - x1;  
        y1 = h - y1;
        x2 = w - x2;  
        y2 = h - y2;
    }
    else if(q == 4){           
        y1 = h - y1;
        y2 = h - y2;
    }

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int x, y;

    if(x1 > x2){
        x = x2;
        y = y2;
        x2 = x1;
        y2 = y1;
    }
    else{
        x = x1;
        y = y1;
    }

    int d = 2 * dy - dx;
    int inc1 = 2 * dy;
    int inc2 = 2 * (dy - dx);

    putpixel(x, y, WHITE);

    while(x < x2){
        x++;

        if(d < 0){
            d += inc1;
        } else {
            y++;
            d += inc2;
        }

        putpixel(x, y, WHITE);
    }
}

int main() {
    int w, h, id;
    cout << "Enter window width & height: ";
    cin >> w >> h;

    cout << "Enter last 4 digits of your ID: ";
    cin >> id;

    int q = (id % 4) + 1;
    cout << "Quadrant: " << q << endl;

    int x1, y1, x2, y2;
    cout << "Enter X1 Y1: ";
    cin >> x1 >> y1;
    cout << "Enter X2 Y2: ";
    cin >> x2 >> y2;

    initwindow(w, h, "Bresenham Line Quadrant");
    
    line(w/2,0,w/2,h);
	line(0,h/2,w,h/2);

    BresenhamLine(x1, y1, x2, y2, q, w, h);

    while(!kbhit()){
        delay(200);
    }

    closegraph();
    return 0;
}

