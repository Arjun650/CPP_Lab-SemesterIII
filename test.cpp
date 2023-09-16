#include<iostream>
#include<cmath>

using namespace std;

class Point {
    int x, y;

public:
    // Parameterized constructor
    Point(int a, int b) : x(a), y(b) {}

    // Copy constructor
    Point(const Point& other) : x(other.x), y(other.y) {}

    // Calculate distance between two points
    float calculate_distance(const Point& other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    int x, y;

    cout << "Enter coordinates for point 1:" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    Point p1(x, y);

    Point p2(p1);  // Copy constructor

    cout << "Enter coordinates for point 3:" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    Point p3(x, y);

    float distance = p1.calculate_distance(p3);
    cout << "Distance between point 1 and point 3: " << distance << endl;

    return 0;
}
