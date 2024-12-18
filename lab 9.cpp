
#include <iostream>
#include<cmath>
#include<iomanip>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int u;
    cin >> u;

    unsigned char* p = (unsigned char*)&u;

    cout << endl;
    for (int i = 0; i < sizeof(u); i++)
    {
        int uu = *(p + i);
        cout << hex << uu << " ";
    }

    return 0;
}
