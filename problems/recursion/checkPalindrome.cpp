#include <iostream>

using namespace std;

bool checkPlaindrome(string str, int start, int end)
{
    if (start < end)
    {
        if (str[start] != str[end])
            return false;
        else
            checkPlaindrome(str, start + 1, end - 1);
    }

    return true;
}

int hello()
{
    return 20;
}
int main()
{
    string s = "racecar";
    cout << &hello << endl;
    cout << checkPlaindrome(s, 0, s.size() - 1);
    return 0;
}