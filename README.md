# 🥤 VENDING MACHINE

<p align="center"><img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/e41b2f9d-001e-43b5-a012-e8c15052070c/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T072443Z&X-Amz-Expires=86400&X-Amz-Signature=30616dac151b5e83987103d2c5a209db1fb428a84bab5187541eb1e424f430e2&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" /></p>

## 🖥 PROJECT 소개

2018년 1학기 C프로그래밍실습 강의 기말 텀 프로젝트 제작

> 일상생활에서 접하는 것들 중 C언어로 구현할 수 있는 것들을 살펴보다 생각해낸 것이 자판기 프로그램이었고, 일상생활에서 사용하는 자판기와 기능이 거의 유사하도록 구현하였다.

🗓️ **작업기간** : 2018. 06.

👨‍💻 **투입인원** : 1명

📒 **주요업무** 

- 기획 및 설계
- 개발

🌱 **스킬 및 사용툴**

`C` `visualStudio`

<br>

## 🖌️ INFO

1. 초기 화면

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/2fc6cdfd-434b-485b-8bec-8fc732008bff/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T072803Z&X-Amz-Expires=86400&X-Amz-Signature=34383a983f0bb603f0b80bc43b606c1e7e011414762fb8f23d2aa0fbac5b9fcb&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" />

2. 메뉴 선택 및 금액 입력 (추가 결제 X)

- 프로그램 종료할 경우 잔액 반환

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/ee815a5e-30b9-4798-abc2-68e1f10a495e/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073140Z&X-Amz-Expires=86400&X-Amz-Signature=382a985e3d22287dba9d8db2dc47d77e2be00db9456f7a71d2f61704a18de87f&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" />

  2-1. 재고가 없는 메뉴 선택 (추가 결제 O)

- ‘프로그램을 종료하시겠습니까?’에서 Y 외의 다른 문자 입력할 경우, 메뉴 다시 출력
- 추가 결제를 원하여 프로그램을 종료하지 않을 경우, 잔액 누적

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/a3861fb0-7bad-442f-9bf5-2e66a19e75e0/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073200Z&X-Amz-Expires=86400&X-Amz-Signature=b516f030580f1d9a8d64d852f741c22e51db1b4f5c616ff76c295a1196a1711f&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="600px" />


  2-2. 주어진 메뉴 외의 번호 입력

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/a9689358-69c8-4708-a48b-db16f2664dc9/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073214Z&X-Amz-Expires=86400&X-Amz-Signature=e412590fee799c1977f8363bb6eaf28e531e04c60fad403a01a968146ebf56bb&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" />


  2-3. 금액이 부족할 경우

- 투입 금액이 판매 금액 이상이 될 때까지 투입하도록 반환

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/7e382ea2-6fae-4bc4-9023-3a9a8d5d4b16/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073224Z&X-Amz-Expires=86400&X-Amz-Signature=3894a012d40e3cd95f763028084590dea981c865e8d525679de4b51b0edfc271&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" />


3. 자판기 초기화

- 초기화 이후 삼다수의 재고가 29에서 30으로 채워짐
- 
<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/17baeca1-cf89-41a7-b640-e519d226494a/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073239Z&X-Amz-Expires=86400&X-Amz-Signature=02f8a2ecfd1062077a6e0ffd5e5c3e84330110beafac941a7595202adf103b7b&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="600px" />


4. 판매 매출 현황

- 종료하지 않고 계속 결제한 경우, 결제 금액이 누적되어 매출 현황에 저장됨

<img src="https://s3.us-west-2.amazonaws.com/secure.notion-static.com/d23bb2c6-1b3c-4cd3-9090-e4462cc5c49a/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210727T073248Z&X-Amz-Expires=86400&X-Amz-Signature=2387fe35e4204a7892b795e813a5930f366f3af7bf99c27bf15947ab94216c55&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22Untitled.png%22" width="300px" />


<br>

## ✔ CODE

자판기의 메뉴가 무엇이 있는지 한눈에 볼 수 있도록 하기 위해 printf를 이용하여 메뉴를 출력하였다. 메뉴의 가격과 재고는 배열을 사용하여 후에 가격과 재고를 일일이 대입하여 계산해야 하는 번거로움을 최소화시켰다.

	void init(int menuCount[6][3])	// 메뉴 보여 주기
	{
		printf("♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤♤\n");
		(중략)
		printf("************************************\n");
	}
	int menuCount[6][3] = { { 700,5,0 },{ 700,10,0 },{ 900,5,0 },{ 400,20,0 },{ 1200,1,0 },{ 1000,30,0 } };	// 판매 금액, 재고
	

do while 구문은 do 다음의 반복 몸체가 실행된 이후 while 이후의 조건문이 실행되기 때문에 조건문 실행 전 출력되어야 하는 문장들을 do 다음에 입력하였다. 주어진 메뉴 중 7번과 8번(관리자 메뉴)을 제외한 1~6번까지가 사용자가 선택할 수 있는 항목이므로 `if (menu != 7 && menu != 8)`이라는 조건을 만족하면 금액을 넣으라는 문구가 뜨게 하였다. 만약 추가 결제일 경우를 고려하여 앞에서 남은 잔액이 누적되게 하여 추가 투입한 금액과 합쳐지도록 구현하였다. 만약 메뉴 번호를 주어진 번호 내에서 입력하지 않고 다른 번호를 입력하였을 경우를 `else if (menu <= 0 || menu > 8)` 조건문으로 나타내었고, 이를 만족하면 ‘메뉴 내에서 선택해 주세요’라는 문구가 뜨게 하였다.

	int menu = 0, money = 0, total = 0, sales = 0;// 메뉴, 투입 금액, 누적 투입 금액, 총 매출	
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

	else if (menu <= 0 || menu > 8) {	// 주어진 번호 외의 숫자 입력할 때
			printf("\n☞ 메뉴 내에서 선택해 주세요!\n");
		}


위에서 배열의 각 행의 첫 번째는 메뉴의 가격을, 두 번째에는 메뉴의 재고 수를 입력했기 때문에 만약 1번 메뉴를 선택했을 경우 `menuCount[0][1]` 배열을 사용하여 값을 참조할 수 있다. 이 값이 0이 되면 재고가 없다는 뜻이기 때문에 이를 조건으로 내세우고 만족할 경우 ‘재고가 없습니다’라는 문장이 뜨게 하였다.

	if (menuCount[0][1] <= 0) {
		printf("\n☞ 재고가 없습니다!\n");
		break;
		}

추가 계산할 경우도 고려하여 최초 투입 금액이 아닌 누적 투입 금액을 가리키는 변수를 사용하여 메뉴의 판매 금액보다 적을 경우 ‘금액이 부족합니다’라는 문장이 뜨게 하였다. 이전에 넣은 금액에서 더 추가로 금액을 투입해 조건을 만족시켜야 하기 때문에 `total += money;`를 이용하여 연산하였다.

	while (total - 700 <0) {
		printf("\n☞ 금액이 부족합니다. \n");
		printf("\n◈ 추가 금액을 넣어 주세요!  >>  ");
		scanf_s("%d", &money);
		total += money;
		printf("\n☞ 현재 투입 금액: %d원\n", total);
	}

이렇게 해서 모든 조건을 만족하였다면 선택 음료가 무엇인지 보여 준다. 판매 금액보다 큰 금액을 입력하였을 경우, 잔돈을 반환할 수 있도록 `total -= 판매 가격;`으로 연산하게 하였다. 또한 판매 매출 현황 확인과 판매할 때마다 재고가 감소하도록 설계하기 위해 배열을 참조하여 재고는 판매 한 번에 한 개씩 줄도록, 매출량은 판매 한 번에 한 개씩 늘도록 하였다. 이는 모든 메뉴에 해당하도록 `if (menu == 1)`부터 `else if (menu == 6)`까지 반복된다.


		total -= 700;
		printf("\n☞ 선택 음료: 콜라\n");
		printf("☞ 잔액: %d원\n", total);
		menuCount[0][1]--;	// 재고 감소
		menuCount[0][2]++;	// 판매량 증가


자판기 재고를 초기화하는 기능은 관리자가 쓸 수 있도록 구현하였다. 만약 재고가 다 바닥났을 경우 처음 상태로 되돌려야 하기 때문에 배열 초기화를 사용하여 자판기 재고 초기화를 할 수 있도록 하였다.

	else if (menu == 7) {	// 자판기 (재고) 초기화
		menuCount[0][1] = 5;
		menuCount[1][1] = 10;
		menuCount[2][1] = 5;
		menuCount[3][1] = 20;
		menuCount[4][1] = 1;
		menuCount[5][1] = 30;
		printf("\n☞ 자판기 초기화가 완료되었습니다.\n");
	}


관리자가 판매 매출 현황을 볼 수 있는 기능도 구현하였는데, 위에서 판매 한 번에 재고 수가 하나씩 늘도록 하였기 때문에 `menuCount[0][2]` (메뉴 1번으로 예시) 판매액을 `menuCount[0][2] * 700;`으로 연산하여 출력하도록 하였다.

	else if (menu == 8) {	// 판매 매출 현황 (판매량, 판매액)
		sales = menuCount[0][2]*700 + menuCount[1][2]*700 + menuCount[2][2]*900 + menuCount[3][2]*400 + menuCount[4][2]*1200 + menuCount[5][2]*1000;
		printf("▷▷ 매출 현황 확인 ◁◁\n");
		printf("\n  - 콜      라: %d개 (%d원)\n", menuCount[0][2], menuCount[0][2] * 700);
		printf("  - 사  이  다 : %d개 (%d원)\n", menuCount[1][2], menuCount[1][2] * 700);
		printf("  - 파워에이드 : %d개 (%d원)\n", menuCount[2][2], menuCount[2][2] * 900);
		printf("  - 박  카  스 : %d개 (%d원)\n", menuCount[3][2], menuCount[3][2] * 400);
		printf("  - 오렌지주스 : %d개 (%d원)\n", menuCount[4][2], menuCount[4][2] * 1200);
		printf("  - 삼  다  수 : %d개 (%d원)\n", menuCount[5][2], menuCount[5][2] * 1000);
		printf("\n☞ 총 판매액 : %d원\n", sales);
	}


구매가 끝난 후에는 추가 결제를 할 것인지를 묻는 ‘프로그램을 종료하시겠습니까?’ 문장이 출력되게 하였고, 만약 ‘Y’나 ‘y’를 입력하고 [enter]키를 누른 경우 종료되게 하기 위해 `if (ch_exit == 'y' || ch_exit == 'Y')`라는 조건문을 사용하였다. 이 경우 `break`문을 통해 함수를 빠져나가 잔액이 누적되지 않고 반환되도록 하였고, 이를 보여 주는 ‘잔액 %d원이 반환되었습니다’라는 문장을 출력하게 하였다. ‘Y’나 ‘y’가 아닌 다른 문자를 입력한 경우 다시 메뉴를 보여 주며 구매를 할 수 있도록 메뉴를 보여 주는 함수인 `init(menuCount);`를 호출하였다.

		printf("\n◈ 프로그램을 종료하시겠습니까? \n   Y/y 누를 경우 종료  >>  ");	
		scanf_s(" %c", &ch_exit, sizeof(char));
		if (ch_exit == 'y' || ch_exit == 'Y') {
			break;
		}
		else {
			puts("");
			init(menuCount);
		} while (1);

	printf("\n☞ 잔액 %d원이 반환되었습니다.\n", total);
	printf("\n♡ 이용해 주셔서 감사합니다 ♡\n");
	puts("");

이 모든 함수가 프로그램이 종료되기 전까지 계속 반복되게 하기 위해서 무한반복문인 `while(1);`을 마지막에 입력하였다.
