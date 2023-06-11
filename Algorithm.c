#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char Question[3], PolicyQuestion[3], A[3], B[3], C[3];
    float PolicyCost, DrunkCost, ElderlyCost, TotalCost;
    
    printf("Do you want to start this process? (Yes/No): "); scanf("%s", Question);

    while (strcmp(Question, "Yes") == 0 || strcmp(Question, "yes") == 0) {

        printf("What type of policy do you want to request? (A/B): "); scanf("%s", PolicyQuestion);

        if (strcmp(PolicyQuestion, "A") == 0 || strcmp(PolicyQuestion, "a") == 0) {
            PolicyCost = 1200;
        } else if (strcmp(PolicyQuestion, "B") == 0 || strcmp(PolicyQuestion, "b") == 0) {
            PolicyCost = 950;
        } else {
            printf("Read the instructions, nerd.\n");
            continue;
        }
        
        printf("Do you drink? (Yes/No): "); scanf("%s", B);

        if (strcmp(B, "Yes") == 0 || strcmp(B, "yes") == 0) {
            DrunkCost = PolicyCost * 0.1;
        } else if (strcmp(B, "No") == 0 || strcmp(B, "no") == 0) {
            DrunkCost = 0;
        } else {
            printf("Read the instructions and stop typing nonsense.\n");
            continue;
        }
        
        printf("Are you over 50 years old? (Yes/No): ");scanf("%s", C);

        if (strcmp(C, "Yes") == 0 || strcmp(C, "yes") == 0) {
            ElderlyCost = PolicyCost * 0.8;
        } else if (strcmp(C, "No") == 0 || strcmp(C, "no") == 0) {
            ElderlyCost = 0;
        } else {
            printf("Read the instructions and stop being silly.\n");
            continue;
        }
        
        TotalCost = PolicyCost + DrunkCost + ElderlyCost;

        for (int i = 0; i < 5; i++) {
            printf("Loading...\n");
            sleep(1);
        }
    
        printf("You will have to pay $%.3f\n", TotalCost);
        
        printf("Do you want to start this process? (Yes/No): "); scanf("%s", Question); 
    }
    
    return 0;
