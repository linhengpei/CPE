#include <bits/stdc++.h>
using namespace std;

vector<string> str_stack;
string str;
string word = "";
int pos = 0;

void print_word()
{
    str_stack.push_back(word);
    cout << word;
    word = "";
}

void print_pos()
{
    string temp = str_stack[str_stack.size() - pos];

    cout << temp;

    if (pos != 1)
    {
        for (int i = str_stack.size() - pos; i < str_stack.size() - 1; i++) // delete word
            str_stack[i] = str_stack[i + 1];

        str_stack[str_stack.size() - 1] = temp; // move to tail
    }
    /*
    cout << endl;
    for (int i = 0; i < str_stack.size(); i++) // delete word
        cout << str_stack[i] << " ";
    */
    pos = 0;
}

int main()
{
    while (getline(cin, str))
    {
        if (str == "0")
            break;

        str += "\n";
        for (int i = 0; i < str.length(); i++)
        {

            if (isalpha(str[i]))
                word += str[i];
            else if (isdigit(str[i]))
            {
                pos *= 10;
                pos += str[i] - '0';
            }
            else
            {
                if (word != "")
                    print_word();
                else if (pos != 0)
                    print_pos();

                cout << str[i];
            }
        }
    }
    return 0;
}