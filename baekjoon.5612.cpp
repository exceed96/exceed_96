/*https://www.acmicpc.net/problem/5612*/
#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int n, m, max = 0;
	cin >> n >> m; // �ð��� �ʱ� ������ �� �Է�
	max = m;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		m = m + a - b;
		if (m < 0) // �ͳξ��� ������ ������ �ȴٸ� 0�� ����ϰ� ����
		{
			cout << "0" << "\n";
			return 0;
		}
		if (max < m) // �ͳξ��� ������ max������ Ŭ��� max�� m ����
		{
			max = m;
		}
	}
	cout << max << "\n"; // ���� �������� max�� ���
	return 0;
}