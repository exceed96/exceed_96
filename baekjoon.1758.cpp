/*https://www.acmicpc.net/problem/1758*/
#include <iostream>
#include <algorithm>
#include <vector>
// �־��� ������ ������������ ����(�ִ����� �̵��� ������Ͽ�) �Ͽ��� 
// ����� ���� 0 �̻��ΰ��� sum�� �����ָ�
// ��ȣ�� ���� �� �ִ� �ִ� ���� ���� �� �ִ�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int N;
	long long sum = 0;
	cin >> N;
	vector <long long> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), greater <long long> ());

	for (int i = 0; i < N; i++)
	{
		long long n = arr[i] - i;
		if (n > 0)
		{
			sum += n;
		}
	}
	cout << sum << "\n";

	return 0;
}