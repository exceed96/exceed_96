/*https://www.acmicpc.net/problem/1297*/
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double D, H, W;
	cin >> D >> H >> W;

	double l = sqrt(D * D / (H * H + W * W)); // �־��� ������ ��Ÿ����� ������ �̿��ؼ� ����
	cout << int(l * H) << "\n"; // ���� ����
	cout << int(l * W) << "\n"; // �ʺ� ����
	return 0;
}