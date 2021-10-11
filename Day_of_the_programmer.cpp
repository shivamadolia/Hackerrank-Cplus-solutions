Problem Link :
/* https://www.hackerrank.com/challenges/day-of-the-programmer/problem */


Solution :

#include<iostream>
#include<string>
using namespace std;
string dayOfProgrammer(int y)
{
    int flag=0;
    string m="12.09.";
    string t="13.09.";
    if(y%4==0 && y<=1917)
    flag=1;
    else if(y%4==0 && y%100!=0 && y>=1919)
    {
    flag=1;
    }
    else if(y%400==0 && y>=1919)
    {
    flag=1;
    }
    string c;
    if(y==1918)
    {
     c=to_string(y);
     string x="26.09.";
     x.append(c);
     return x;
    }
    else if(flag==1)
    {
    c=to_string(y);
    m.append(c);
    return m;
    }
    else
    {
    c=to_string(y);
    t.append(c);
    return t;
    }
}
int main()
{
    int y;
    cin>>y;
    cout<<dayOfProgrammer(y);
    return 0;
}


