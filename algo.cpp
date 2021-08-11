#include <iostream>
#include <string>
using namespace std;
void swap(string &a, string &b)
{
    string temp("");
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    string str1("");
    string str2("");
    cin >> str1;
    cin >> str2;
    swap(str1, str2);
    return 0;
}