#include<stdio.h>
void init(int menuCount[6][3])	// 메뉴 보여 주기
{
	printf("♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤\n");
	printf("♤♤♤♤  VENDING  MACHINE  ♤♤♤♤\n");
	printf("♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤\n");
	printf("************** M E N U *************\n");
	printf("▷　1번  :  콜      라  [700원]\n    재고 : %d개\n", menuCount[0][1]);
	printf("▷  2번  :  사  이  다  [700원]\n    재고 : %d개\n", menuCount[1][1]);
	printf("▷  3번  :  파워에이드  [900원]\n    재고 : %d개\n", menuCount[2][1]);
	printf("▷  4번  :  박  카  스  [400원]\n    재고 : %d개\n", menuCount[3][1]);
	printf("▷  5번  :  오렌지주스  [1200원]\n    재고 : %d개\n", menuCount[4][1]);
	printf("▷  6번  :  삼  다  수  [1000원]\n    재고 : %d개\n", menuCount[5][1]);
	printf("************************************\n");
	printf("▷  7번 <A> Enter 자판기 초기화 \n");
	printf("▷  8번 <B> 판매 매출 현황 \n");
	printf("************************************\n");
}
int main(void)
{
	int menuCount[6][3] = { { 700,5,0 },{ 700,10,0 },{ 900,5,0 },{ 400,20,0 },{ 1200,1,0 },{ 1000,30,0 } };		// 판매 금액, 재고
	int menu = 0, money = 0, total = 0, sales = 0;	// 메뉴, 투입 금액, 누적 투입 금액, 총 매출
	char ch_exit;

	init(menuCount);

	do {
		printf("\n☞ 현재 투입 금액: %d원\n", total);
		printf("\n◈ 메뉴 번호를 선택해 주세요!  >>  ");
		scanf_s("%d", &menu);

		if (menu != 7 && menu != 8) {
			printf("\n◈ 금액을 넣어 주세요!  >>  ");
			scanf_s("%d", &money);
			total += money;	// 잔돈이 남은 상태로 추가 결제를 할 경우 잔돈 누적
			printf("\n☞ 현재 투입 금액: %d원\n", total);
		}


		if (menu == 1) {
			if (menuCount[0][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 700 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 700;
			printf("\n☞ 선택 음료: 콜라\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[0][1]--;	// 재고 감소
			menuCount[0][2]++;	// 판매량 증가
		}
		else if (menu == 2) {
			if (menuCount[1][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 700 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 700;
			printf("\n☞ 선택 음료: 사이다\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[1][1]--;
			menuCount[1][2]++;
		}
		else if (menu == 3) {
			if (menuCount[2][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 900 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 900;
			printf("\n☞ 선택 음료: 파워에이드\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[2][1]--;
			menuCount[2][2]++;
		}
		else if (menu == 4) {
			if (menuCount[3][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 400 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 400;
			printf("\n☞ 선택 음료: 박카스\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[3][1]--;
			menuCount[3][2]++;
		}
		else if (menu == 5) {
			if (menuCount[4][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 1200 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 1200;
			printf("\n☞ 선택 음료: 오렌지주스\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[4][1]--;
			menuCount[4][2]++;
		}
		else if (menu == 6) {
			if (menuCount[5][1] <= 0) {
				printf("\n☞ 재고가 없습니다!\n");
				break;
			}
			while (total - 1000 <0) {
				printf("\n☞ 금액이 부족합니다. \n");
				printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
				scanf_s("%d", &money);
				total += money;
				printf("\n☞ 현재 투입 금액: %d원\n", total);
			}
			total -= 1000;
			printf("\n☞ 선택 음료: 삼다수\n");
			printf("☞ 잔액: %d원\n", total);
			menuCount[5][1]--;
			menuCount[5][2]++;
		}
		else if (menu == 7) {	// 자판기 (재고) 초기화
			menuCount[0][1] = 5;
			menuCount[1][1] = 10;
			menuCount[2][1] = 5;
			menuCount[3][1] = 20;
			menuCount[4][1] = 1;
			menuCount[5][1] = 30;
			printf("\n☞ 자판기 초기화가 완료되었습니다.\n");
		}
		else if (menu == 8) {	// 판매 매출 현황 (판매량, 판매액)
			sales = menuCount[0][2] * 700 + menuCount[1][2] * 700 + menuCount[2][2] * 900 + menuCount[3][2] * 400 + menuCount[4][2] * 1200 + menuCount[5][2] * 1000;
			printf("\n************************************\n");
			printf("▷▷ 매출 현황 확인 ◁◁\n");
			printf("\n  - 콜      라: %d개 (%d원)\n", menuCount[0][2], menuCount[0][2] * 700);
			printf("  - 사  이  다 : %d개 (%d원)\n", menuCount[1][2], menuCount[1][2] * 700);
			printf("  - 파워에이드 : %d개 (%d원)\n", menuCount[2][2], menuCount[2][2] * 900);
			printf("  - 박  카  스 : %d개 (%d원)\n", menuCount[3][2], menuCount[3][2] * 400);
			printf("  - 오렌지주스 : %d개 (%d원)\n", menuCount[4][2], menuCount[4][2] * 1200);
			printf("  - 삼  다  수 : %d개 (%d원)\n", menuCount[5][2], menuCount[5][2] * 1000);
			printf("\n☞ 총 판매액 : %d원\n", sales);
			printf("************************************\n");
		}
		else if (menu <= 0 || menu > 8) {	// 주어진 번호 외의 숫자 입력할 때
			printf("\n☞ 메뉴 내에서 선택해 주세요!\n");
		}
		printf("\n◈ 프로그램을 종료하시겠습니까? \n   Y/y 누를 경우 종료  >>  ");
		scanf_s(" %c", &ch_exit, sizeof(char));
		if (ch_exit == 'y' || ch_exit == 'Y') {
			break;
		}
		else {
			puts("");
			init(menuCount);
		}
	} while (1);

	printf("\n☞ 잔액 %d원이 반환되었습니다.\n", total);
	printf("\n♡ 이용해 주셔서 감사합니다 ♡\n");
	puts("");
	return 0;
}