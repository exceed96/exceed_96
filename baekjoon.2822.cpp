/*https://www.acmicpc.net/problem/2822*/
#include <iostream>
#include <algorithm>
// �� ���� �迭�� �ʱ�ȭ �ؼ� ����
using namespace std;

int main(void)
{
	int sum = 0;
	int arr[8] = { 0 };
	int arr2[8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];
	}

	sort(arr, arr + 8); //������������ ����
	for (int i = 3; i < 8; i++) 
	{
		sum += arr[i]; // 8�� �����߿� ���� ���� ���� 5���� sum���ٰ� ����
	}

	cout << sum << "\n";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 3; j < 8; j++) // ���� ��������� arr2�� arr1�� ���Ͽ��� index�� ���
		{
			if (arr2[i] == arr[j])
			{
				cout << i+1 << " ";
			}
		}
	}
	return 0;
}