#include <iostream>
using namespace std;

#define RESET   "\033[0m"
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int rock = 1;
int paper = 2;
int scissors = 3;
int playerNum, cpuNum;
string playerHand, cpuHand;
int score = 0;

int main();

void game(){
    system("clear");
    cout << "Enter 1 for " << BOLDCYAN << "ROCK" << RESET << endl;
    cout << "Enter 2 for " << BOLDMAGENTA << "PAPER" << RESET << endl;
    cout << "ENTER 3 for " << BOLDYELLOW << "SCISSORS" << RESET << endl;
    cout << endl;
    cout << "ENTER : ";
    cin >> playerNum;
    
    cpuNum = (rand() % 3) + 1;

    if (playerNum == 1){
        playerHand = "Rock";
    } else if (playerNum == 2){
        playerHand = "Paper";
    } else if (playerNum == 3){
        playerHand = "Scissors";
    }

    if (cpuNum == 1){
        cpuHand = "Rock";
    } else if (cpuNum == 2){
        cpuHand = "Paper";
    } else if (cpuNum == 3){
        cpuHand = "Scissors";
    }

    cout << endl;
    cout << "You threw " << BOLDWHITE << playerHand << RESET << " and the computer threw " << BOLDWHITE << cpuHand << RESET << ".\n" << endl;

    if (playerNum == cpuNum) {
        cout << "Game was a draw!" << endl;    
    } else if (playerNum == 1 && cpuNum == 2) {
        cout << "Rock loses to paper. " << BOLDRED << "You lose!" << RESET << endl;
        score = 0;
    } else if (playerNum == 1 && cpuNum == 3) {
        cout << "Rock beats scissors. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    } else if (playerNum == 2 && cpuNum == 1) {
        cout << "Paper beats rock. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    } else if (playerNum == 2 && cpuNum == 3){
        cout << "Paper loses to scissors. " << BOLDRED << "You lose!" << RESET << endl;
        score = 0;
    } else if (playerNum == 3 && cpuNum == 1){
        cout << "Scissors loses to rock. " << BOLDRED << "You lose!" << RESET << endl;
        score = 0;
    } else if (playerNum == 3 && cpuNum == 2){
        cout << "Scissors beats paper. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    }

    cout << endl;
    cout << "Wins in a row : " << BOLDYELLOW << score << RESET << endl;
    cout << endl;
    main();
}

int main (){

    cout << R"(
    
     *******      *******      ********
    /**////**    /**////**    **//////
    /**   /**    /**   /**   /**
    /*******     /*******    /*********
    /**///**     /**////     ////////**
    /**  //**  **/**       **       /** **
    /**   //**/**/**      /** ******** /**
    //     // // //       // ////////  //
    )";

    int menu;
    cout << endl;
    cout << "___________________________________________\n";
    cout << "###                                     ###\n";
    cout << "###   WELCOME TO ROCK PAPER SCISSORS!   ###\n";
    cout << "###                                     ###\n";
    cout << "###   ENTER 1 to " << BOLDGREEN << "PLAY" << RESET << "                   ###\n";
    cout << "###   ENTER 2 to " << BOLDRED << "EXIT" << RESET << "                   ###\n";
    cout << "###_____________________________________###\n";
    cout << endl;
    cout << "ENTER : ";
    cin >> menu;

    switch(menu){
        case 1:
            game();
            break;
        case 2:
            break;
        default:
            game();
            break;
    }
            


    return 0;
}