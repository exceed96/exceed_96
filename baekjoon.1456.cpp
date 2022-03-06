/*https://www.acmicpc.net/problem/1456*/
#include <iostream>
#include <vector>

using namespace std;

int MAX = 10000000;
int arr[10000001] = {};
vector <double> arr2;

void era() // �����佺�׳׽��� ü
{
	for (int i = 2; i <= MAX; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i * i <= MAX; i++)
	{
		if (!arr[i])
		{
			continue;
		}
		for (int j = i * i; j <= MAX; j += i)
		{
			arr[j] = 0;
		}
	}
	for (int i = 2; i <= MAX; i++) //���͸� �߰����� �ʰ� �ϴ°� ����Ʈ
	{
		if (arr[i])
		{
			arr2.push_back(i);
		}
	}
}

int main(void)
{
	long long A, B, count = 0;
	cin >> A >> B;

	for (int i = 0; i < arr2.size(); i++)
	{
		double n = arr2[i]; //�������� �ϱ� ���ؼ� ���� ���� ����
		while (arr2[i] < B)
		{
			arr2[i] *= n; // �������� ���
			if (A <= arr2[i] && arr2[i] <= B) // ����Ѱ��� ���� �ȿ� ���� count++
			{
				count++;
			}
		}
	}

	cout << count << "\n";
	return 0;
}