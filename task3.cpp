#include <iostream>

using namespace std;

int main()
{
    int grade[6];
    string name;
    cout << "\nStudent Grading System \n";
    cout << "Enter Student Name = ";
    getline(cin, name);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Grade of Subject " << i + 1 << " = ";
        cin >> grade[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        sum += grade[i];
    }

    float avg = sum / 5.0;
    cout << "\nStudent Name: " << name;
    cout << "\nAverage Grade of the Student: " << avg;

    int max = grade[0];
    int min = grade[0]; 

    for (int i = 1; i < 5; i++) 
    {
        if (grade[i] > max)
        {
            max = grade[i];
        }
        if (grade[i] < min)
        {
            min = grade[i];
        }
    }

    cout << "\nHighest Grade of the Student: "<< max;
    cout << "\nLowest Grade of the Student: "<< min;

    return 0;
}
