/*https://www.acmicpc.net/problem/4299*/
#include <iostream>

using namespace std;

int main(void)
{
	int sum, min, a = 0;
	cin >> sum >> min;

	a = sum + min;

	if (a % 2 || sum < min) // �� ������ ���� Ȧ���̰ų� ���� �պ��� ũ�� -1 ���
	{
		cout << "-1" << "\n";
	}
	else // �հ� ���� ���� 2�� ������ ���� ��������, 2�� ���������� ���� ���ָ� ���� ������ ��
	{
		cout << a / 2 << " " << a / 2 - min << "\n";
	}
	return 0;
}