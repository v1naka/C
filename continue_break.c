#include<stdio.h>

int main(void) {
	//这里再多讲一些有关循环的东西
	//①continue和break——他们都用于跳出循环
	//当它们用在循环语句的循环体时，break用于立即退出本层循环，而continue仅仅结束本次循环，本次循环体内不执行continue语句后的其它语句，但下一次循环还会继续执行。
	//如果有多层循环时，break只会跳出本层循环，不会跳出其他层的循环
	//例子1
	int i = 0;
	for (i = 0; i < 5; i++) {
		if (i == 2) {
			break;
			printf("****!\n");
		}
		printf("%d ", i);
	}
	printf("循环结束\n");
	//这段代码的输出结果是        0 1 循环结束
	//进入i==2的判断体之后执行break，直接结束了其所在的最内层的for循环
	//例子2
	int j = 0;
	for (j = 0; j < 5; j++) {
		if (j == 2) {
			continue;
			printf("*****\n");
		}
		printf("%d ", j);
	}
	printf("循环结束");
	//这段代码的输出结果是       0 1 3 4 循环结束
	//进入i==2的判断体之后执行continue，直接结束了本次循环，continue后面的内容都没有执行，而是直接执行了下一次循环
	//例子3
	int s = 0;
	int t = 0;
	for (s = 0; s < 5; s++) {
		for (t = 0; t < 5; t++) {
			if (t == 2) {
				break;
			}
			printf("Hello: %d\n", t);
		}
		printf("World: %d\n", s);
	}
	//这段代码的输出结果是
	//Hello : 0
	//Hello : 1
	//World : 0
	//Hello : 0
	//Hello : 1
	//World : 1
	//Hello : 0
	//Hello : 1
	//World : 2
	//Hello : 0
	//Hello : 1
	//World : 3
	//Hello : 0
	//Hello : 1
	//World : 4
	//break只用于跳出最内层循环

	//死循环——一般用于不知道什么时候终止（某个具体的数），只知道终止的判断条件
	while (1) {
		//循环内容
		//达到目标之后使用break跳出循环或者return结束整个程序
		break;
	}
	for (int i = 0;; i++) {
		//循环内容
		//达到目标之后使用break跳出循环或者return结束整个程序
		break;
	}

	//switch语句——不作重点，了解即可，其含义就是一个变量有多个取值，对于每个取值做不同的操作
	int a;
	printf("input integer number: ");
	scanf_s("%d", &a);
	switch (a) {
	case 1:printf("Monday\n"); break;
	case 2:printf("Tuesday\n"); break;
	case 3:printf("Wednesday\n"); break;
	case 4:printf("Thursday\n"); break;
	case 5:printf("Friday\n"); break;
	case 6:printf("Saturday\n"); break;
	case 7:printf("Sunday\n"); break;
	default:printf("error\n");//如果上面都不成立，就执行default
	}
	//case后的常量表达式不能相同；

	//case后的语句可以有多个且不用花括号括起来；

	//case和default子句的先后顺序可以先后变动，default子句可以省略不用；

	//switch语句不会在执行判断为真后的语句之后跳出循环，而是继续执行后面所有case语句。
	//在每一case语句之后增加break 语句，使每一次执行之后均可跳出switch语句，从而避免输出不应有的结果。

	//如果我只将case1后面的break去掉，输入1，输出结果是 Monday \n Tuesday
}