/*https://www.acmicpc.net/problem/4641*/
#include <iostream>
using namespace std;

int main(void)
{
	while (1)
	{
		int arr[14] = {}, i = 0, count = 0;
		while (1)
		{
			cin >> arr[i];
			if (!arr[i] || arr[i] == -1) // 0�̰ų� -1�̸� ���ѷ��� ����
			{
				break;
			}
			i++;
		}
		if (arr[i] == -1) // -1�̸� ���ѷ��� ����
		{
			break;
		}

		for (int j = 0; j < i; j++)
		{
			for (int k = 0; k < i; k++)
			{
				if (2 * arr[j] == arr[k]) // ���߷����� ���ؼ� 2���μ� ã��
				{
					count++;
				}
			}
		}

		cout << count << "\n";
	}
	return 0;
}