#include<stdio.h>
int main()
{
    int food, qun;

    char choice;
    int ammont, ammont1 = 0, ammont2 = 0, ammont3 = 0, ammont4 = 0, net_ammont = 0;
    int gst_par, price, gst_price, orignal_net_price;

menu:
    printf("--------->>> welcome hotel di'vila <<<-------------");
    printf("\nplese enter your choice");
    printf("\n item              Quantity             price\n");
    printf("1. Pizza                1.                100 rs  \n");
    printf("2. Burger               1.                220 rs \n");
    printf("3. Dosa                 1.                150 rs \n");
    printf("4. Idli                 1.                120 rs \n");

    printf("you have selecte food...(1-4)");
    scanf("%d", &food);
    switch (food)
    {
    case 1:
        printf("you have selecte Pizza-->\n");
        printf("selecte Quantity...");
        scanf("%d", &qun);
        ammont1 = qun * 100;
        printf("ammont1=%d\n", ammont1);
        net_ammont += ammont1;
        printf("net_ammont is %d\n", net_ammont);

        break;
    case 2:

        printf("you have selecte Burger-->\n");
        printf("selecte Quantity...");
        scanf("%d", &qun);
        ammont2 = qun * 220;
        printf("ammont2=%d", ammont2);
        net_ammont += ammont2;
        printf("net_ammont is %d", net_ammont);

        break;
    case 3:
        printf("you have selecte Dosa-->\n");
        printf("selecte Quantity...");
        scanf("%d", &qun);
        ammont3 = qun * 350;
        printf("ammont3=%d", ammont3);
        net_ammont += ammont3;
        printf("net_ammont is %d", net_ammont);

        break;

    case 4:
        printf("you have selecte Idli-->\n");
        printf("selecte Quantity...");
        scanf("%d", &qun);
        ammont4 = qun * 120;
        printf("ammont4=%d", ammont4);
        net_ammont += ammont4;
        printf("net_ammont is %d", net_ammont);
        break;

    default:
        printf("please select food");

        printf("\n");
        goto menu;
        break;
    }
    printf("\n you went to place more order ?(press y or n)");
    scanf("%c", &choice);
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        goto menu;
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("--------  bill  ---------------\n");
        net_ammont = ammont1 + ammont2 + ammont3 + ammont4 ;

        gst_price = (float)(net_ammont * 18) / 100;
        printf("gst_price(.18%) is %d", gst_price);
        orignal_net_price = net_ammont + gst_price;
        printf("\norignal_net_price(gst include) is %d\n", orignal_net_price);
    }
    else
    {
        printf("thank you for visit");
    }

    return 0;
}