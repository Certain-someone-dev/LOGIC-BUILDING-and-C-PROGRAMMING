#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int bullets = 1, turn = 0, choice, i, pos, cyl[6]; 

    // Instructions 
    printf("=== RUSSIAN ROULETTE GUIDE ===\n");
    printf("1. Use Option 2 to set bullet count (Default: 1).\n");
    printf("2. Use Option 3 to randomize who shoots first.\n");
    printf("3. Use Option 1 to Start. Press Enter to shoot.\n");
    printf("------------------------------\n");

    while (1) {
        printf("\n1. Start Game\n2. Select Bullets (Max 3)\n3. Randomize Turn\n> ");
        if (scanf("%d", &choice) != 1) { while(getchar() != '\n'); continue; }

        if (choice == 2) {
            printf("Enter bullets (1-3): ");
            scanf("%d", &bullets);
            if (bullets < 1 || bullets > 3) { printf("Invalid. Reset to 1.\n"); bullets = 1; }
        } 
        else if (choice == 3) {
            turn = rand() % 2;
            printf(turn ? "Player 2 (You) start.\n" : "Player 1 (Computer) starts.\n");
        } 
        else if (choice == 1) {
            for (i = 0; i < 6; i++) cyl[i] = 0;
            for (i = 0; i < bullets; i++) {
                do { pos = rand() % 6; } while (cyl[pos]); 
                cyl[pos] = 1;
            }
            
            int current = turn, chamber = 0;
            printf("Spinning cylinder... Game ON.\n");
            
            while (1) {
                if (current == 1) { 
                    printf("\nYour turn. Press Enter to shoot...");
                    while(getchar() != '\n'); getchar(); 
                } else { 
                    printf("\nComputer's turn... ");
                }

                if (cyl[chamber]) { 
                    printf("BANG!!!\n");
                    if (current == 0) printf("Player 2 won.\n"); 
                    else printf("Computer wins.\n");            
                    break;
                } else {
                    printf("Click. (Safe)\n");
                    chamber = (chamber + 1) % 6;
                    current = !current; 
                }
            }
        } else break;
    }
    return 0;
}
