#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random_num()
{
    int ran_num = rand() % 25 + 1;
    return ran_num;
}

int main()
{
    srand(time(0));
    int num_0 = random_num(); //Generate the first number
    cout << num_0 << endl;

    int num_1 = random_num();
    if (num_1 == num_0) //If number is same with previous one
    {
        while(1)
        {
            num_1 = random_num(); //Regenerate the number
            if (num_1 != num_0) //Untile it is not the same one
            {
                cout << num_1 << endl;
                break;
            }
        }
    }
    else //If its not the same one, print the number directly
    {
        cout << num_1 << endl;
    }
    

    int num_2 = random_num();
    if (num_2 == num_0 || num_2 == num_1) //Compare the numbers generate before
    {
        while(1)
        {
            num_2 = random_num();
            if (num_2 != num_0 && num_2 != num_1)
            {
                cout << num_2 << endl;
                break;
            }
        }
    }
    else
    {
        cout << num_2 << endl;
    }

    int num_3 = random_num();
    if (num_3 == num_0 || num_3 == num_1 || num_3 == num_2) //Compare the numbers generate before
    {
        while(1)
        {
            num_3 = random_num();
            if (num_3 != num_0 && num_3 != num_1 && num_3 != num_2)
            {
                cout << num_3 << endl;
                break;
            }
        }
    }
    else
    {
        cout << num_3 << endl;
    }
    
    return 0;
}