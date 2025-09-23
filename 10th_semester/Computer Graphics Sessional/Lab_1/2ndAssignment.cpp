#include <graphics.h> 

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx();  
    int y = getmaxy();  

    rectangle(50, 50, x - 50, y - 50);

    int midx = (50 + (x - 50)) / 2;
    int midy = (50 + (y - 50)) / 2;

    line(50, midy, x - 50, midy); 
    line(midx, 50, midx, y - 50);  

    line(50, 50, x - 50, y - 50);
    line(50, y - 50, x - 50, 50);

    line(50, 100, x - 100, 200);
    line(100, y - 100, 200, 50);

    outtextxy(200, 20, "Name: Tofayel Ahamd Tofo");

    getch();
    closegraph();
    return 0;
}
