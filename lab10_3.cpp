//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    float x;

    ifstream source("score.txt");

    while (source >> x)
    {
        sum += x;
        sum_of_square += x * x;
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum / count << "\n";
    cout << "Standard deviation = "
        << sqrt((sum_of_square / count) -
                 (sum / count) * (sum / count));

    return 0;
}