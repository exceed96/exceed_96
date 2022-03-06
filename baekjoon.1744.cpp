/*https://www.acmicpc.net/problem/1744*/
// �׸��� ����
// ���� �ִ밡 �ǰ� �ϴ� ���� 2�̻� ���, ����, 0, 1 4������ �з��ؼ� ����ؾ� �Ѵ�.
// 2�̻� ��������� ������������ �����Ͽ��� ������ ū�� * ū���� ���;��Ѵ�.
// ���� ����� ������ Ȧ���� ��쿡�� ���� 1���� �׳� �����ش�.
// ���������� ������������ �����Ͽ��� ���밪�� ū������ ��������Ѵ�.
// ���� ������ ������ Ȧ���� ��� 0�� �ִ��� �������� �Ǵ��Ͽ��� �������� ���Ͽ��� 0���� ����� �ƴҰ�쿡�� �׳� �����ش�.
// 1�� ������ �ִ� ������ŭ �����ִ°��� �ִ� ���� ���´�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> arr;
vector <int> arr_n;

int main(void)
{
	bool c = false;
	int N, z_count = 0, o_count = 0, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		if (n > 1)
		{
			arr.push_back(n);
		}
		else if (n == 1)
		{
			o_count++;
		}
		else if (!n)
		{
			c = true;
		}
		else
		{
			arr_n.push_back(n);
		}
	}
	sort(arr.begin(), arr.end(), greater<int>());
	sort(arr_n.begin(), arr_n.end());

	for (int i = 0; i < arr.size(); i += 2)
	{
		if (i + 1 == arr.size())
		{
			sum += arr[i];
			break;
		}
		sum += arr[i] * arr[i + 1];
	}

	for (int i = 0; i < arr_n.size(); i += 2)
	{
		if (i + 1 == arr_n.size())
		{
			if (!c)
			{
				sum += arr_n[i];
				break;
			}
			else
			{
				continue;
			}
		}
		sum += arr_n[i] * arr_n[i + 1];
	}
	cout << sum + o_count << "\n";
	return 0;
}