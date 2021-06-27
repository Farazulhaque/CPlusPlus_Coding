#include <iostream>
using namespace std;

class Patient //Base Class
{
public:
    char patient_name[100];

    int id;
    int dob;
    char sex[50];
    char address[100];
    string visited_location;
    char oversea[50];
    string covid_test;
    string status;

public:
    void accept_patient_details()
    {
        cout << "\n -------------------------------";
        cout << "\n Enter Patient Details";
        cout << "\n -------------------------------";
        cout << "\n Patient Name : ";
        cin >> patient_name;
        cout << "\n Patient Id : ";
        cin >> id;
        cout << "\n Patient Date Of Birth : "; //dont use dash in it
        cin >> dob;
        cout << "\n Adress : ";
        cin >> address;
        cout << "\n Visited Location : ";
        cin >> visited_location;
        cout << "\n Last Overseas : ";
        cin >> oversea;
        cout << "\n Covid Test : ";
        cin >> covid_test;
        cout << "\n Status : ";
        cin >> status;
    }
    void display_patient_details()
    {
        cout << "\n -------------------------------";
        cout << "\n Displaying Patient Details";
        cout << "\n -------------------------------";
        cout << "\n Patient Name : " << patient_name;
        cout << "\n Patient Id : " << id;
        cout << "\n Patient Date Of Birth : " << dob;
        cout << "\n Address : " << address;
        cout << "\n Visited Location : " << visited_location;
        cout << "\n Last Overseas : " << oversea;
        cout << "\n Covid Test : " << covid_test;
        cout << "\n Status : " << status;
    }
};

int main()
{
    Patient *patient;
    int i, count, option;
    cout << "\n Enter No. of Patient Details You Want: ";
    cin >> count;
    char visit[50];
    string newcovid;
    patient = new Patient[count];

    do
    {
        cout << "\n 1.Enter patient details\n 2.List of High Risk Zone \n 3.Symptoms Of Covid \n 4.Covid Patient details \n 5.Update New Patient \n 6.Quit"
             << endl;
        cout << "\n Please choose the option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            patient[0].accept_patient_details();
            break;
        case 2:
            cout << " High Risk Zone:-\n 1.Melbourn Central Shooping \n 2.The Royal Melbourn \n 3.The Central Vista"
                 << endl;
            break;
        case 3:
            cout << " Symptoms Of Covid\n 1.Dry Cough (Low Risk) \n 2.Diarrhea(Medium Risk) \n 3.Chest Pain(High Risk)"
                 << endl;
            break;
        case 4:
            cout << " Covid Patient Details" << endl;
            patient[0].display_patient_details();
            break;
        case 5:
            cout << " Please Update" << endl;
            cout << " Enter the visited location" << endl;
            cin >> visit;
            patient[0].visited_location = visit;

            cout << " Enter the Covid Test" << endl;
            cin >> newcovid;
            patient[0].covid_test = newcovid;
            break;
        case 6:
            cout << " Good Bye" << endl;
            break;

        default:
            cout << " Invalid option" << endl;
        }
    } while (option != 6);

    return 0;
}