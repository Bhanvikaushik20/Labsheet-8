#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    float price;
    void display() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    Car car1, car2;
    car1.brand = "Toyota"; car1.price = 25000.5f;
    car2.brand = "Honda";  car2.price = 22000.0f;
    car1.display();
    car2.display();
    return 0;
}
// Output:
// Brand: Toyota, Price: $25000.5
// Brand: Honda, Price: $22000
