/*https://www.acmicpc.net/problem/10819*/
// ���Ʈ���� ����
// N�� ������ 3~8�� �ִ�� ���ü� �ִ� ������ 6���ۿ� �ȵǹǷ� ���Ʈ���� ���� ����
// next_permutation�� �̿��Ͽ� ������ �ϳ��� üũ�غ��� �ִ��� ã�´�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, result = 0;
	cin >> N;
	
	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	do
	{
		int sum = 0;
		for (int i = 0; i < N - 1; i++)
		{
			sum += abs(arr[i] - arr[i + 1]);
		}
		if (sum > result)
		{
			result = sum;
		}

	}while(next_permutation(arr.begin(), arr.end())); //������ ������ ������ �ݺ��� ����

	cout << result << "\n";
	return 0;
}