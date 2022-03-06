/*https://www.acmicpc.net/problem/1449*/
#include <iostream>
#include <vector>
#include <algorithm>
// �Է¹��� ���� 1���� �������� �ٿ����� ���� Ȯ�� ������ ������ ��� �ϳ��� �����Ͽ��� Ǯ��
using namespace std;

int arr2[1001];

int main(void)
{
	int N, L, count = 0;
	cin >> N >> L;
	vector <int> arr(N); 
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for(int i = 0; i < N; i++)
	{
		if (!arr2[arr[i]]) // arr2�� ����� 1�ϰ�� �������� �ٿ��� ���̴�. 
		{
			for (int j = arr[i]; j < min(arr[i] + L, 1001); j++)
			// arr[i]���� arr[i] + L������ �Ÿ���ŭ �������� �ٿ����Ƿ� �� ������ 1�� �ʱ�ȭ�Ѵ�.
			// �ݺ����� �����Ұ�� �ٿ��� ���� ���� ���ǹ��� ���ؼ� PASS �ϰ� �Ⱥٿ��� ������ ã�Ƴ���
			{
				arr2[j] = 1;
			}
			count++; // �ٿ����� COUNT++
		}
	}
	cout << count << "\n";
	return 0;
}