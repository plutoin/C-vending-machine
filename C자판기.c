#include<stdio.h>
void init(int menuCount[6][3])	// �޴� ���� �ֱ�
{
	printf("������������������������������������\n");
	printf("��������  VENDING  MACHINE  ��������\n");
	printf("������������������������������������\n");
	printf("************** M E N U *************\n");
	printf("����1��  :  ��      ��  [700��]\n    ��� : %d��\n", menuCount[0][1]);
	printf("��  2��  :  ��  ��  ��  [700��]\n    ��� : %d��\n", menuCount[1][1]);
	printf("��  3��  :  �Ŀ����̵�  [900��]\n    ��� : %d��\n", menuCount[2][1]);
	printf("��  4��  :  ��  ī  ��  [400��]\n    ��� : %d��\n", menuCount[3][1]);
	printf("��  5��  :  �������ֽ�  [1200��]\n    ��� : %d��\n", menuCount[4][1]);
	printf("��  6��  :  ��  ��  ��  [1000��]\n    ��� : %d��\n", menuCount[5][1]);
	printf("************************************\n");
	printf("��  7�� <A> Enter ���Ǳ� �ʱ�ȭ \n");
	printf("��  8�� <B> �Ǹ� ���� ��Ȳ \n");
	printf("************************************\n");
}
int main(void)
{
	int menuCount[6][3] = { { 700,5,0 },{ 700,10,0 },{ 900,5,0 },{ 400,20,0 },{ 1200,1,0 },{ 1000,30,0 } };		// �Ǹ� �ݾ�, ���
	int menu = 0, money = 0, total = 0, sales = 0;	// �޴�, ���� �ݾ�, ���� ���� �ݾ�, �� ����
	char ch_exit;

	init(menuCount);

	do {
		printf("\n�� ���� ���� �ݾ�: %d��\n", total);
		printf("\n�� �޴� ��ȣ�� ������ �ּ���!  >>  ");
		scanf_s("%d", &menu);

		if (menu != 7 && menu != 8) {
			printf("\n�� �ݾ��� �־� �ּ���!  >>  ");
			scanf_s("%d", &money);
			total += money;	// �ܵ��� ���� ���·� �߰� ������ �� ��� �ܵ� ����
			printf("\n�� ���� ���� �ݾ�: %d��\n", total);
		}


		if (menu == 1) {
			if (menuCount[0][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 700 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 700;
			printf("\n�� ���� ����: �ݶ�\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[0][1]--;	// ��� ����
			menuCount[0][2]++;	// �Ǹŷ� ����
		}
		else if (menu == 2) {
			if (menuCount[1][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 700 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 700;
			printf("\n�� ���� ����: ���̴�\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[1][1]--;
			menuCount[1][2]++;
		}
		else if (menu == 3) {
			if (menuCount[2][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 900 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 900;
			printf("\n�� ���� ����: �Ŀ����̵�\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[2][1]--;
			menuCount[2][2]++;
		}
		else if (menu == 4) {
			if (menuCount[3][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 400 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 400;
			printf("\n�� ���� ����: ��ī��\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[3][1]--;
			menuCount[3][2]++;
		}
		else if (menu == 5) {
			if (menuCount[4][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 1200 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 1200;
			printf("\n�� ���� ����: �������ֽ�\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[4][1]--;
			menuCount[4][2]++;
		}
		else if (menu == 6) {
			if (menuCount[5][1] <= 0) {
				printf("\n�� ��� �����ϴ�!\n");
				break;
			}
			while (total - 1000 <0) {
				printf("\n�� �ݾ��� �����մϴ�. \n");
				printf("\n�� �߰� �ݾ��� �־� �ּ���!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n�� ���� ���� �ݾ�: %d��\n", total);
			}
			total -= 1000;
			printf("\n�� ���� ����: ��ټ�\n");
			printf("�� �ܾ�: %d��\n", total);
			menuCount[5][1]--;
			menuCount[5][2]++;
		}
		else if (menu == 7) {	// ���Ǳ� (���) �ʱ�ȭ
			menuCount[0][1] = 5;
			menuCount[1][1] = 10;
			menuCount[2][1] = 5;
			menuCount[3][1] = 20;
			menuCount[4][1] = 1;
			menuCount[5][1] = 30;
			printf("\n�� ���Ǳ� �ʱ�ȭ�� �Ϸ�Ǿ����ϴ�.\n");
		}
		else if (menu == 8) {	// �Ǹ� ���� ��Ȳ (�Ǹŷ�, �Ǹž�)
			sales = menuCount[0][2] * 700 + menuCount[1][2] * 700 + menuCount[2][2] * 900 + menuCount[3][2] * 400 + menuCount[4][2] * 1200 + menuCount[5][2] * 1000;
			printf("\n************************************\n");
			printf("���� ���� ��Ȳ Ȯ�� ����\n");
			printf("\n  - ��      ��: %d�� (%d��)\n", menuCount[0][2], menuCount[0][2] * 700);
			printf("  - ��  ��  �� : %d�� (%d��)\n", menuCount[1][2], menuCount[1][2] * 700);
			printf("  - �Ŀ����̵� : %d�� (%d��)\n", menuCount[2][2], menuCount[2][2] * 900);
			printf("  - ��  ī  �� : %d�� (%d��)\n", menuCount[3][2], menuCount[3][2] * 400);
			printf("  - �������ֽ� : %d�� (%d��)\n", menuCount[4][2], menuCount[4][2] * 1200);
			printf("  - ��  ��  �� : %d�� (%d��)\n", menuCount[5][2], menuCount[5][2] * 1000);
			printf("\n�� �� �Ǹž� : %d��\n", sales);
			printf("************************************\n");
		}
		else if (menu <= 0 || menu > 8) {	// �־��� ��ȣ ���� ���� �Է��� ��
			printf("\n�� �޴� ������ ������ �ּ���!\n");
		}
		printf("\n�� ���α׷��� �����Ͻðڽ��ϱ�? \n   Y/y ���� ��� ����  >>  ");
		scanf_s(" %c", &ch_exit, sizeof(char));
		if (ch_exit == 'y' || ch_exit == 'Y') {
			break;
		}
		else {
			puts("");
			init(menuCount);
		}
	} while (1);

	printf("\n�� �ܾ� %d���� ��ȯ�Ǿ����ϴ�.\n", total);
	printf("\n�� �̿��� �ּż� �����մϴ� ��\n");
	puts("");
	return 0;
}