#include<iostream>
using namespace std;

int main()
{
    int currency1 = 0, value = 0, currency2 = 0;
    double rate = 0;

    cout << "Currency Converter  \n" << endl;

    cout << "Available Currencies:\n ";
    cout << "1. Euro          \n ";
    cout << "2. Pound         \n ";
    cout << "3. Dollar        \n ";
    cout << "4. Chinese Yuan  \n\n ";

    cout << "Please choose a currency: ";
    cin >> currency1;

    if(currency1==1){
            cout << "\nYou have selected Euro.\n";
            cout << "Please choose a value in Euro: ";
            cin >> value;
            cout << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 1;
                cout << value << " Euro == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 0.83;
                cout << value << " Euro == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1.08;
                cout << value << " Euro == " << rate << " Dollars.\n\n\n\n";
                break;

            case 4:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 6.89;
                cout << value << " Euro == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }}
else if(currency1==2)
       {
            cout << "\nYou have selected Pound.\n";
            cout << "Please choose a value in Pounds: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Pounds.\n";
            cout << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 1.21;
                cout << value << " Pounds == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 1;
                cout << value << " Pounds == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1.31;
                cout << value << " Pounds == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 8.32;
                cout << value << " Pounds == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }

       }
else if(currency1==3)
       {
            cout << "\nYou have selected Dollar.\n";
            cout << "Please choose a value in Dollar: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Dollars.\n";
            cout << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 0.92;
                cout << value << " Dollars == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 0.77;
                cout << value << " Dollars == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 1;
                cout << value << " Dollars == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 6.37;
                cout << value << " Dollars == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }

       }
else if(currency1==4)
       {
            cout << "\nYou have selected Chinese Yuan.\n";
            cout << "Please choose a value in Chinese Yuan: ";
            cin >> value;
            cout << "\nYou have chosen " << value << " Chinese Yuan.\n";
            cout << "Please choose the currency you wish to convert to: ";
            cin >> currency2;

        switch (currency2)
        {
            case 1:
                cout << "\nYou have chosen Euro.\n\n";
                rate = value * 0.15;
                cout << value << " Chinese Yuan == " << rate << " Euro.\n\n\n\n";
                break;
            case 2:
                cout << "\nYou have chosen Pounds.\n\n";
                rate = value * 0.12;
                cout << value << " Chinese Yuan == " << rate << " Pounds.\n\n\n\n";
                break;
            case 3:
                cout << "\nYou have chosen Dollars.\n\n";
                rate = value * 0.16;
                cout << value << " Chinese Yuan == " << rate << " Dollars.\n\n\n\n";
                break;
            case 4:
                cout << "\nYou have chosen Chinese Yuan.\n\n";
                rate = value * 1;
                cout << value << " Chinese Yuan == " << rate << " Chinese Yuan.\n\n\n\n";
                break;
        }

       }
       else
       cout<<"You entered wrong number";

          return 0;
    }
