#include<stdio.h>

int main(void) {
	//�����ٶིһЩ�й�ѭ���Ķ���
	//��continue��break�������Ƕ���������ѭ��
	//����������ѭ������ѭ����ʱ��break���������˳�����ѭ������continue������������ѭ��������ѭ�����ڲ�ִ��continue�����������䣬����һ��ѭ���������ִ�С�
	//����ж��ѭ��ʱ��breakֻ����������ѭ�������������������ѭ��
	//����1
	int i = 0;
	for (i = 0; i < 5; i++) {
		if (i == 2) {
			break;
			printf("****!\n");
		}
		printf("%d ", i);
	}
	printf("ѭ������\n");
	//��δ������������        0 1 ѭ������
	//����i==2���ж���֮��ִ��break��ֱ�ӽ����������ڵ����ڲ��forѭ��
	//����2
	int j = 0;
	for (j = 0; j < 5; j++) {
		if (j == 2) {
			continue;
			printf("*****\n");
		}
		printf("%d ", j);
	}
	printf("ѭ������");
	//��δ������������       0 1 3 4 ѭ������
	//����i==2���ж���֮��ִ��continue��ֱ�ӽ����˱���ѭ����continue��������ݶ�û��ִ�У�����ֱ��ִ������һ��ѭ��
	//����3
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
	//��δ������������
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
	//breakֻ�����������ڲ�ѭ��

	//��ѭ������һ�����ڲ�֪��ʲôʱ����ֹ��ĳ�������������ֻ֪����ֹ���ж�����
	while (1) {
		//ѭ������
		//�ﵽĿ��֮��ʹ��break����ѭ������return������������
		break;
	}
	for (int i = 0;; i++) {
		//ѭ������
		//�ﵽĿ��֮��ʹ��break����ѭ������return������������
		break;
	}

	//switch��䡪�������ص㣬�˽⼴�ɣ��京�����һ�������ж��ȡֵ������ÿ��ȡֵ����ͬ�Ĳ���
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
	default:printf("error\n");//������涼����������ִ��default
	}
	//case��ĳ������ʽ������ͬ��

	//case����������ж���Ҳ��û�������������

	//case��default�Ӿ���Ⱥ�˳������Ⱥ�䶯��default�Ӿ����ʡ�Բ��ã�

	//switch��䲻����ִ���ж�Ϊ�������֮������ѭ�������Ǽ���ִ�к�������case��䡣
	//��ÿһcase���֮������break ��䣬ʹÿһ��ִ��֮���������switch��䣬�Ӷ����������Ӧ�еĽ����

	//�����ֻ��case1�����breakȥ��������1���������� Monday \n Tuesday
}