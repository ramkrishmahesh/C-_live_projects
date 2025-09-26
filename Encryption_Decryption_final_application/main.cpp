#include <iostream>
#include <string.h>
using namespace std;

string vigenerre(string text, string key, bool EncDec);

int main()
{
    int input_option;
    char option;
    string plain_text;
    string cipher_text;
    string key;

    do
    {
        cout << "Welcome to the Encryption/ Decryption station" <<endl;
        cout << "Please choose one of the options from the following" <<endl;
        cout <<"1.Encryption" <<endl;
        cout << "2. Decryption" <<endl;
        cout << "3. Exit" <<endl;

        cin >>input_option;

        switch(input_option)
        {
            case 1:
                cout << "Please enter a plain text : ";
                cin >> plain_text;
                
                cout << "Please enter a key: ";
                cin >> key;
                
                // function call
                cipher_text = vigenerre(plain_text, key, 0);
                cout <<"Cipher text is : " << cipher_text <<endl;

                cout << "Please enter Y or y to continue and any other key to exit : ";
                cin >> option;
                break;
            
            case 2:
                cout << "Please enter a plain text : ";
                cin >> plain_text;
                cout << "Please enter a key: ";
                cin >> key;
                cipher_text = vigenerre(plain_text, key, 1);
                cout <<"Cipher text is : " << cipher_text <<endl;
                
                cout << "Please enter Y or y to continue and any other key to exit : ";
                cin >> option;

                break;
            case 3:
                option = 'n';
                break;
            default:
                cout << "Invalid choice" <<endl;
                break;
        }
    } while (option == 'Y' || option == 'y');

    return 0;
}

    string vigenerre(string text, string key, bool EncDec)
    {
        string newkey = key, newText;
        
        while(newkey.length() < text.length())
        {
            newkey = newkey + key;
        }

        if (EncDec == 0)
        {
            // we will do encyrption here

            for (int i = 0; i < text.length(); i++)
            {
                newText +=(newkey[i]+ text[i])%26 + 65;
            }
        }
        else
        {
            // we will do decryption here

            for (int i = 0; i < text.length(); i++)
            {
                newText +=(newkey[i]- text[i] + 26)%26 + 65;
            }
        }

        return newText;
        
    }
