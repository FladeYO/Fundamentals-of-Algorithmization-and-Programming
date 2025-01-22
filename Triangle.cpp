#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Введите координаты первой вершины (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины (x3, y3): ";
    cin >> x3 >> y3;
    double area = calculateArea(x1, y1, x2, y2, x3, y3);
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}