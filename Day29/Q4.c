#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[20];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf(" %[^\n]", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n------ Inventory Details ------\n");

    for (i = 0; i < n; i++) {
        printf("\nItem ID : %d\n", item[i].id);
        printf("Item Name : %s\n", item[i].name);
        printf("Quantity : %d\n", item[i].quantity);
        printf("Price : %.2f\n", item[i].price);
    }

    return 0;
}