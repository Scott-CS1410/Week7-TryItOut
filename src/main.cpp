#include <iostream>
using namespace std;

class Vector2D {
public:
    double x;
    double y;

    Vector2D(double x = 0, double y = 0) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& other) const {
        return {x + other.x, y + other.y};
    }

    Vector2D operator-(const Vector2D& other) const {
        return {x - other.x, y - other.y};
    }

    Vector2D operator*(double scalar) const {
        return {x * scalar, y * scalar};
    }

    friend ostream& operator<<(ostream& os, const Vector2D& v);
};

ostream& operator<<(ostream& os, const Vector2D& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vector2D position(10, 5);
    Vector2D velocity(1, -2);

    position = position + velocity * 0.5;

    cout << position << endl;
}