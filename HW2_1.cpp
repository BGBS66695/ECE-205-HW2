#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double force(double m1, double m2, double d, double G)
{
    int m_m1 = m1 * 1000, m_m2 = m2 * 1000; //Change the unit
    double force = (G * m_m1 * m_m2) / pow(d, 2); //Calculate the force
    return force;
}

int main()
{
    do
    {
        int m1, m2, d;
        double G = 6.673e-8;
        cout << "Please type the mass 1 in kg:" << endl;
        cin >> m1;
        cout << "Please type the mass 2 in kg:" << endl;
        cin >> m2;
        cout << "Please type the distance in cm:" << endl;
        cin >> d;

        cout << "The force is: " << force(m1, m2, d, G) << " dyne" << endl;
    } while (1);
    
    return 0;
}