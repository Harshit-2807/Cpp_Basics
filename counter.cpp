#include <iostream>
using namespace std;

int main()
{
    string str, str1="",str2;
    getline(cin, str);
    
    if(str[(str.length()-1)]!='$')
    {
        while(str[(str.length()-1)!='$'])
        {
            str1+="\n"+str;
            getline(cin, str);
            if(str[(str.length()-1)]=='$')
            {
                str1+="\n"+str;
                break;
            }
        }
    }
    else
        str1="\n"+str;
    
    int a=0, n=0, w=0, i;
    for(i=1;i<str1.length();i++)
    {
        char s=str1[i];
        if((s>='a' and s<='z') or (s>='A' and s<='Z'))
            a+=1;
        if(s>='0' and s<='9')
            n+=1;
        if(s==' ' or s=='\n' or s=='\t')
            w+=1;
    }
    cout << a << " " << n << " " << w;
    return 0;
}