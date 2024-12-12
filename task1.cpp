#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, str;
    cin >> s1 >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    str = s1 + s2;
    cout << str << endl;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;

    return 0;
}