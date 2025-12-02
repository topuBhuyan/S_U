#include <graphics.h>
#include <iostream>
using namespace std;

int main() {

    int width = 800;
    int height = 500;

    initwindow(width, height, "Custom Shape");

    setbkcolor(BLACK);
    cleardevice();
    setcolor(WHITE);
    setlinestyle(SOLID_LINE, 0, 2);

    // ---------------------------
    // BORDER (rounded look)
    // ---------------------------
    // Using multiple rectangles to simulate rounded edges
    //rectangle(50, 50, width - 50, height - 50);
    rectangle(55, 55, width - 55, height - 55);
    
    
    // ---------------------------
    // CENTER POSITION
    // ---------------------------
    int cx = width / 2;
    int cy = height / 2;

    // ---------------------------
    // SMALL CENTER CIRCLE
    // ---------------------------
    circle(cx, cy, 49);

    // ---------------------------
    // HORIZONTAL LINE
    // ---------------------------
    line(60, cy, width - 450, cy);
    
     line(450, cy, width - 60, cy);
    // ---------------------------
    // TWO VERTICAL LINES
    // ---------------------------
    // Left vertical
    line(cx - 50, 60, cx - 50, height - 60);

    // Right vertical
    line(cx + 50, 60, cx + 50, height - 60);
    
    
    outtextxy(cx + 60, cy + 15, (char*)"R=50");
    
    outtextxy(cx - 330, cy - 190, (char*)"R=50");
    
    outtextxy(cx + 300, cy + 170, (char*)"R=50");

    getch();
    closegraph();
    return 0;
}
