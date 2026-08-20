#include <iostream>
#include <string>
using namespace std;

class ShowRoom
{
    string name;
    long mobno;
    double cost, dis, amount;

public:
    void input()
    {
        cout << "Enter customer name: ";
        cin >> name;

        cout << "Enter mobile number: ";
        cin >> mobno;

        cout << "Enter cost of items: ";
        cin >> cost;
    }

    void calculate()
    {
        if (cost <= 10000)
            dis = cost * 0.05;
        else if (cost <= 20000)
            dis = cost * 0.10;
        else if (cost <= 35000)
            dis = cost * 0.15;
        else
            dis = cost * 0.20;

        amount = cost - dis;
    }

    void display()
    {
        cout << "\n--- ShowRoom Details ---" << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Mobile Number: " << mobno << endl;
        cout << "Amount to be paid: Rs. " << amount << endl;
    }
};

int main()
{
    ShowRoom obj;

    obj.input();
    obj.calculate();
    obj.display();

    return 0;
}
