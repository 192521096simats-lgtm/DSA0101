#include <iostream>
#include <string>
using namespace std;

class RailwayTicket
{
    string name, coach;
    long mobno;
    int amt, totalamt;

public:
    void accept()
    {
        cout << "Enter customer name: ";
        cin >> name;

        cout << "Enter coach: ";
        cin >> coach;

        cout << "Enter mobile number: ";
        cin >> mobno;

        cout << "Enter basic ticket amount: ";
        cin >> amt;
    }

    void update()
    {
        totalamt = amt;

        if (coach == "First_AC")
            totalamt = amt + 700;
        else if (coach == "Second_AC")
            totalamt = amt + 500;
        else if (coach == "Third_AC")
            totalamt = amt + 250;
    }

    void display()
    {
        cout << "\n--- Railway Ticket Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Coach: " << coach << endl;
        cout << "Mobile Number: " << mobno << endl;
        cout << "Total Amount: Rs. " << totalamt << endl;
    }
};

int main()
{
    RailwayTicket obj;

    obj.accept();
    obj.update();
    obj.display();

    return 0;
}
