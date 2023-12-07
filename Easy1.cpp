#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int lastwordlenght(const string &s)
{
    string last_word;
    istringstream iss(s);
    while(iss>>last_word)
    {

    }
    return last_word.length();

}
int main()
{
string input ;
cout <<"enter the string";
getline(cin,input);
cout<<"lenght of the last word is "<<lastwordlenght(input)<<endl;
return 0;
}
