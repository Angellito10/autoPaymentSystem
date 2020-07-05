//  Created by Muath Nasr on 27/JUN/2020.
//  Copyright © 2020 Muath Nasr. All rights reserved.
#include <stdio.h>
#include <stdlib.h>
#define SIZE 13
int main()
{
    double fcounter;
    double totalAmount, Payment, payback;
    double paymentList[SIZE] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01};
    do
    {
        printf("\n\n---------------------Welcome to the AoutoPay System----------------- : \n");
        printf("\n----------------------------------(^_^)---------------------------------\n\n");
        printf("Enter value of your bill: ");
        scanf("%lf", &totalAmount);

        if (totalAmount > 0 && totalAmount < 10000)
        {
            printf("\nInsert money for payment:");
            while (fcounter != 0 && fcounter != EOF)
            {
                scanf("%lf", &fcounter);
                if (fcounter == 0.50 || fcounter == 0.20 || fcounter == 0.10 || fcounter == 0.05 ||
                    fcounter == 0.02 || fcounter == 0.01 || fcounter == 100 || fcounter == 50 ||
                fcounter == 20 || fcounter == 10 || fcounter == 5 || fcounter == 2 || fcounter == 1)
                {
                    Payment += fcounter;
                }
                else if (fcounter == 0)
                {
                    break;
                }
                else
                {
                    printf("%.2f is invalid!", fcounter);
                    exit(0);
                }
            };
            printf("\nYou have inserted: %.2f \n", Payment);
            //If customer enters Higher amount, the The Operation will done and return the payback ! is displayed.
            if (Payment > totalAmount)
            {
                payback = Payment - totalAmount;
                printf("To return:%.2f ", payback);
                printf("\n---------------------------------- :) -----------------------------------");

                printf("\nCollect your payback:");
                //This algorthim will calculate and return to the customer the payBack
                for (int i = 0; i < SIZE; i++)
                {
                    while (payback > 100)
                    {
                        payback -= paymentList[0];
                        printf(" %.f", paymentList[0]);
                    }

                    while (payback >= 50 && payback < 100)
                    {
                        payback -= paymentList[1];
                        printf(" %.f", paymentList[1]);
                    }
                    while (payback >= 20 && payback < 50)
                    {
                        payback -= paymentList[2];
                        printf(" %.f", paymentList[2]);
                    }
                    while (payback >= 10 && payback < 20)
                    {
                        payback -= paymentList[3];
                        printf(" %.f", paymentList[3]);
                    }
                    while (payback >= 5 && payback < 10)
                    {
                        payback -= paymentList[4];
                        printf(" %.f", paymentList[4]);
                    }
                    while (payback >= 2 && payback < 5)
                    {
                        payback -= paymentList[5];
                        printf(" %.f", paymentList[5]);
                    }
                    while (payback >= 1 && payback < 2)
                    {
                        payback -= paymentList[6];
                        printf(" %.f", paymentList[6]);
                    }
                    while (payback >= 0.50 && payback < 1)
                    {
                        payback -= paymentList[7];
                        printf(" %.2f", paymentList[7]);
                    }
                    while (payback >= 0.20 && payback < 0.50)
                    {
                        payback -= paymentList[8];
                        printf(" %.2f", paymentList[8]);
                    }
                    while (payback >= 0.10 && payback < 0.20)
                    {
                        payback -= paymentList[9];
                        printf(" %.2f", paymentList[9]);
                    }
                    while (payback >= 0.05 && payback < 0.10)
                    {
                        payback -= paymentList[10];
                        printf(" %.2f", paymentList[10]);
                    }
                    while (payback >= 0.02 && payback < 0.05)
                    {
                        payback -= paymentList[11];
                        printf(" %.2f", paymentList[11]);
                    }
                    while (payback >= 0 && payback < 0.02)
                    {
                        payback -= paymentList[12];
                        printf(" %.2f", paymentList[12]);
                    }
                }
                printf("\n\tThank You  (',')\t\t\t\n");
            }
            //If customer enters lower amount, the message Not enough money! is displayed.
            else if (Payment < totalAmount)
            {
                printf("Not enough money!\n");
                break;
            }
            //If customer enters Equal amount, the The Operation will done and return ! is displayed.
            else if (Payment == totalAmount)
            {
                payback = Payment - totalAmount;
                printf("To return: %.2f \n", payback);
            }
        } //main if
        else
        {
            printf("Wrong input!\n");
            exit(0);
        }
        exit(0);
    } while (totalAmount != 0);
}
