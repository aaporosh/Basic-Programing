#include <stdio.h>
#include <string.h>

struct Customer {
    char name[50];
    int account_number;
    double balance;
};


void LowBalance(struct Customer customers[], int num) {
    printf("Customers with Balance Less than $200:\n");
    for (int i = 0; i < num; i++) {
        if (customers[i].balance < 200.0) {
            printf("%s\n", customers[i].name);
        }
    }
}

int main() {
    struct Customer customers[20]; 
   
    for (int i = 0; i < 10; i++) {
        printf("Enter customer name: ");
        scanf("%s", customers[i].name);
        getchar();
        
        printf("Enter account number: ");
        scanf("%d", &customers[i].account_number);

        printf("Enter balance: ");
        scanf("%lf", &customers[i].balance);
    }


    LowBalance(customers, 10);

    return 0;
}
