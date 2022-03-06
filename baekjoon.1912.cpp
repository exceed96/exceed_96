/*https://www.acmicpc.net/problem/1912*/
// dp����
// ���ӵ� �� ���� ���� ��å�ؼ� ���� �� �ִ� �� �� ���� ū ���� ���Ѵ�.
// �迭�� 0��° �ε����� �ʱⰪ���� ��� �������� ���Ͽ��� ���� ���� ū ���ӵ� ������ ã�´�.
// ���� i������ ���Ѱ��� i��°�� ������ ������쿡�� ���� �� �������� i��°�� �ٲ��ش�.(���� ū ���� �� �� ����.)
// result�� ���� ��� �����������ν� ���� ū ���� ����Ѵ�. 

#include <iostream>

using namespace std;

int arr[100001];
int arr2[100001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int result = arr2[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
		arr2[i] = max(arr[i], arr2[i - 1] + arr[i]); //arr[i]�� Ŭ��� ���� ū ���� �ɼ� �����Ƿ� i��° ���� �������� �ȴ�.
		cout << arr2[i] << " ";
		result = max(arr2[i], result);
	}

	cout << result << "\n";
	return 0;
}