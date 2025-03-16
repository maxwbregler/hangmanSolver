#include <stdio.h>
int main(){
	char currentLetters[100];
	printf("Current State of Word: (eg a__t_re)\n");
	scanf("%s", currentLetters);
	int numOfLetters;
	int i;
	for(i = 0; i < 100; i++){
		if(currentLetters[i] == '\0'){
			numOfLetters = i;
			break;
		}
	}
	char falseLetters[100];
	printf("Guessed Wrong Letters: (eg cnf)\n");
	scanf("%s", falseLetters);
	int numOfFalseLetters;
	for(i = 0; i < 100; i++){
		if(falseLetters[i] == '\0'){
			numOfFalseLetters = i;
			break;
		}
	}
	FILE *wordFile;
	wordFile = fopen("words.txt", "r");
	int lines = 0;
	char word[100];
	int doesMatch;
	int j;
	printf("Matches:\n");
	while(fgets(word, 100, wordFile)){
		lines++;
		if((word[numOfLetters] != '\0') && (word[numOfLetters + 1] == '\0')){
			doesMatch = 1;
			for(i = 0; i < numOfLetters; i++){
				if(currentLetters[i] == 95){
					if(word[i] == '\0'){
						doesMatch = 0;
					}
				}
				else{
					if((word[i] != currentLetters[i]) && (word[i] != currentLetters[i] - 32)){
						doesMatch = 0;
					}
				}
				for(j = 0; j < numOfFalseLetters; j++){
					if(word[i] == falseLetters[j]){
						doesMatch = 0;
					}
				}
			}
			if(doesMatch == 1){
				printf("%s", word);
			}
		}
	}
	return 0;
}