/*https://www.acmicpc.net/problem/2405*/
// Ž���� ����� �׸��� ����
// �������� b��� �ϰ� ������ ���� ���� a,b,c��� �Ѵٸ� ���ϰ��� �ϴ� ���� b - ((a+b+c)/3)�̴�.
// ���� ������Ű�� a - 2/b + c�̴�. �� ���� �ִ밡 �Ǵ°��� ã���� �ȴ�.
// �׷��� ���ؼ� Ž���� �ؾ��ϴµ� a�� c�� ���� ������Ű�� 2������ ��츦 �����ϸ�ȴ�.
// �׷��� ��ü ������ ���� �Ŀ� ���� �ִ밪�� ������ ������ ã�� �� �ִ�.
// a�� arr[0], c �� arr[n-1]������ �����ϸ� ���� ��ü���� 3���� ���� ��� ��츦 Ž���Ҽ��ִ�.
// �׸��� ���ٴ� ���Ʈ������ ����� ���� ���ٰ� �����Ѵ�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, result = 0;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 1; i < n - 1; i++)
	{
		result = max(result, abs(arr[0] - (arr[i] * 2) + arr[i + 1]));
	}
	for (int i = 0; i < n - 2; i++)
	{
		result = max(result, abs(arr[n - 1] + arr[i] - arr[i + 1] * 2));
	}
	cout << result << "\n";
	return 0;
}