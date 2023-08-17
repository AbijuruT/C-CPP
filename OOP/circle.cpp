/**
 * @file circle.cpp
 * @author Abijuru
 * @brief
 * @version 0.1
 * @date 2023-08-17
 *
 * @copyright Copyright (c) 2023
 *
 * This is a C++ program to implement a class called Circle that has private member variables for radius.
 * Include member functions to calculate the circle's area and circumference
 *
 */
#include <iostream>
using namespace std;

class Circle
{
    private:
        double radius;

    public:
    // Constructor
    Circle(double r)
    {
        radius = r;
    }

    // Member function to calculate the area
    double calculate_area()
    {
        return 3.14 * radius * radius;
    }

    // Member function to calculate the circumference
    double calculate_circumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle_obj(radius);

    cout << "Area is : " << circle_obj.calculate_area() << endl;
    cout << "Circumference is: " << circle_obj.calculate_circumference() << endl;

    return 0;
}
