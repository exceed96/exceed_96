/*https://www.acmicpc.net/problem/10768*/
#include <iostream>

using namespace std;

int main(void)
{
	int M, D;
	cin >> M >> D;
	
	if (M > 2) // 2�� ���Ŀ��� After
	{
		cout << "After" << "\n";
	}
	else if(M < 2) // 2�� ������ Befor
	{
		cout << "Before" << "\n";
	}
	else // 2���϶� �ϼ��� ������ After, Before, Special ����
	{
		if (D > 18)
		{
			cout << "After" << "\n";
		}
		else if (D < 18)
		{
			cout << "Before" << "\n";
		}
		else
		{
			cout << "Special" << "\n";
		}
	}
	return 0;
}