#include <iostream>
#include <string>
using namespace std;

class movieMagic
{
    int year;
    string title;
    float rating;

public:
    void accept()
    {
        cout << "Enter year: ";
        cin >> year;

        cin.ignore();
        cout << "Enter movie title: ";
        getline(cin, title);

        cout << "Enter rating (0.0 to 5.0): ";
        cin >> rating;
    }

    void display()
    {
        cout << "\nMovie Title: " << title << endl;

        if (rating >= 0.0 && rating <= 2.0)
            cout << "Flop" << endl;
        else if (rating >= 2.1 && rating <= 3.4)
            cout << "Semi-hit" << endl;
        else if (rating >= 3.5 && rating <= 4.5)
            cout << "Hit" << endl;
        else if (rating >= 4.6 && rating <= 5.0)
            cout << "Super Hit" << endl;
        else
            cout << "Invalid rating" << endl;
    }
};

int main()
{
    movieMagic obj;

    obj.accept();
    obj.display();

    return 0;
}