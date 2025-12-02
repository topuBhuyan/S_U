#include <graphics.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

    int winW, winH;
    int userX, userY;
    string studentID;

    // ----- User Inputs -----
    //cout << "Enter Student ID: ";
    //cin >> studentID;

    cout << "Enter window width: ";
    cin >> winW;

    cout << "Enter window height: ";
    cin >> winH;

    cout << "Enter circle X coordinate: ";
    cin >> userX;

    cout << "Enter circle Y coordinate: ";
    cin >> userY;

    // ----- Open Dynamic Window -----
    initwindow(winW, winH, ("Student ID: " + studentID).c_str());

    // ----- Origin (center of screen) -----
    int originX = winW / 2;
    int originY = winH / 2;

    setbkcolor(BLACK);
    cleardevice();

    setcolor(WHITE);

    // -----------------------------------
    //            DRAW BORDER
    // -----------------------------------
    rectangle(20, 20, winW - 20, winH - 20);

    // ----- Draw Axes -----
    line(20, originY, winW - 20, originY);  // X-axis inside border
    line(originX, 20, originX, winH - 20);  // Y-axis inside border

    // ----- Axis Labels -----
    outtextxy(winW - 60, originY - 30, (char*)"+X");
    outtextxy(30, originY - 30, (char*)"-X");

    outtextxy(originX + 10, 30, (char*)"-Y");
    outtextxy(originX + 10, winH - 40, (char*)"+Y");

    // ----- Convert User Coordinates -----
    int screenX = originX + userX;
    int screenY = originY - userY;

    // ----- Draw Circle -----
    int radius = 50;
    circle(screenX, screenY, radius);

    // ----- Center marker -----
    setcolor(RED);
    fillellipse(screenX, screenY, 3, 3);
    
    outtextxy(0, 0, "Std ID:CSE21022092");

    // Stop & Close
    getch();
    closegraph();
    return 0;
}
