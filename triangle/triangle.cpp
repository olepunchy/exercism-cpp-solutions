#include "triangle.h"

#include <stdexcept>

namespace triangle {

bool AllSidesArePositive(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0);
}

bool TestTriangleEquality(double a, double b, double c) {
    return (a + b >= c) && (b + c >= a) && (c + a >= b);
}

void TriangleIsValid(double a, double b, double c) {
    if (!AllSidesArePositive(a, b, c) || !TestTriangleEquality(a, b, c)) {
        throw std::domain_error("invalid triangle");
    }
}

bool TriangleIsEquilateral(double a, double b, double c) {
    return (a == b) && (b == c);
}

bool TriangleIsIsosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (c == a);
}

}  // namespace triangle

triangle::flavor triangle::kind(double a, double b, double c) {
    // Test that the triangle is valid before proceeding
    TriangleIsValid(a, b, c);

    if (TriangleIsEquilateral(a, b, c)) {
        return flavor::equilateral;
    } else if (TriangleIsIsosceles(a, b, c)) {
        return flavor::isosceles;
    } else {
        return flavor::scalene;
    }
}
