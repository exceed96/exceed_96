/*https://www.acmicpc.net/problem/11943*/
#include <iostream>

using namespace std;

int main(void)
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	
	if (B + C > A + D) //���� �� ���� A + D, B + C 2���� ����߿� �ϳ��̹Ƿ� if���� ���ؼ� ������ �����.
	{
		cout << A + D << "\n";
	}
	else
	{
		cout << B + C << "\n";
	}

	return 0;
}