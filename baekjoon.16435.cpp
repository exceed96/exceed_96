/*https://www.acmicpc.net/problem/16435*/
#include <iostream>
#include <algorithm>
#include <vector>
//������ ���̸� ������������ �����Ͽ���
//������ũ ���尡 ���� �� �ִ� ���̸� �԰�
//�׷��� �������� �ݺ����� ����( ������������ �����ѰŶ� �� �̻� ������ ����.)

using namespace std;

int main(void)
{
	int N, L;
	cin >> N >> L;
	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < N; i++)
	{
		if (arr[i] <= L)
		{
			L++;
		}
		else
		{
			break;
		}
	}
	cout << L << "\n";
	return 0;
}