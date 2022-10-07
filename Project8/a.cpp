#include <iostream>
using namespace std;

int main()
{
	int a; //입력한 수의 도형 만들기

	cout << "원하는 수를 입력하세요." << endl;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = a; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "" << endl;
	}
}