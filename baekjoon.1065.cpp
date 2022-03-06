/*https://www.acmicpc.net/problem/1065*/
#include <iostream>

using namespace std;

int main(void)
{
	int X, arr[3] = {};
	cin >> X;

	if (X < 100)
	{
		cout << X; // 100�����δ� �� �Ѽ��̴�.
	}
	else // 100 ���� ���ڴ� �� �ڸ������� �迭�� �����ؼ� �Ѽ����� �ƴ��� if���� ���ؼ� �Ǻ�
	{
		int count = 99;
		for (int i = 100; i <= X; i++) 
		{
			arr[0] = i / 100;
			arr[1] = i / 10 % 10;
			arr[2] = i % 10;
			if (arr[2] - arr[1] == arr[1] - arr[0])
			{
				count++;
			}
		}
		cout << count << "\n";
	}

	return 0;
}