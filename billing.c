#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int phone_number;
    double customer_id;
    int no_of_visits;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int fanta;
    
    int total_before_discount;
    int grocery_total;
    int beverage_total;
    int total_after_discount;


    printf("----------------------------------------------------\n\n");
    printf("BILLING SYSTEM \n\n");
    printf("----------------------------------------------------\n\n");

    printf("Costomer details:\n\n");

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    printf("Enter your mobile number: ");
    scanf("%d", &phone_number);
    printf("Enter your customer id: ");
    scanf("%d", &customer_id);

    printf("\n\n----------------------------------------------------\n\n");

    printf("Grocery items:\n\n");

    printf("1. Sugar (50): ");
    scanf("%d", &sugar);
    printf("2. Tea (70): ");
    scanf("%d", &tea);
    printf("3. Coffee (40): ");
    scanf("%d", &coffee);
    printf("4. Rice (45): ");
    scanf("%d", &rice);
    printf("5. Wheat (30): ");
    scanf("%d", &wheat);

    printf("\n\n----------------------------------------------------\n\n");

    printf("Beverage items:\n\n");

    printf("1. Pepsi (35): ");
    scanf("%d", &pepsi);
    printf("2. Sprite (20): ");
    scanf("%d", &sprite);
    printf("3. Coke (20): ");
    scanf("%d", &coke);
    printf("4. Mojitos (120): ");
    scanf("%d", &mojitos);
    printf("5. Fanta (50): ");
    scanf("%d", &fanta);

    printf("\n\n----------------------------------------------------\n\n");

    printf("Bill Summary:\n\n");

    printf("Items\t\tQuantity\tPrice\n");
    printf("Sugar\t\t%d\t\t%d\n", sugar, sugar*50);
    printf("Tea\t\t%d\t\t%d\n", tea, tea*70);
    printf("Coffee\t\t%d\t\t%d\n", coffee, coffee*40);
    printf("Rice\t\t%d\t\t%d\n", rice, rice*45);
    printf("Wheat\t\t%d\t\t%d\n", wheat, wheat*30);
    printf("Pepsi\t\t%d\t\t%d\n", pepsi, pepsi*35);
    printf("Sprite\t\t%d\t\t%d\n", sprite, sprite*20);
    printf("Coke\t\t%d\t\t%d\n", coke, coke*20);
    printf("Mojitos\t\t%d\t\t%d\n", mojitos, mojitos*120);
    printf("Fanta\t\t%d\t\t%d\n", fanta, fanta*50);
    
    grocery_total = (sugar*50) + (tea*70) + (coffee*40) + (rice*45) + (wheat*30);
    beverage_total = (pepsi*35) + (sprite*20) + (coke*20) + (mojitos*120) + (fanta*50);
    total_before_discount = grocery_total + beverage_total;

    printf("\n\n----------------------------------------------------\n\n");

    printf("Please enter the number of times you have visited us: ");
    scanf("%d", &no_of_visits);
    if(no_of_visits > 20){
        printf("Congratulations! You have won a 20percent discount on your total bill.\n");
        total_after_discount = total_before_discount - (total_before_discount * 0.2);
    }
    else if(no_of_visits > 10 && no_of_visits <20){
        printf("Congratulations! You have won a 10percent discount on your total bill.\n");
        total_after_discount = total_before_discount - (total_before_discount * 0.1);
    }
    else{
        printf("Please visit again to enjoy superb discounts");
    }

    printf("\n\n----------------------------------------------------\n\n");

    printf("Total grocery items: %d\n", grocery_total);
    printf("Total beverage items: %d\n", beverage_total);
    printf("Total amount before applying discount: %d\n\n", total_before_discount);
    printf("*****Total amount after your discounts: %d*****\n", total_after_discount);
    printf("THANKS FOR VISITING US");
}