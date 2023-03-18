#include <stdio.h>

int main() {
    int productNumber, quantitySold, totalRetailValue = 0;
    printf("Enter the product number and quantity sold for each day of last week:\n");

    for (int i = 0; i < 5; i++) { // Assuming input for 7 days of last week
        scanf("%d %d", &productNumber, &quantitySold);
        switch(productNumber) {
            case 1:
                totalRetailValue += quantitySold * 2.98;
                break;
            case 2:
                totalRetailValue += quantitySold * 4.50;
                break;
            case 3:
                totalRetailValue += quantitySold * 9.98;
                break;
            case 4:
                totalRetailValue += quantitySold * 4.49;
                break;
            case 5:
                totalRetailValue += quantitySold * 6.87;
                break;
            default:
                printf("Invalid product number entered!\n");
        }
    }

    printf("Total retail value of all products sold last week: $%d\n", totalRetailValue);
    return 0;
}
