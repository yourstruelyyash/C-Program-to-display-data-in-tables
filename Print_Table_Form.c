#include <stdio.h>
#include <stdlib.h>

/*
Description: Printing data in the form of table
Author: Yashvardhan Sharma
Date: 03/12/2022
*/

int main() {
    int itemNumber = 0, quantity = 0;
    double unitPrice;
    int month, date, year;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%lf", &unitPrice);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%12d", &month, &date, &year);

    char strDate[11];                 
    snprintf(strDate, sizeof strDate, "%d%s%d%s%d", month, "/", date, "/", year);

    printf("%-12s\t%10s\t%-12s\t%-12s\t%12s", "Item", "Unit Price", "QTY", "Purchase Date", "Total Amount");
    printf("\n");
    printf("%-12d\t$%9.2lf\t%-12d\t%-12s\t$%11.2lf", itemNumber, unitPrice, quantity, strDate, (unitPrice * quantity));
    return 0;
}
