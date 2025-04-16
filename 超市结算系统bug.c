#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char shelf[20][20] = {"薯片","榴莲脆","牛奶","面包","巧克力","辣条","可乐","橙汁","鲜橙多","火腿肠","蛋黄派","酸梅汁","果冻","核桃露","徐福记","泡凤爪","小饼干","坚果乐","老酸奶","咖啡"};
	float prices[20] = {5.0,3.0,6.5,4.0,10.0,5.5,3.5,4.5,0.5,8.0,12.0,5.0,25.0,20.0,15.0,3.0,6.0,20.0,4.0,18.0};
	float total = 0;
	int i;
	srand(time(NULL));
	printf("你走进零食很忙，开始在货架上挑选商品：\n");
	for (i=0;i<20;i++){
		int buy = rand() % 2;
		if (buy){
			int quantity = rand() % 2 + 1;
			printf("你看到了 %s, 你决定购买 %d 个: \n",shelf[i],quantity);
			float subtotal = quantity*prices[i];
			total +=subtotal;
		}else{
			printf("你看到了 %s, 你决定不买它。\n",shelf[i]);
		}
	}
	printf("\n开始结算: \n");
	printf("---------------结算单---------------\n");
	printf("商品名称\t购买数量\t单价\t\t总价\n");
	for (i=0;i<20;i++) {
	int buy = rand()  % 2;
	if (buy) {
		int quantity = rand() % 2 + 1;
		float subtotal = quantity*prices[i];
		printf("%s\t\t%d\t\t%.2f\t\t%.2f\n",shelf[i],quantity,prices[i],subtotal);
	}
}
printf("---------------------------------------------\n");
printf("总计: %.2f 元\n",total);
return 0;
}