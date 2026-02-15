#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("score.txt"); //Open the file

    double score[5];
    double sum;
    double average;
    double s_d;

    for (int i = 0; i < 5; i++) //Calculate the sum
    {
        inputFile >> score[i];
        sum = sum + score[i];
    }

    average = sum / 5; //Calculate the average

    double variance = 0;

    for (int i = 0; i < 5; i++) //Calculate the variance
    {
        variance += (score[i] - average) * (score[i] - average);
    }

    s_d = sqrt(variance / 5); //Calculate the standard deviation

    cout << fixed << setprecision(2);
    
    cout << "Average score is: " << average << endl;
    cout << "Standard deviation is: " << s_d << endl;

    inputFile.close(); //Close file

    ofstream outputFile("result.txt");
    outputFile << fixed << setprecision(2);
    outputFile << "Average score is: " << average << endl;
    outputFile << "Standard deviation is: " << s_d << endl;

    outputFile.close(); //Cloase file

    return 0;
}