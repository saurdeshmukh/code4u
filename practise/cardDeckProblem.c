#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


struct card{
int val;
struct card* nextCard;
};

struct player{
int val;
struct player* nextPlayer;
struct card* cardHolding;
};

static unsigned int round = 0;

bool checkOrder(struct player* list,int Players){
	if(list!=NULL){
		int currentValue = -1;	
		struct player *temp = list;
		for(int i=0;i<Players;i++){
			struct card* tempCard = temp->cardHolding;
			while(tempCard != NULL){
				if(currentValue == -1){
					currentValue = tempCard->val;
				}
				else{
					if((currentValue+1)==tempCard->val)
						currentValue = tempCard->val;
					else
						return false;
				}
				tempCard= tempCard->nextCard;
			}
			temp = temp->nextPlayer;
		

		}
		return true;

	}
		return false;
} 
struct player * insertPlayer(struct player *list, int PlayerValue){
	if(list==NULL){
		list = (struct player*)malloc(sizeof(struct player));
		list-> val = PlayerValue;
		list->nextPlayer = NULL;
		list->cardHolding = NULL;
		return list;
	}
	else{
		struct player *temp = list;
		while(temp->nextPlayer !=NULL){
			temp = temp->nextPlayer;
		}
		
		temp->nextPlayer = (struct player*)malloc(sizeof(struct player));
		temp = temp->nextPlayer;
		temp-> val = PlayerValue;
		temp->nextPlayer = NULL;
		temp->cardHolding = NULL;
		return list;
	}
}

void insertCardToPlayer(struct player* list,int cardValue, int PlayerValue){
	struct player *temp = list;
	while(temp->val != PlayerValue){
		temp = temp->nextPlayer;	
	}
	struct card *cardTemp = (struct card*) malloc(sizeof(struct card));
	cardTemp->val = cardValue;
	if(temp->cardHolding == NULL){
		temp->cardHolding = cardTemp;
		temp->cardHolding->nextCard = NULL;
		printf("\nAdded first card for %d player %d card",PlayerValue, cardValue);
	}
	else{
		cardTemp->nextCard = temp->cardHolding;
		temp->cardHolding = cardTemp;
		printf("\nAdded card for %d player %d card",PlayerValue, cardValue);
	}
}

struct player * shuffleCards(struct player* list, struct player* shuffle,int P, int N){
	if(shuffle == NULL){
		printf("\n Player list Empty.");
		printf("\nCreating Players\n");
		for(int j=0;j<P;j++){
			list = insertPlayer(list, j);
		}
	
		int j = 0;
		for(int i=0;i<N;i++){
			if(j==P)
				j=0;
			insertCardToPlayer(list, i,j);
			j++;
		}
	}
	else{
		for(int j=0;j<P;j++){
			list = insertPlayer(list, j);
		}
	
		struct player *temp = shuffle;
		int j =0;
		for(int i=0;i<P;i++){
			struct card* tempCard = temp->cardHolding;
			printf("\nPlayer %d :",temp->val);
			while(tempCard != NULL){
				if(j==P)
					j=0;
				printf(" Inserting %d ",tempCard->val);
				insertCardToPlayer(list, tempCard->val, j);
				j++;
				tempCard= tempCard->nextCard;
			}
			temp = temp->nextPlayer;
		
		}
	}
	return list;

}

void printDetails(struct player* list,int Players, int Cards){

	if(list!=NULL){
		
		struct player *temp = list;
		for(int i=0;i<Players;i++){
			struct card* tempCard = temp->cardHolding;
			printf("\nPlayer %d :",temp->val);
			while(tempCard != NULL){
				printf(" %d ",tempCard->val);
				tempCard= tempCard->nextCard;
			}
			temp = temp->nextPlayer;
		

		}

	}
}

int main(){

struct player *list = NULL;
struct player *shuffle = NULL;
int P = 0, N = 0;
printf("\nEnter Number of Cards in Deck:");
scanf("%d", &N);
printf("\nEnter Number of Players:");
scanf("%d", &P);

printf("\n\n%d Players playing %d Cards in deck",P,N);
if(P>N){
	printf("\nNumber of Player must not be more than Cards in Deck.\n");
	return -1;
}

bool check = checkOrder(list,P);


while(check!=1){
list = shuffleCards(list, shuffle,P, N);
round = round +1;
printDetails(list,P,N);	
check = checkOrder(list,P);
printf("\n %d output",check);
if(check==1)
	break;
shuffle = list;
list = NULL;
}
printf("\n Round Required to get exactly same sequence is %d\n",round);
	









return 0;
}
