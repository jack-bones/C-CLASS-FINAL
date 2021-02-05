#include <stdio.h>
#include <stdlib.h>

int n = 0;
int pinNum[6] = {0};
int pinRepeat[6]= {0};
int checkNum[6]= {0};
int main()
{
    while (n != 4){

    printf("    Welcome to the Pin Program!\n");
    printf("---------------------------------\n");
    printf("  1 For entering a Pin Twice\n");
    printf("  2 For checking if pins are equal\n");
    printf("  3 For checking if pins are equal\n");
    printf("  4 For exit\n");
    printf("---------------------------------\n");
    printf("CHOOSE OPTION: ");
    scanf("%d", &n);
// Mr. Rey, I cant finish this project on time, I am pretty exhasted from my day job, its been a pretty rough day for me, doing installs, with ship issues during our SOVT process, and I need to sleep for tomorrows big day on the USS LINCOLN, I can try to get up early morning, but not sure if I can make this assignment by fridays noon deadline.
    switch (n) {
        case 1:
            printf("please enter your six digit pin number separated by spaces\n");
            scanf("%d%d%d%d%d%d", &pinNum[0], &pinNum[1], &pinNum[2], &pinNum[3], &pinNum[4], &pinNum[5]);
            printf("please re-enter your six pin number separated by spaces to verify it is the same number\n");
            break;
        case 2:
            printf("\n");
            break;
        case 3:
            printf("\n");
            break;
        case 4:
            printf("\n");
            break;
        default:
            printf("\n");
            break;
    }
    continue;
return 0;
  }
}
