#include <bits/stdc++.h>
using namespace std;

int main()
{
    // filestream variable file
    fstream file;
    string word, t, q, filename, searchWord, replacehWord;
    int choice;

    cout << " ------------------------------------------------" << endl;
    cout << "/                                               /" << endl;
    cout << "/ 1. Search a text                              /" << endl;
    cout << "/ 2. Search and replace a text                  /" << endl;
    cout << "/ 3. Determines the number of words             /" << endl;
    cout << "/ 4. Determines the number of characters        /" << endl;
    cout << "/ 5. Exit                                       /" << endl;
    cout << "/                                               /" << endl;
    cout << " ------------------------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    // filename of the file
    filename = "input_file.txt";

    // opening file
    file.open(filename.c_str());

    if (choice == 1)
    {
        int times = 0;
        cout << "Enter word to search: ";
        cin >> searchWord;
        // extracting words from the file
        while (file >> word)
        {
            if (searchWord == word)
            {
                times++;
            }
        }
        cout << "The matching words are found " << times << " times";
    }
    else if (choice == 2)
    {
        int times = 0;
        cout << "Enter word to replace: ";
        cin >> replacehWord;
        // extracting words from the file
        while (file >> word)
        {
            if (replacehWord == word)
            {
                times++;
            }
        }
        cout << "The matching words are found " << times << " times";
    }
    else if (choice == 3)
    {
        int noOfWords = 0;
        // extracting words from the file
        while (file >> word)
        {
            noOfWords++;
        }
        cout << "The total number of words are  " << noOfWords;
    }
    else if (choice == 4)
    {
        ifstream fin("input_file.txt");
        char ch;
        int i, c = 0;
        while (fin)
        {
            fin.get(ch);
            i = ch;
            if ((i > 63 && i < 91) || (i > 96 && i < 123) || ch == ' ')
                c++;
        }
        cout << "No. of Characters in a File : " << c;
    }
    else if (choice == 5)
    {
        cout << "Exiting...";
        exit(0);
    }
    return 0;
}
