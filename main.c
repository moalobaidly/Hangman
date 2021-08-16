#include <stdio.h>

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
    
    printf("Hello and welcome to Hangman\n");
    printf("This first part is for the person who will come up with the word do not let the guesser see\n");
    printf("Enter the number of letters you will use:\n");
    scanf("%d",&a);



    char correct_word[a];
    for (int x = 0; x<a;x++){
        correct_word[x]='-';
    }


    char word[a];
    printf("Please enter your word it must be %d letters:\n",a);
    scanf("%s",&word);
    printf("word is %s\n",&word);


    printf("Now this is for the guesser:\n");
    printf("The word so far is is :%s\n",correct_word);
    printf("%s\n",correct_word);



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
        printf("The word is now:%s\n",correct_word);
        value = strcmp(correct_word,word);
        if (value==0){
            game_over=1;
            printf("You have won this game!\n");
        }
        else{
            printf("The word is still not complete!\n");
        }
    }
    else{
        printf("Unfortunately you are wrong!\n");
        wrong++;
        switch (wrong){
            case 1:
                one_wrong();

                break;
            case 2:
                two_wrong();
                break;

            case 3:
                three_wrong();
                break;
            case 4:
                four_wrong();
                break;

            case 5:
                five_wrong();
                break;

            case 6:
                six_wrong();
                break;

            case 7:
                seven_wrong();
                break;
            case 8:
                eight_wrong();
                break;

            case 9:
                nine_wrong();
                break;
                
            case 10:
                ten_wrong();
                printf("Game Over\n");
                game_over=1;
                break;
        }

    }
    
    }


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