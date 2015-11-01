#include <stdio.h>
//想要搞懂这个问题的同学私下来问我
int main()
{
	int i = 0;
	int j = 0;
	int index = 0;
	int nums[100][100];
	while (scanf("%d", &index) == 1) {	//输入层数
		for (i = 0; i < index; i++) {
			for (j = 0; j < index; j++) {
				nums[i][j] = 1;
			}
			for (j = 0; j < index - i - 1; j++) {
				printf(" ");
			}
			for (j = 0; j <= i; j++) {
				if (j == i) {
					//nums[i][j] = 1;
					printf(" %d\n", nums[i][j]);
				}
				else if (j == 0){
					printf(" %d", nums[i][j]);
				}
				else {
					nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
					printf(" %d",nums[i][j]);
				}
			}
		}
	}
    return 0;
}
