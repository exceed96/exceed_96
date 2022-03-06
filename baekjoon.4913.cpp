/*https://www.acmicpc.net/problem/4913*/
#include <iostream>
#include <vector>

using namespace std;

int number = 1000000;
bool arr[1000001] = { false, };
vector <int> arr2;

void era() //�����佺�׳׽��� ü
{
	for (int i = 2; i * i <= number; i++)
	{
		if (!arr[i])
		{
			for (int j = i * i; j <= number; j += i)
			{
				arr[j] = 1;
			}
		}
	}
	for (int i = 2; i <= number; i++)
	{
		if (!arr[i])
		{
			arr2.push_back(i);
		}
	}
}

int main(void)
{
	era();
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (1)
	{
		int L, U, count = 0, count2 = 0;
		
		
		cin >> L >> U;
		
		if (L == -1 && U == -1) // L�� U�� -1�϶� ���ѷ��� ����
		{
			break;
		}

		for (int i = 0; i < arr2.size(); i++)
		{
			if (L <= arr2[i] && arr2[i] <= U) // �����ȿ� �Ҽ��� ������ count++
			{
				count++;
				if (arr2[i] % 4 == 1 || arr2[i] == 2) // �Ҽ��� 4�� ������ �������� 1�Ͻ� �������� ������ ��Ÿ���� �ִ�.
				{                                     // �ٸ� 2�Ͻÿ��� 1�� ���� �ΰ��� ������ ��Ÿ�����־ ���� ������ ����
					count2++;
				}
			}
			if (arr2[i] > U) // �Ҽ��迭�� U�� �Ѿ�� �ݺ��� ����
			{
				break;
			}
		}

		cout << L << " " << U << " " << count << " " << count2 << "\n";
	}
	return 0;
}