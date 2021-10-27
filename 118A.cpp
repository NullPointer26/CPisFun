#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i)=='a' || s.at(i)=='e' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='u' || s.at(i)=='y' || s.at(i)=='A' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='O' || s.at(i)=='U' || s.at(i)=='Y')
        {
            /* code */
            s.erase(s.begin()+i);
            i--;           
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (isupper(s.at(i)))
        {
            /* code */
            s.at(i)+=32;
        }
        
        cout<<"."<<s.at(i);
    }
    
    return 0;
}