/*https://www.acmicpc.net/problem/4796*/
#include <iostream>

using namespace std;

int main(void)
{
	int count = 1;

	while (1)
	{
		int L, P, V;
		cin >> L >> P >> V;
		if (!L && !P && !V) // �� �� 0�϶� ���ѷ��� ����
		{
			break;
		}
		// V/P*L,  L�� V % P�߿� �������� ���ϸ� �̿��ϴ� ���� �ִ볯�� ���´�. 
		cout << "Case " << count << ": " << (V / P * L) + min(L, V % P) << "\n";
		count++;
	}
	return 0;
}