#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	double rCount = 0;
	double tCount;
	double decks;
	double actualDecks;
	char card;
	bool i = true;
	
	printf("\n Enter the ammount of decks beign shuffled: ");
	scanf("%lf", &decks);
	actualDecks = decks * 52;
	
	while(i == true){
			
		printf("\n Enter a Card Value: \n 2 3 4 5 6 7 8 9 1(ten) j q k a");
		printf("\n or enter h to stop program \n");
		scanf(" %c", &card);
		
		system("clear");
		
		switch(card){
			case '2':
				rCount += 1;
				break;
				
			case '3':
				rCount += 1;
				break;
				
			case '4':
				rCount += 1;
				break;
				
			case '5':
				rCount += 1;
				break;
				
			case '6':
				rCount += 1;
				break;
				
			case '7':
				break;
				
			case '8':
				break;
				
			case '9':
				break;
				
			case '1':
				rCount -= 1;
				break;
				
			case 'j':
				rCount -= 1;
				break;
				
			case 'q':
				rCount -= 1;
				break;
				
			case 'k':
				rCount -= 1;
				break;
				
			case 'a':
				rCount -= 1;
				break;
				
			case 'h':
				i = false;
				break;
				
			default:
				printf("\n invalid Card Value.");
				system("clear");
				break;
		}
		actualDecks -= 1;
		decks = actualDecks / 52;
		printf("Remmaining Decks: %.1lf", decks);
		tCount = rCount / decks;
		printf("\nRunning Count: %.0lf True Count %.2lf", rCount, tCount);
			
	}
	return 0;
	}
