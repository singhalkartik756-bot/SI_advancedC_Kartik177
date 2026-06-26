// Roll Number: 2502901520177
// Inventory Management System - DMART

#include <stdio.h>
#include <string.h>

int main()
{
    int Product_ID[] = {101,102,103,104,105,106,107,108,109,110};

    char *Products[] = {
        "Rice","Sugar","Milk","Bread","Oil",
        "Biscuits","Tea","Soap","Shampoo","Salt"
    };

    int Product_Quantity[] = {
        100,80,50,40,60,120,70,90,45,110
    };

    int Product_MRP[] = {
        60,45,30,40,150,20,120,35,180,25
    };

    int bill_ids[100];
    int bill_quantity[100];
    int bill_count = 0;

    float total_bill = 0;

    int choice;

    do
    {
        printf("\n\n========== DMART INVENTORY SYSTEM ==========\n");
        printf("1. Stock Availability\n");
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
            printf("\nID\tProduct\t\tStock\tMRP(Rs)\n");
            printf("=========================================\n");

            for(int i = 0; i < 10; i++)
            {
                printf("%d\t%s\t\t%d\t%d\n",
                       Product_ID[i],
                       Products[i],
                       Product_Quantity[i],
                       Product_MRP[i]);
            }}
        else if(choice == 2)
        {
            int PID, quantity;
            int found = 0;

            printf("Enter Product ID: ");
            scanf("%d", &PID);

            for(int i = 0; i < 10; i++)
            {
                if(Product_ID[i] == PID)
                {
                    found = 1;

                    printf("\nProduct : %s\n", Products[i]);
                    printf("MRP     : Rs.%d\n", Product_MRP[i]);
                    printf("Stock   : %d\n", Product_Quantity[i]);

                    if(Product_Quantity[i] == 0)
                    {
                        printf("Product Out Of Stock!\n");
                        break;
                    }

                    printf("Enter Quantity: ");
                    scanf("%d", &quantity);

                    while(quantity <= 0 ||
                          quantity > Product_Quantity[i])
                    {
                        printf("Invalid Quantity! Available Stock = %d\n",
                               Product_Quantity[i]);
                        printf("Enter Quantity Again: ");
                        scanf("%d", &quantity);
                    }
                float item_total = Product_MRP[i] * quantity;

                    printf("\n----- Item Summary -----\n");
                    printf("Product  : %s\n", Products[i]);
                    printf("Quantity : %d\n", quantity);
                    printf("Amount   : Rs. %.2f\n", item_total);

                    Product_Quantity[i] -= quantity;

                    bill_ids[bill_count] = i;
                    bill_quantity[bill_count] = quantity;
                    bill_count++;

                    total_bill += item_total;

                    break;
                }}

            if(!found)
            {
                printf("Product ID Not Found!\n");
            }}
          else if(choice == 3)
        {
            float discount = 0;
            float final_amount;

            printf("\n\n========== FINAL BILL ==========\n");

            if(bill_count == 0)
               { printf("No Item Purchased!\n")}
            else
            {
                printf("Product\t\tQty\tTotal(Rs)\n");
                printf("=====================================\n");

                for(int b = 0; b < bill_count; b++)
                {
                    int i = bill_ids[b];

                    printf("%s\t\t%d\t%.2f\n",
                           Products[i],
                           bill_quantity[b],
                           (float)(Product_MRP[i] *
                           bill_quantity[b]));
                }

                if(total_bill > 2000)
                {
                    discount = total_bill * 0.20;
                }
                else if(total_bill > 1000)
                {
                    discount = total_bill * 0.10;
                }

                final_amount = total_bill - discount;

                printf("=====================================\n");
                printf("Total Bill      : Rs. %.2f\n", total_bill);
                printf("Discount Amount : Rs. %.2f\n", discount);
                printf("Final Amount    : Rs. %.2f\n", final_amount);
            }

            printf("\nThank You For Shopping At DMART!\n");
        } } 
        while(choice != 3);
        return 0;
       }