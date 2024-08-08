#include <stdio.h>

int main()
{
	//逗号前是输出内容的最终样式，逗号后是填补的内容
	printf("%d", 1);
	printf("%f", 1.11);
	printf("%c", 'a');
	printf("%s", "你好");
	printf("兔子有%d只耳朵\n", 4);
	printf("我学校的名字为%s\n", "沈阳化工大学");
	printf("我高考的总分为%d\n",495);
	printf("兔子有%d只脚\n%d只耳朵\n身长%f米", 4, 2, 0.2);
	//换行符\r\n
	return 0;
}
