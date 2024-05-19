#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Task 1 : Vending 

int main(int argc, char *argv[]) {

		char beverage[10]; // Array to store the selected beverage
		int quantity; // Variable to store the quantity of cans
		const float PRICE_PER_CAN = 3.25; // Constant price per can
		float amount = 0.0; // Variable to store the total amount due 
		
		printf("Welcome to the Beverage Vending Machine!\n");
		printf("Please select your beverage(Coke, Pepsi or Sprite): ");
		scanf("%s", beverage); // Read the beverage selection from the user
	
		// Check if the selected beverage is valid
		if (beverage[0] != 'P' && beverage[0] != 'C' && beverage[0] != 'S') {
        	printf("Error: Invalid option. Please select Coke, Pepsi, or Sprite\n");
        } else {
		// Calculate the amount based on the selected beverage	
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
			
			}
			printf("Please select the amount of cans to be purchased: ");
			scanf("%d", &quantity); // Read the quantity from the user
		
			amount *= quantity; // Calculate the total amount due

			// Display the selected beverage, quantity, and total amount
			printf("You have selected %d %s. Amount due: RM%.2f\n", quantity, beverage, amount);
		}

	
	return 0;
}
