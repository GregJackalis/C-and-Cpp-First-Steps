#include <stdio.h>
#include <stdlib.h>

struct customer {
    char name[40];
    char address[40];
    int streetNumber;
    char email[40];
    int afm;
    float amount;
};

//global variables
int personCounter = 0;

void gettingInformation(struct customer list[100]) {
    char choice;
    for (int i = 0; i < 100; i++) {
        printf("Give information for Person %d:\n\n", (i+1));
        printf("Type in the name of person %d: ", (i+1));
        scanf(" ");
        fgets(list[i].name, 40, stdin);
        
        
        printf("\nType in the address for person %d: ", (i+1));
        scanf(" ");
        fgets(list[i].address, 40, stdin);
        printf("\nType in the Street Number for person %d: ", (i+1));
        scanf("%d", &list[i].streetNumber);
                
        printf("\nType in the email for person %d: ", (i+1));
        scanf(" ");
        fgets(list[i].email, 40, stdin);
        
        printf("\nType in the AFM for person %d: ", (i+1));
        scanf("%d", &list[i].afm);
        printf("\nType in the amount of taxes for person %d: ", (i+1));
        scanf("%f", &list[i].amount);
        
        personCounter++;
        
        printf("\n\nWould you like to register another Person's Info? (Type \"Y\" for Yes - - Type \"N\" for No): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            break;
        }
    }
}

void printingInformation (struct customer list[100]) {
    printf("\n\n\tINFO GIVEN\n------------------");
    for (int i = 0; i < personCounter; i++) {
        printf("\nFOR NUMBER %d", (i+1));
        printf("\nName: %s", list[i].name);
        printf("Address: %s", list[i].address);
        printf("Street Number: %d \n", list[i].streetNumber);
        printf("Email: %s", list[i].email);
        printf("AFM: %d", list[i].afm);
        printf("\nAmount: €%.2f \n", list[i].amount);
    }
    printf("\n");
}
                 
int main() {
    struct customer list[100];
    
    gettingInformation(list);
    printingInformation(list);

}
