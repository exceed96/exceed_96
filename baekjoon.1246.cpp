/*https://www.acmicpc.net/problem/1246*/
#include <iostream>
#include <algorithm>
#include <vector>
// ������ ������ ������������ �����Ͽ��� ������ �ϳ� �����Ͽ����� ��ü �� ���ؼ�
// ���� ��ü �� ���� ���ϴ� Ǯ��
// ���� �� ���� ����� ������ �մ��� �ο������� ������ �����Ƿ� 
// �ݺ��� �ȿ� ���ǹ��� �־ count�� N�� �� ��� break�ؾ� �Ѵ�.

using namespace std;

int main(void)
{
	int N, M, max = 0, index = 0;
	cin >> N >> M;
	vector <int> arr(M);
	for (int i = 0; i < M; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < M; i++)
	{
		int sum = 0;
		int count = 0;

		for (int j = 0; j < M; j++)
		{
			if (arr[i] <= arr[j])
			{
				sum += arr[i];
				count++;
				if (count == N) // �� �κ��� j�� ���� �� �������� ���� count�� �Ƚᵵ ������.
				{               // ������ �������� ������
					break;
				}
			}
		}
		if (max < sum)
		{
			max = sum;
			index = arr[i];
		}
	}

	cout << index << " " << max << "\n";
	return 0;
}