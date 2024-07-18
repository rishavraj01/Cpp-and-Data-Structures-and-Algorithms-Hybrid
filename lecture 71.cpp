// Hash Tables PT-1
#include <iostream>
using namespace std;

int main()
{
    string text;
    text = "hi guys how are you doing today , did you get time to watch the new spiderverse film and i want to ffind the letter with mixmum freq in this sentence  ";
    
    int freq[26];
    int i;

    for(i=0;i<26;i++) freq[i]=0;

    for (i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            freq[text[i]-'a']++;
        }
    }

    char temp;
    int max;

    for(i=0,temp='a',max=0;i<26;i++)
    {
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i]<<endl;;
        temp++;

        if(freq[i]>max) max=freq[i];
    }

    cout<<endl<<endl<<"The letter with maximum frequency is "<<max;
    return 0;
}
