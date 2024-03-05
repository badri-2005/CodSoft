#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout << "Enter the name of the text file: ";
    getline(cin, filename);

    ifstream file(filename);
    char ch;
    int count_word = 0; 

    if (!file.is_open()) 
    {
        cerr << "Unable to open file: " << filename << endl;
        return 1; 
    }

    while (file.get(ch))
    {
        if (!isspace(ch))
        {
            if (count_word == 0 || isspace(file.peek())) 
            {
                count_word++;
            }
        }
    }

    cout << "Number of Words in the Text File = " << count_word;

    return 0;
}
