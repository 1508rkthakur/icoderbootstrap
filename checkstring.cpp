#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
bool isPermutation(char input1[], char input2[])
{
    int c = 1;
    for (int i = 0; i < 4; i++)
    {
        //cout<<"10";
        for (int j = 0; j < 4; j++)
        {
           // cout<<"12";
            if (input1[i] == input2[j])
            {
                c =i+1;
                break;
            }
        }
    }
    if (c == 4)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    int size = 4;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << isPermutation(str1, str2);
    return 0;
}