    #include<graphics.h>
    #include<conio.h>

    int main()
 {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(100, 100, 300, 300);
    line(130, 100, 130, 300);
    line(270, 100, 270, 300);

    int cx = 200, cy = 200;
    int R = 50;
    circle(cx, cy, R);

    line(130, 200, 150, 200);
    line(250, 200, 270, 200);

    outtextxy(75, 80, "A(5,5)");
    outtextxy(120, 80, "C(10,5)");
    outtextxy(270, 80, "E");
    outtextxy(280, 200, "H");
    outtextxy(305, 300, "B");
    outtextxy(170, 130, "R=10");
    outtextxy(125, 310, "D");

    getch();
    closegraph();
    return 0;
}


int gd = DETECT, gm;
initgraph(&gd, &gm, "");

rectangle(100, 100, 300, 300);
line(130, 100, 130, 300);
line(270, 100, 300);

int cx = 200, cy = 200;
int R = 50;
circle(cx, cy, R);

line(130, 200, 150, 200);
line(250, 200, 270, 200);

outtextxy(75, 80,"A(5,5)");
outtextxy(120, 80, "C(10, 5)");
outtextxy(270, 80, "E");
outtextxy(280, 200, "H";)