#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
fstream plain_text;
fstream cipher_text;

void encrypt(char text[], int key)
{
    char ch;
    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            text[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            text[i] = ch;
        }
    }
    cipher_text.open("cipher_text.txt", ios::out);
    if (!cipher_text)
    {
        cout << "File not created!";
    }
    else
    {
        cout << "\n\nCipher Text added to the file\n\n";
        cipher_text << text;
        cipher_text.close();
    }
    cout << "the cipher text : " << text << endl;
}

void decrypt(string text, int key)
{
    char ch;
    for (int i = 0; i < text.length(); ++i)
    {
        ch = text[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            text[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if (ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            text[i] = ch;
        }
    }
    cout << text << endl;
}

int main()
{
    int c;
    int i, j, length, choice, key;
    char text[100];
    cout << "1.Want to choose from File \n2.Want to Enter the text\n";
    cin >> c;
    if (c == 1)
    {
        string str;
        cout << "\nCipher Text : \n";
        cipher_text.open("cipher_text.txt", ios::in);
        if (!cipher_text)
        {
            cout << "No such file";
        }
        else
        {
            char ch;
            while (1)
            {
                cipher_text >> ch;
                if (cipher_text.eof())
                    break;
                cout << ch;
            }
        }
        cipher_text.clear();
        cipher_text.seekg(0);
        cout << "\n\nEnter key: \n";
        cin >> key;
        while (getline(cipher_text, str))
        {
            decrypt(str.c_str(), key);
        }
        cipher_text.close();
    }
    else if (c == 2)
    {
        cout << "Enter the Text:\n";
        cin.ignore();
        cin.getline(text, 100);
        cout << "Enter key: \n";
        cin >> key;
        length = strlen(text);
        encrypt(text, key);
    }
}