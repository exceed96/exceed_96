/*https://www.acmicpc.net/problem/9325*/
#include <iostream>

using namespace std;

int main(void)
{
	int T; //�׽�Ʈ����
	cin >> T;
	while (T--)
	{
		int s,n,o,o2, sum = 0; // s = �ڵ�������, n = �ɼ��� ����, o = Ư���ɼ� ����, o2 = Ư���ɼ��� ����
		cin >> s >> n;
		sum += s;
		for (int i = 0; i < n; i++)
		{
			cin >> o >>o2;
			sum += o * o2;
		}
		cout << sum << "\n";
	}
	
	return 0;
}