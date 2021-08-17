#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void one_wrong();
void two_wrong();
void three_wrong();
void four_wrong();
void five_wrong();
void six_wrong();
void seven_wrong();
void eight_wrong();
void nine_wrong();
void ten_wrong();


int main(){
    int a;

    int lower =1,upper = 1003;
    srand(time(NULL));
    int r = (rand() % (upper-lower+1))+lower;
    

    FILE * fPointer;
    fPointer= fopen("words.txt", "r");
    char singleline[150];

    int m = 0;


    while(m!=r){
        fgets(singleline, 150, fPointer);
        
        m++;
    }
    



    int i;
    
    a=0;//variable initialization
    
    for(i=0; singleline[i] != '\0'; i++){
        if(singleline[i]!=' ')// this condition is used to avoid counting space
        {
            a++;//totChar=totChar+1
        }
    }
    a--;
    printf("The total characters of the given string= %d\n",a);











    int x;

    char correct_word[a+1];
    for (x = 0; x<a;x++){
        correct_word[x]='-';
    }
    
    correct_word[x]= '\0';


    char word[a];

    for(i=0;i<a;i++){
        word[i]=singleline[i];
    }
    word[i]= '\0';
    


    printf("Now this is for the guesser:\n");
    printf("The word so far is is :%s\n",correct_word);
    



    int value;
    int number_of_guesses;
    int incorrect_guesses;
    char player_guess;
    printf("Now you must guess the word.\n");
    int c = a;
    
    int wrong;
    int game_over = 0;
    while (game_over == 0)
    {
    printf("Guess a character:\n");
    scanf("%s",&player_guess);
    int youve_guessed_correctly = 0;
    
    for (int i=0;i < c;i++){
        if (player_guess==word[i]){
            
            correct_word[i] = player_guess;
            youve_guessed_correctly++;
            }

        else{
            
        }
    }
    if (youve_guessed_correctly>0){
        printf("youve made the correct guess!\n");
        printf("The word was: %s\n",correct_word);
        value = strcmp(correct_word,word);
        
        if (value==0){
            game_over=1;
            printf("You have won this game!\n");
        }
        else{
            printf("The word is still not complete!\n");
            printf("\n\n\n");
        }
    }
    
    else{
        printf("Unfortunately you are wrong!\n");
        wrong++;
        switch (wrong){
            case 1:
                one_wrong();
                printf("\n\n\n");

                break;
            case 2:
                two_wrong();
                printf("\n\n\n");
                break;

            case 3:
                three_wrong();
                printf("\n\n\n");
                break;
            case 4:
                four_wrong();
                printf("\n\n\n");
                break;

            case 5:
                five_wrong();
                printf("\n\n\n");
                break;

            case 6:
                six_wrong();
                printf("\n\n\n");
                break;

            case 7:
                seven_wrong();
                printf("\n\n\n");
                break;
            case 8:
                eight_wrong();
                printf("\n\n\n");
                break;

            case 9:
                nine_wrong();
                printf("\n\n\n");
                break;
                
            case 10:
                ten_wrong();
                printf("Game Over\n");
                printf("The word was: %s",word);
                game_over=1;
                break;
        }

    }
    
    }

    fclose(fPointer);


    
    return 0;
}

void one_wrong(){
    printf("------\n");
}
void two_wrong(){
    printf("  |\n");
    printf("  |\n");
    printf("  | \n");
    printf("------\n");
}
void three_wrong(){
    printf("------|\n");
    printf("      |\n");
    printf("      | \n");
    printf("      | \n");
    printf("      | \n");
    printf("      | \n");
    printf("    ------\n");
}

void four_wrong(){
    printf("------|\n");
    printf("|     |\n");
    printf("      | \n");
    printf("      | \n");
    printf("      | \n");
    printf("      | \n");
    printf("    ------\n");
}
void five_wrong(){
    printf("------|\n");
    printf("|     |\n");
    printf("O     | \n");
    printf("      | \n");
    printf("      | \n");
    printf("      | \n");
    printf("    ------\n");
}
void six_wrong(){
    printf("------|\n");
    printf("|     |\n");
    printf("O     | \n");
    printf("|     | \n");
    printf("      | \n");
    printf("      | \n");
    printf("    ------\n");
}
void seven_wrong(){
    printf(" -----|\n");
    printf(" |    |\n");
    printf(" O    | \n");
    printf("/|    | \n");
    printf("      | \n");
    printf("      | \n");
    printf("    ------\n");
}
void eight_wrong(){
    printf(" -----|\n");
    printf(" |    |\n");
    printf(" O    | \n");
    printf("/|    | \n");
    printf(" |    | \n");
    printf("      | \n");
    printf("    ------/n");
}   
void nine_wrong(){
    printf(" -----|\n");
    printf(" |    |\n");
    printf(" O    | \n");
    printf("/|    | \n");
    printf(" |    | \n");
    printf(" |    | \n");
    printf("    ------\n");
} 
void ten_wrong(){
    printf(" -----|\n");
    printf(" |    |\n");
    printf(" O    | \n");
    printf("/|    | \n");
    printf(" |    | \n");
    printf("/     | \n");
    printf("    ------\n");
} 
    













    

