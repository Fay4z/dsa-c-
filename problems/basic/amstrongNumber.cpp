#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 1643, temp = num;
    int count = 0;
    int amstrongSum = 0;
    while (num > 0)
    {
        count = count + 1;
        num = num / 10;
    }
    num = temp;
    while (num > 0)
    {
        int lastdigit = num % 10;
        amstrongSum = amstrongSum + pow(lastdigit, count);
        num = num / 10;
    }

    if (temp == amstrongSum)
    {
        cout << "It is Amstrong" << endl;
    }
    else
    {
        cout << "It is not Amstrong" << endl;
    }
    cout << temp << " " << amstrongSum << endl;
    return 0;
}