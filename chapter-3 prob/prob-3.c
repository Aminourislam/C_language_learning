#include <stdio.h>

int main() {
    int income_amount;
    float income_tax = 0; // Initialize tax variable
    printf("Enter your income amount: ");
    scanf("%d", &income_amount);

    if (income_amount < 250000) {
        printf("Your income tax amount is 0\n");
    }
    else if (income_amount <= 500000) {
        income_tax = (income_amount - 250000) * 0.05; // Tax on the amount over 250000
        printf("Your income tax amount is %.3f\n", income_tax);
    }
    else if (income_amount <= 1000000) {
        income_tax = (500000 - 250000) * 0.05 + (income_amount - 500000) * 0.1; // Tax on the amount over 500000
        printf("Your income tax amount is %.3f\n", income_tax);
    }
    else { // income_amount > 1000000
        income_tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.1 + (income_amount - 1000000) * 0.30; // Tax on the amount over 1000000
        printf("Your income tax amount is %.3f\n", income_tax);
    }

    return 0;
}
