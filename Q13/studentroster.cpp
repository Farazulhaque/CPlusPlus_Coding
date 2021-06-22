#include <iostream>

#include <vector>

#include <iomanip>

using namespace std;

int main()
{
    vector<string> names;
    vector<double> grades;
    cout << "Welcome to the student roster!";
    string first_name;
    string last_name;
    string full_name;
    double grade;
    int num;
    cout << "\nHow many students are in your class?:";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "\nPlease enter student (First Last Grade) info:";
        cin >> first_name >> last_name >> grade;
        full_name = first_name + " " + last_name;
        names.push_back(full_name);
        grades.push_back(grade);
    }

    bool loop = true;
    cout << "\nPlease choose one of the following options:\na: add a student\nr: remove a student\np: print the class summary\nm: print menu\nq: quit program\n";

    while (loop)
    {
        char choice;
        cout << "selection:";
        cin >> choice;
        switch (choice)
        {
        case 'a':
        {
            cout << "\nPlease enter student (First Last Grade) info:";
            cin >> first_name >> last_name >> grade;
            full_name = first_name + " " + last_name;
            names.push_back(full_name);
            grades.push_back(grade);
            break;
        }
        case 'r':
        {
            cout << "\nPlease enter students first and last name:" << endl;
            cin >> first_name >> last_name;
            full_name = first_name + " " + last_name;
            cout << "Removing " + full_name;
            auto j = grades.begin();
            for (auto i = names.begin(); i != names.end(); i++, j++)
            {
                if (*i == full_name)
                {
                    names.erase(i);
                    grades.erase(j);
                    break;
                }
            }

            break;
        }
        case 'p':
        {
            double average = 0.0;
            cout << "\nClass Summary" << endl;
            cout << "------------------------" << endl;
            cout << left << setw(20) << "Name";
            cout << right << setw(10) << fixed << "Grade" << endl;
            cout << left << setw(20) << "--------------";
            cout << right << setw(13) << "--------" << endl;

            for (int i = 0; i < names.size(); i++)
            {
                cout << left << setw(20) << names.at(i);
                cout << right << setw(10) << fixed << setprecision(2) << grades.at(i) << endl;
                average += grades.at(i);
            }
            average = average / names.size();
            cout << "Number of Students:\n";
            cout << "-------------------\n";
            cout << names.size() << endl;

            cout << "Average Grade:\n";
            cout << "--------------\n";
            cout << average << endl;

            break;
        }
        case 'm':
        {
            cout << "\nPlease choose one of the following options:\na: add a Student\nr: remove a Student\np: print the class summary\nm: print menu\nq: quit program\n";

            break;
        }
        case 'q':
        {
            loop = false;
            break;
        }
        default:
            cout << "Not a valid selection\n";
        }
    }
    return 0;
}