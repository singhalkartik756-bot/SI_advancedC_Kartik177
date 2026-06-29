#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    int stock;
    double mrp;
    double discount;
    char size[10];
};

int main() {
    struct Product inventory[10] = {
        {101, 5,  60.00,  10.0, "Rice"},
        {102, 10, 45.00, 15.0, "Sugar"},
        {103, 15, 30.00,  0.0,  "Milk"},
        {104, 12, 40.00, 20.0, "Bread"},
        {105, 14, 150.00, 5.0,  "Oil"},
        {106, 16, 55.00,  10.0, "Biscuit"},
        {107, 13, 120.00, 5.0, "Shampoo"},
        {108, 12, 35.00, 0.0,  "Soap"},
        {109, 10, 20.00, 15.0, "Tea"},
        {110, 11, 25.00,  5.0,  "Salt"}
    };

    FILE *f;
    int choice, i;

    f = fopen("trends.dat", "rb");
    if (f != NULL) {
        fread(inventory, sizeof(struct Product), 10, f);
        fclose(f);
    }

    do {
        printf("\n====WELCOME TO DMART===\n");
        printf("      ======MENU======\n");
        printf("1:View Inventory Stock\n");
        printf("2:Purchase Items\n");
        printf("3:Checkout & Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        
        while (choice < 1 || choice > 3) {
            printf("\nInvalid Choice please try again\n");
            printf("1:View Inventory Stock\n");
            printf("2:Purchase Items\n");
            printf("3:Checkout & Exit\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);
        }
        
        if (choice == 1) {
            printf("\nProduct_ID\tSize\tMRP\t\tDiscount%%\tAvailable_Qty\n");
            printf("-----------------------------------------------------------------------\n");
            for (i = 0; i < 10; i++) {
                printf("%d\t\t%s\tRs.%.2f\t\t%.1f%%\t\t%d\n", 
                       inventory[i].id, 
                       inventory[i].size, 
                       inventory[i].mrp, 
                       inventory[i].discount, 
                       inventory[i].stock);
            }
        }
        else if (choice == 2) {
            int PI, quantity, found_index = -1; 
            
            printf("Enter the product ID: ");
            scanf("%d", &PI);
            
            for (i = 0; i < 10; i++) {
                if (PI == inventory[i].id) { 
                    found_index = i; 
                    break; 
                }
            }
            
            if (found_index != -1) {
                double original_mrp = inventory[found_index].mrp;
                double discount_pct = inventory[found_index].discount;
                double final_price = original_mrp - (original_mrp * (discount_pct / 100.0));

                printf("Product Found! Size: %s | MRP: Rs.%.2f | Discount: %.1f%% | Final Price: Rs.%.2f\n", 
                       inventory[found_index].size, original_mrp, discount_pct, final_price);
                printf("Available Stock: %d\n", inventory[found_index].stock);
                
                printf("Enter the Quantity of product: ");
                scanf("%d", &quantity);   
                
                if (quantity > 0 && quantity <= inventory[found_index].stock) {
                    printf("Quantity is Available\n");
                    
                    inventory[found_index].stock = inventory[found_index].stock - quantity;
                    
                    printf("Remaining stock inside structure for ID %d: %d\n", 
                           inventory[found_index].id, inventory[found_index].stock);
                    
                    double total_bill = final_price * quantity;
                    printf("Total cost for this item: Rs.%.2f\n", total_bill);

                    f = fopen("dmart.dat", "wb");
                    if (f != NULL) {
                        fwrite(inventory, sizeof(struct Product), 10, f);
                        fclose(f);
                    }
                } 
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            } 
            else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        else if (choice == 3) {
            printf("\nThank you for shopping at Dmart. Have a nice day!\n");
        }

    } while (choice != 3);

    return 0;
}