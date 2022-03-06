/*https://www.acmicpc.net/problem/11659*/
// dp, �����չ���
// ���߷����� ������� �ð����⵵�� O(MN)�̹Ƿ� ���ѵ� �ð��� �Ѿ�Եȴ�.
// �׷��� �Է��� ������ ������ ���� arr2�� ���������ν� �ð����⵵�� O(N)���� ���ϼ� �ִ�.
#include <iostream>
#include <vector>
using namespace std;

int arr2[100001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, M;
	cin >> N >> M;

	vector <int> arr(N + 1);

	arr.push_back(0); //�Է¹޴� �迭�տ� 0�� �ִ´�(������ �����ϱ� ���Ͽ�)
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		arr2[i] = arr2[i - 1] + arr[i]; // ���� �� �迭�� 5,4,3,2,1�̶�� �ϸ� ������ �迭���� 5,9,12,14,15�� ����.
	}

	while (M--)
	{
		int i, j;
		cin >> i >> j;
		cout << arr2[j] - arr2[i - 1] << "\n";
	}

	return 0;
}