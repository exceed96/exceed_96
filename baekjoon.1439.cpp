#include <iostream>
#include <cmath>
// 0 -> 1, 1 -> 0 �� ���ϴ� ������ ī��Ʈ�ϰ� 2�� �������ָ� �������ڷ� �ٲ��ִ� �ּ� Ƚ���� ���´�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	double count = 0;
	string S;
	cin >> S;

	for (int i = 1; i < S.length(); i++)
	{
		if (S[i - 1] != S[i]) //0 -> 1, 1 -> 0���� ���ϸ� count++
		{
			count++;
		}
	}

	cout << round(count / 2) << "\n"; // count�� / 2�� ���ְ� �ݿø��� ���ָ� ���� ���´�.

	return 0;
}