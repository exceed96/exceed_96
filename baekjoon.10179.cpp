/*https://www.acmicpc.net/problem/10179*/
#include <iostream>

using namespace std;

int main(void)
{
	int T;
	double n;
	cin >> T;

	while (T--)
	{
		cin >> n;
		cout.precision(2); // �Ҽ��� 2�ڸ����� ǥ��
		cout << fixed << "$" << n * 0.8 << "\n"; // fixed�� ���Ͽ� �Ҽ����� �������� ǥ��
	}
	return 0;
}