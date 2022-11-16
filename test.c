#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int cnt;
void hanoi(int n, char a, char b, char c) {
	if (n == 0)
		return;
	hanoi(n - 1, a, c, b);//��n-1��������A����C�ƶ���B
	printf("step %d: move %d from %c->%c\n", cnt++, n, a, c);
	hanoi(n - 1, b, a, c);//ʣ�µ�n-1���ӣ���B����A�ƶ���C
}

int main() {
	int n;
	while (scanf("%d", &n)) {
		cnt = 1;
		hanoi(n, 'A', 'B', 'C');
	}
	return 0;
}





