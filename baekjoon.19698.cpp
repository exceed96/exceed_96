/*https://www.acmicpc.net/problem/19698*/
#include <iostream>

using namespace std;

int main(void)
{
	int N, W, H, L;
	cin >> N >> W >> H >> L;

	int	result = (W / L) * (H / L); // �ִ�� ���� �ִ� ���� ��
	if (result < N) // �ִ�� �� ���� N���� ������� result ���
	{
		cout << result << "\n";
	}
	else // N�� �� Ŭ ��� N ���
	{
		cout << N << "\n";
	}
	return 0;
}