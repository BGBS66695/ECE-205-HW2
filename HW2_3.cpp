#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    double height;
    double weight;
    int age;

    cout << "Please type your height: " << endl; //Request the input
    cin >> height;

    cout << "Please type your weight: " << endl;
    cin >> weight;

    cout << "Please type your age: " << endl;
    cin >> age;

    double hat_size;
    hat_size = (2.9 * weight) / height; //Calculate the hat size

    double jacket_size;
    if (age <= 39)
    {
        jacket_size = (height * weight) / 288; //Calculate the jacket size with no add
    }
    else
    {
        jacket_size = (height * weight) / 288;
        jacket_size = (height * weight) / 288; //Calculate the jacket size with add
        jacket_size = jacket_size + ((age - 30) / 10) * 0.125;
    }
    
    double waist_size;
    if (age <= 29)
    {
        waist_size = weight / 5.7; //Calculate the waist size with no add
    }
    else
    {
        waist_size = weight / 5.7;
        waist_size = waist_size + ((age - 28) / 2) * 0.1; //Calculate the waist size with add
    }

    cout << fixed << setprecision(2);
    cout << "Hat size: " << hat_size << endl;
    cout << "Jacket size: " << jacket_size << endl;
    cout << "Waist size: " << waist_size << endl;
    
    return 0;
}