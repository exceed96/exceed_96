#include <iostream>
#include <stack> //���� ����

using namespace std;

stack <int> arr;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int K, sum = 0;
	cin >> K;
	while (K--)
	{
		int n;
		cin >> n;
		if (n)
		{
			arr.push(n);
			sum += n; //0�̾ƴ� �����Ͻ� arr���ÿ� n�� �߰� �ϰ� sum�� n ���ϱ�
		}
		else
		{
			sum -= arr.top(); // 0�Ͻ� arr���� ���������� �� ���� ���ֱ�
			arr.pop(); //������ ���� ����
		}
	}
	cout << sum << "\n";
	return 0;
}