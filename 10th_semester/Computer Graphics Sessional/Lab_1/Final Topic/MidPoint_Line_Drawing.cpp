// Mid point Line Drawing Algoritm

#include <iostream>
// Function to implement Midpoint Line Drawing Algorithm
void midPointLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Handle the case where the line is steeper (dy > dx)
    // or when dx is zero (vertical line)
    if (abs(dy) > abs(dx)) {
        // Swap x and y to work in the shallower slope octant
        std::swap(x1, y1);
        std::swap(x2, y2);
        std::swap(dx, dy); // dx and dy are now swapped effectively
        // Ensure x1 is always less than x2 after swapping
        if (x1 > x2) {
            std::swap(x1, x2);
            std::swap(y1, y2);
        }

        int d = 2 * dy - dx;
        int incrE = 2 * dy;
        int incrNE = 2 * (dy - dx);
        int x = x1;
        int y = y1;

        std::cout << "Plotting: (" << y << ", " << x << ")\n"; // Output swapped coordinates
        while (x < x2) {
            if (d <= 0) {
                d += incrE;
            } else {
                d += incrNE;
                y++;
            }
            x++;
            std::cout << "Plotting: (" << y << ", " << x << ")\n"; // Output swapped coordinates
        }
    } else { // Handle the case where the line is shallower (dx >= dy)
        // Ensure x1 is always less than x2
        if (x1 > x2) {
            std::swap(x1, x2);
            std::swap(y1, y2);
        }

        int d = 2 * dy - dx;
        int incrE = 2 * dy;
        int incrNE = 2 * (dy - dx);
        int x = x1;
        int y = y1;

        std::cout << "Plotting: (" << x << ", " << y << ")\n";
        while (x < x2) {
            if (d <= 0) {
                d += incrE;
            } else {
                d += incrNE;
                y++;
            }
            x++;
            std::cout << "Plotting: (" << x << ", " << y << ")\n";
        }
    }
}

int main() {
    int x1, y1, x2, y2;

    std::cout << "Enter coordinates of first point (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter coordinates of second point (x2 y2): ";
    std::cin >> x2 >> y2;

    midPointLine(x1, y1, x2, y2);

    return 0;
}