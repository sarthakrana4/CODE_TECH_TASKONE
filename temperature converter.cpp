#include<iostream>

using namespace std;

int main()
{
    double f, c, k;
    int option;
    cout <<"Choose the following options. \n" << endl;
    cout <<"1. Celcius to Fahrenheit." << endl;
    cout <<"2. Fahrenheit to Celcius." << endl;
    cout <<"3. Celcius to Kelvin."     << endl;
    cout <<"4. Kelvin to Celcius."     << endl;
    cout <<"5. Kelvin to Fahrenheit."     << endl;
    cout <<"6. Fahrenheit to Kelvin."     << endl;

    cout << "\n\n Choose 1, 2, 3, 4, 5 or 6 from the given menu ===>";
    cin >> option;
    cout  << endl;

    switch(option)

    {
        case 1:
        {
            cout << "Enter the temperature in Celcius:: ";
            cin >> c;

            f = (1.8 * c) + 32.0;

            cout << "\n Temperature in degree Fahrenheit :: " << f << endl;
        }
        break;
        case 2:
        {
            cout << "Enter the temperature in Fahrenheit :: ";
            cin >> f;

            c = (f - 32)/ 1.8;

            cout <<"\n Temperature in degree Celcius ::  " << c << "C" << endl;
        }
        break;
        case 3:
        {
            cout << "Enter the temperature in Celcius:: ";
            cin >> c;

            k = c + 273.15;

            cout << "\n Temperature in Kelvin:: " << k << "K" << endl;
        }
        break;
        case 4:
        {
            cout << "Enter the temperature in Kelvin:: ";
            cin >> k;

            c = k - 273.15;

            cout << "\n Temperature in Celcius :: " << c << "C" << endl;
        }
        break;
        case 5:
        {
            cout << "Enter the temperature in Kelvin:: ";
            cin >> k;

            f = 1.8 * (k - 273.15) + 32;

            cout << "\n Temperature in Fahrenheit :: " << f << "F" << endl;
        }
        break;
        case 6:
        {
            cout << "Enter the temperature in Fahrenheit :: ";
            cin >> f;

            k = (f - 32) * 5/9 + 273.15;

            cout <<"\n Temperature in degree Kelvin ::  " << k << "K" << endl;
        }
        default:
        {
            cout <<"Wrong Input.";
        }
    }
    return 0;   
}

 