//
//  main.c
//  currency_CC
//
//  Created by Sahil Malhotra on 05/12/15.
//  Copyright © 2015 Sahil Malhotra. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    printf("Test Cases: ");
    scanf(" %d", &t);
    while (t--)
    {
        float chg;
        int counter=0;
        printf("Money: ");
        scanf(" %f", &chg);

        chg=round(chg);
        
        while(chg!=0)
        {
            if(chg>=1000.00)
            {
                counter=counter + (int)chg/1000;
                printf("%d Rs.1000 Note(s)\n", (int)chg/1000);
                chg= (int)chg % 1000;
            }
            else if(chg>=500.00)
            {
                counter=counter + (int)chg/500;
                printf("%d Rs.500 Note(s)\n", (int)chg/500);
                chg= (int)chg % 500;
            }
            else if(chg>=100.00)
            {
                counter=counter + (int)chg/100;
                printf("%d Rs.100 Note(s)\n", (int)chg/100);
                chg= (int)chg % 100;
            }
            else if(chg>=50.00)
            {
                counter=counter + (int)chg/50;
                printf("%d Rs.50 Note(s)\n", (int)chg/50);
                chg= (int)chg % 50;
            }
            else if(chg>=20.00)
            {
                counter=counter + (int)chg/20;
                printf("%d Rs.20 Note(s)\n", (int)chg/20);
                chg= (int)chg % 20;
            }
            else if(chg>=10.00)
            {
                counter=counter + (int)chg/10;
                printf("%d Rs.10 Note(s)\n", (int)chg/10);
                chg= (int)chg % 10;
            }
            else if(chg>=5.00)
            {
                counter=counter + (int)chg/5;
                printf("%d Rs.5 Note(s)\n", (int)chg/5);
                chg= (int)chg % 5;
            }
            else if(chg>=2.00)
            {
                counter=counter + (int)chg/2;
                printf("%d Rs.2 Note(s)\n", (int)chg/2);
                chg= (int)chg % 2;
            }
            else if(chg>=1.00)
            {
                counter=counter + (int)chg/1;
                printf("%d Rs.1 Note(s)\n", (int)chg/1);
                chg= (int)chg % 1;
            }
        }
        printf("\nTotal Note(s): %d\n\n", counter);
    }
    return 0;
}