#include <iostream>
#include <unistd.h>
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
bool login = true;

string drawRock = R"(
     _______
 ---'   ____)
       (_____)
       (_____)
       (____)
 ---.__(___)
)";

string drawPaper = R"(
      _______
 ---'    ____)____
            ______)
           _______)
          _______)
 ---.__________)
)";

string drawScissors = R"(
     _______
 ---'   ____)____
           ______)
        __________)
       (____)
 ---.__(___)
)";

void Draw(string draw){
    cout << draw << endl;
}

int main();

void game(){
    system("clear");
    cout << "Let's play Rock Paper Scissors!" << "\n\n";
    sleep(1);
    cout << "Enter 1 for " << BOLDCYAN << "ROCK" << RESET << endl;
    cout << "Enter 2 for " << BOLDMAGENTA << "PAPER" << RESET << endl;
    cout << "ENTER 3 for " << BOLDYELLOW << "SCISSORS" << RESET << endl;
    cout << endl;
    cout << "ENTER : ";
    cin >> playerNum;
    
    cpuNum = (rand() % 3) + 1;
    sleep(1);
    system("clear");

    cout << BOLDWHITE << "ROCK, PAPER, SCISSORS, SHOOT!" << RESET << endl;
    sleep(2);

    if (playerNum == 1){
        cout << "\n You threw " << BOLDWHITE << "ROCK!" << RESET << endl;
        sleep(1);
        cout << BOLDCYAN;
        Draw(drawRock);
        cout << RESET;
    } else if (playerNum == 2){
        cout << "\n You threw " << BOLDWHITE << "PAPER!" << RESET << endl;
        sleep(1);
        cout << BOLDMAGENTA;
        Draw(drawPaper);
        cout << RESET;
    } else if (playerNum == 3){
        cout << "\n You threw " << BOLDWHITE << "SCISSORS!" << RESET << endl;
        sleep(1);
        cout << BOLDYELLOW;
        Draw(drawScissors);
        cout << RESET;
    }

    sleep(1);
    cout << endl;

    if (cpuNum == 1){
        cout << "\n Computer threw " << BOLDWHITE << "ROCK!" << RESET << endl;
        sleep(1);
        cout << BOLDCYAN;
        Draw(drawRock);
        cout << RESET;
    } else if (cpuNum == 2){
        cout << "\n Computer threw " << BOLDWHITE << "PAPER!" << RESET << endl;
        sleep(1);
        cout << BOLDMAGENTA;
        Draw(drawPaper);
        cout << RESET;
    } else if (cpuNum == 3){
        cout << "\n Computer threw " << BOLDWHITE << "SCISSORS!" << RESET << endl;
        sleep(1);
        cout << BOLDYELLOW;
        Draw(drawScissors);
        cout << RESET;
    }

    sleep(1);
    cout << "\n\n";

    if (playerNum == cpuNum) {
        cout << "Game was a draw!" << endl;    
    } else if (playerNum == 1 && cpuNum == 2) {
        cout << "Rock loses to paper. " << BOLDRED << "You lose!" << RESET << endl;
        if (score != 0)
            cout << BOLDRED << "\nScore reset!" << RESET << endl;
        score = 0;
    } else if (playerNum == 1 && cpuNum == 3) {
        cout << "Rock beats scissors. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    } else if (playerNum == 2 && cpuNum == 1) {
        cout << "Paper beats rock. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    } else if (playerNum == 2 && cpuNum == 3){
        cout << "Paper loses to scissors. " << BOLDRED << "You lose!" << RESET << endl;
        if (score != 0)
            cout << BOLDRED << "\nScore reset!" << RESET << endl;
        score = 0;
    } else if (playerNum == 3 && cpuNum == 1){
        cout << "Scissors loses to rock. " << BOLDRED << "You lose!" << RESET << endl;
        if (score != 0)
            cout << BOLDRED << "\nScore reset!" << RESET << endl;
        score = 0;
    } else if (playerNum == 3 && cpuNum == 2){
        cout << "Scissors beats paper. " << BOLDGREEN << "You win!" << RESET << endl;
        score++;
    }

    sleep(4);
    cout << "\n\n";

    system("clear");

    if (score == 3){
        cout << BOLDGREEN << R"(
__     ______  _    _  __          _______ _   _ _ 
\ \   / / __ \| |  | | \ \        / /_   _| \ | | |
 \ \_/ / |  | | |  | |  \ \  /\  / /  | | |  \| | |
  \   /| |  | | |  | |   \ \/  \/ /   | | | . ` | |
   | | | |__| | |__| |    \  /\  /   _| |_| |\  |_|
   |_|  \____/ \____/      \/  \/   |_____|_| \_(_)
    )" << RESET;
        sleep(5);
        score = 0;
        system("clear");
    }

    main();
}

int main (){

    if (login == true)
        system("clear");

    login = false;
    cout << BOLDGREEN << R"(
 _  _  _    _     _  _ _   __ ____ __ __ _  _  __ 
|_)/ \/ |/ |_)/\ |_)|_|_) (_ /  | (_ (_ / \|_)(_  
| \\_/\_|\ | /--\|  |_| \ __)\__|___)__)\_/| \__)

    )" << RESET;
    cout << "\n               SCORE 3 TO WIN!";

    int menu;
    
    cout << endl;
    cout << "_________________________________________________\n";
    cout << "###                                           ###\n";
    cout << "###   ENTER 1 to " << BOLDGREEN << "PLAY" << RESET << "                         ###\n";
    cout << "###   ENTER 2 to " << BOLDRED << "EXIT" << RESET << "                         ###\n";
    cout << "###                                           ###\n";
    cout << "###   Score: " << BOLDYELLOW << score << RESET << "                                ###\n";
    cout << "###___________________________________________###\n";
    cout << endl;
    cout << "      ENTER : ";
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

    system("clear");        
    return 0;
}