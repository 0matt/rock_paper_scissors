#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _playerChoice;
int _computerChoice;

int playerResult=0;
int computerResult=0;

void startGame();
void playerChoice();
void computerChoice();
void checkResult();
void playAgain();

int main() {
    startGame();
}

void startGame() {
    printf("\n*******************\n");
    printf("ROCK PAPER SCISSORS");
    printf("\n*******************\n\n");

    printf("1. Rock 2. Paper 3. Scissors\n\n");

    playerChoice();
    computerChoice();
    checkResult();
}

void playerChoice() {
    do {
        printf("Enter a number from 1-3 for your move: ");
        scanf("%d", &_playerChoice);
    } while(_playerChoice < 1 || _playerChoice > 3);

    _playerChoice--;
}

void computerChoice() {
    srand(time(0));

    _computerChoice = (rand() % 3) + 1;

    _computerChoice--;
}

void playAgain() {
    char choice_input;

    printf("Do you want to play again [Y or N]: ");
    scanf("%c", &choice_input);
    scanf("%c");

    if(choice_input == 'Y') {
        startGame();
    } else if(choice_input == 'N') {
        exit(1);
    }
}

void checkResult() {
    if(_playerChoice == 0 && _computerChoice == 1) {
        printf("Your move: Rock / Computer move: Paper \n");
        printf("Computer Win!\n");
        
        computerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    } else if(_playerChoice == 1 && _computerChoice == 0) {
        printf("Your move: Paper / Computer move: Rock \n");
        printf("You Win!\n");

        playerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    }
    //
    if(_playerChoice == 0 && _computerChoice == 2) {
        printf("Your move: Rock / Computer move: Scissors \n");
        printf("You Win!\n");

        playerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    } else if(_playerChoice == 2 && _computerChoice == 0) {
        printf("Your move: Scissors / Computer move: Rock \n");
        printf("Computer Win!\n");

        computerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    }
    //
    if(_playerChoice == 2 && _computerChoice == 1) {
        printf("Your move: Scissors / Computer move: Paper \n");
        printf("You Win!\n");

        playerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    } else if(_playerChoice == 1 && _computerChoice == 2) {
        printf("Your move: Paper / Computer move: Scissors \n");
        printf("Computer Win!\n");

        computerResult++;

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    }
    //
    if(_playerChoice == 0 && _computerChoice == 0) {
        printf("Your move: Rock / Computer move: Rock \n");
        printf("Draw!\n");

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    } else if(_playerChoice == 1 && _computerChoice == 1) {
        printf("Your move: Paper / Computer move: Paper \n");
        printf("Draw!\n");

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    } else if(_playerChoice == 2 && _computerChoice == 2) {
        printf("Your move: Scissors / Computer move: Scissors \n");
        printf("Draw!\n");

        printf("Your Result: %d / Computer Result: %d\n", playerResult, computerResult);

        playAgain();
    }
}
