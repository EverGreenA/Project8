#include <iostream>
using namespace std;
int main()
{
    int num;
    int star = 1;
    cout << "몇 줄을 입력하시겠습니까?";
    cin >> num;
    while (num != 0)
    {
        for (int i = 1; i < num; i++)
        {
            cout << ' ';

        }

        for (int j = 0; j < star; j++)
        {
            cout << " *";
        }
        cout << endl;
        star++;
        num--;
    }
}