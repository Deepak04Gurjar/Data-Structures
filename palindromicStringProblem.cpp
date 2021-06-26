#include<iostream>
#include<cstring>
using namespace std;
bool palindrom(char a[100])
{
    int i=0;
    int j=strlen(a)-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char a[100];
    cin>>a;
    if(palindrom(a))
    {
        cout<<"given string is palindromic"<<endl;
    }
    else
    {
        cout<<"Not palindromic"<<endl;
    }
    return 0;
}