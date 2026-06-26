// Roll Number- 2502901520177
// Inventory Management System- DMART
 #include <stdio.h>
struct Product
{
    int id;
    int stock;
    float mrp;
    float discount;
    char name[20];
};

int main()
{
    struct Product inventory[10] =
    {
        {101, 50, 60, 5, "Rice"},
        {102, 40, 45, 10, "Sugar"},
        {103, 30, 30, 0, "Milk"},
        {104, 25, 40, 5, "Bread"},
        {105, 20, 150, 15, "Oil"},
        {106, 60, 20, 5, "Biscuits"},
        {107, 35, 120, 10, "Tea"},
        {108, 45, 35, 0, "Soap"},
        {109, 15, 180, 20, "Shampoo"},
        {110, 55, 25, 5, "Salt"}
    };

    int choice, i;

    do
    {
        printf("\n===== WELCOME TO DMART =====\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout & Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        while(choice < 1 || choice > 3)
        {
            printf("Invalid Choice! Enter Again: ");
            scanf("%d", &choice);
        }

        if(choice == 1)
        {
            printf("\nID\tProduct\t\tMRP\tDiscount\tStock\n");
            printf("-------------------------------------------------\n");

            for(i = 0; i < 10; i++)
            {
                printf("%d\t%-10s\t%.2f\t%.0f%%\t\t%d\n",
                       inventory[i].id,
                       inventory[i].name,
                       inventory[i].mrp,
                       inventory[i].discount,
                       inventory[i].stock);
            }
        }

        else if(choice == 2)
        {
            int pid, quantity;
            int found = -1;

            printf("Enter Product ID: ");
            scanf("%d", &pid);

            for(i = 0; i < 10; i++)
            {
                if(pid == inventory[i].id)
                {
                    found = i;
                    break;
                }
            }

            if(found != -1)
            {
                float final_price;

                printf("\nProduct : %s\n", inventory[found].name);
                printf("MRP : Rs %.2f\n", inventory[found].mrp);
                printf("Discount : %.0f%%\n", inventory[found].discount);
                printf("Available Stock : %d\n", inventory[found].stock);

                printf("Enter Quantity: ");
                scanf("%d", &quantity);

                if(quantity > 0 &&
                   quantity <= inventory[found].stock)
                {
                    final_price =
                    inventory[found].mrp -
                    (inventory[found].mrp *
                    inventory[found].discount / 100);

                    float total =
                    final_price * quantity;

                    inventory[found].stock =
                    inventory[found].stock - quantity;

                    printf("\n===== PURCHASE DETAILS =====\n");
                    printf("Product : %s\n",
                           inventory[found].name);
                    printf("Quantity : %d\n", quantity);
                    printf("Price After Discount : Rs %.2f\n",
                           final_price);
                    printf("Total Amount : Rs %.2f\n",
                           total);

                    printf("Remaining Stock : %d\n",
                           inventory[found].stock);
                }
                else
                {
                    printf("Invalid Quantity!\n");
                }
            }
            else
            {
                printf("Product Not Found!\n");
            }
        }

        else if(choice == 3)
        {
            printf("\nThank You For Shopping At DMart!\n");
        }

    } while(choice != 3);

    return 0;
}