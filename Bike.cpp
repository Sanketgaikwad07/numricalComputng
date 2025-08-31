#include <iostream>
#include <string>
using namespace std;

class Bike {
private:

    string brand;
    string model;
    int speed;

public:
    // Constructor
    Bike(string b, string m) {
        brand = b;
        model = m;
        speed = 0;
    }

    // Function to accelerate the bike
    void accelerate(int value) {
        speed += value;
        cout << "Accelerating... Current speed: " << speed << " km/h" << endl;
    }

    // Function to apply brakes
    void brake(int value) {
        if (speed >= value) {
            speed -= value;
        } else {
            speed = 0;
        }
        cout << "Braking... Current speed: " << speed << " km/h" << endl;
    }

    // Function to display bike info
    void displayInfo() {
        cout << "Bike Brand: " << brand << endl;
        cout << "Bike Model: " << model << endl;
        cout << "Current Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Create a Bike object
    Bike myBike("Yamaha", "MT-15");

    myBike.displayInfo();
    myBike.accelerate(30);
    myBike.brake(10);
    myBike.displayInfo();

    return 0;
}
