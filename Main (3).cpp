 #include <iostream>
using namespace std;

// Class to represent distance in meters and centimeters
class Distance {
private:
    int meters;
    int centimeters;

public:
    // Constructor to initialize Distance from an int (interpreted as centimeters)
    Distance(int cm) {
        meters = cm / 100;       // 1 meter = 100 centimeters
        centimeters = cm % 100;  // Remaining centimeters
    }

    // Function to display the distance
    void display() const {
        cout << meters << " meters and " << centimeters << " centimeters." << endl;
    }
};

int main() {
    int cm;
    cout << "Enter distance in centimeters: ";
    cin >> cm;

    // Implicit conversion from int to Distance object
    Distance dist = cm;

    // Display the result
    dist.display();

    return 0;
}