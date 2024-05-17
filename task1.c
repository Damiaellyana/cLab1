#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Task 1 : Vending 

int main(int argc, char *argv[]) {

		char beverage[10];
		int quantity;
		const float PRICE_PER_CAN = 3.25;
		float amount = 0.0;
		
		printf("Welcome to the Beverage Vending Machine!\n");
		printf("Please select your beverage(Coke, Pepsi or Sprite): ");
		scanf("%s", beverage);
		
		switch(beverage[0]){
			case 'P':
				amount = PRICE_PER_CAN;
			break;
			case 'C':
				amount = PRICE_PER_CAN;
			break;
			case 'S':
				amount = PRICE_PER_CAN;
			break;
			default:
				printf("Error: Invalid option. Please select Coke, Pepsi, or Sprite\n");
            return 1;
		}
		
		printf("Please select the amount of cans to be purchased: ");
		scanf("%d", &quantity);
		
		amount *= quantity;
		printf("You have selected %d %s. Amount due: RM%.2f\n", quantity, beverage, amount);

	
	return 0;
}
