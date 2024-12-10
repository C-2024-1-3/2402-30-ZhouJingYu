#include <iostream>
#include <cstring>
using namespace std;

int counts[26];
void count(const char s[], int counts[])
{
    for (int i = 0; i < strlen(s); i++) 
    {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch >= 'A' && ch <= 'Z') 
            {
                ch += 32; // 将大写字母转换为小写字母
            }
            counts[ch-'a']=counts[ch-'a']+1;
        }
    }
}
int main() {
    char s[1000];
    cout << "Enter a string:" << endl;
    cin >> s;
    count(s, counts);
    for (int i = 0;i < 26;i++) 
    {
        if (counts[i] == 0) { break; }
        else
        {
            char let='a'+i;
            cout << let << ":" << counts[i] << "" << "times" << endl;
        }

    }
}