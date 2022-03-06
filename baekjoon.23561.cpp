/*https://www.acmicpc.net/problem/23561*/
// �������� �׸��� ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector <int> arr(3 * N); // 3N���� ���л����� ����
	for (int i = 0; i < 3 * N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end()); // ���л����� ���̸� ������������ ����

	if (N == 1) cout << 0 << "\n"; // ������ ���л��� ���� 3���� ��� ������ ������ �ּ�ȭ�� �Ȱ��� ������ ���°��̹Ƿ� 0�� ���
	else cout << arr[N * 2 - 1] - arr[N] << "\n"; // ������ ���л� ���� 3���� �Ѿ ��� �ּ�ȭ�� ������ ���̴� (2,3),(3,5),(4,7) �� ¦����������.
	return 0;
}