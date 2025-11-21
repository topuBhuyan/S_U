// Mid point Circle Drawing Algorithm

#include <iostream.h> // For input/output operations
#include <graphics.h> // For graphics functions like putpixel and initgraph

void drawcircle(int x0, int y0, int radius) {
    int x = radius;
    int y = 0;
    int err = 0; // Decision parameter

    while (x >= y) {
        // Plot points in all 8 octants by reflecting the calculated point (x, y)
        putpixel(x0 + x, y0 + y, 7); // Octant 1
        putpixel(x0 + y, y0 + x, 7); // Octant 2
        putpixel(x0 - y, y0 + x, 7); // Octant 3
        putpixel(x0 - x, y0 + y, 7); // Octant 4
        putpixel(x0 - x, y0 - y, 7); // Octant 5
        putpixel(x0 - y, y0 - x, 7); // Octant 6
        putpixel(x0 + y, y0 - x, 7); // Octant 7
        putpixel(x0 + x, y0 - y, 7); // Octant 8

        // Update decision parameter and coordinates
        if (err <= 0) {
            y += 1;
            err += 2 * y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}

int main() {
    int gdriver = DETECT, gmode, error, x, y, r;

    // Initialize graphics mode
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi"); // Path to BGI files might need adjustment

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter co-ordinates of center (x and y): ";
    cin >> x >> y;

    // Call the function to draw the circle
    drawcircle(x, y, r);

    // Keep the graphics window open until a key is pressed
    getch(); 
    closegraph(); // Close graphics mode
    return 0;
}