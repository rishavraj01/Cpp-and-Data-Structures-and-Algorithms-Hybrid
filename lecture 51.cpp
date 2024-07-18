// Introduction To Classes Pt-2
#include <iostream>
using namespace std;

class student {
    public:
        string name;
        int mids;
        float ends;
        bool pre_abs;
};

class vehicle {
    public:
        string car_name;
        string tyre_name;
        int number_of_tyres;
        int number_of_seats;
};

int main() {
    student a, b, c;
    int d, e, f;
    vehicle hyundai, suzuki, ferrari;
    
    a.name = "John";
    a.mids = 85;
    a.ends = 90.5;
    a.pre_abs = true;

    hyundai.car_name = "Hyundai i20";
    hyundai.tyre_name = "Michelin";
    hyundai.number_of_tyres = 4;
    hyundai.number_of_seats = 5;

    
    cout << "Student Name: " << a.name << endl;
    cout << "Mids: " << a.mids << endl;
    cout << "Ends: " << a.ends << endl;
    cout << "Present/Absent: " << (a.pre_abs ? "Present" : "Absent") << endl;

    cout << "Car Name: " << hyundai.car_name << endl;
    cout << "Tyre Name: " << hyundai.tyre_name << endl;
    cout << "Number of Tyres: " << hyundai.number_of_tyres << endl;
    cout << "Number of Seats: " << hyundai.number_of_seats << endl;

    return 0;
}
