#include <iostream>
using namespace std;
int main()
{
    int num;
    int star = 1;
    cout << "�� ���� �Է��Ͻðڽ��ϱ�?";
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
        star++;
        num--;
        cout << endl;

    }
    while (star != 0)
    {

        for (int i = 0; i <= num; i++)
        {
            cout << ' ';

        }

        for (int j = 0; j < star - 2; j++)
        {
            cout << " *";
        }
        star--;
        num++;
        cout << endl;
    }
}