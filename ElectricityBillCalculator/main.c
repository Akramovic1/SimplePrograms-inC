#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Welcome ... ");
    printf("Please Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amt = unit * 0.3+1;
    }
    else if(unit <= 100)
    {
        amt = 50*0.3+2 + ((unit-50) * 0.4);
    }
    else if(unit <= 200)
    {
        amt = 50*0.3+50*0.4+6+ ((unit-100) * 0.5);
    }
    else if(unit <= 350)
        {
        amt = 50*0.3+50*0.4+100*0.5+11+ ((unit-200) * 0.82);
    }
    else if(unit <= 650)
    {
        amt = 50*0.3+50*0.4+100*0.5+150*0.82+15+ ((unit-350) * 1);
    }
    else if(unit <= 1000)
    {
        amt = 50*0.3+50*0.4+100*0.5+150*0.82+200*0.82+25+ ((unit-650) * 1.40);
    }
    else
    {
        amt = 50*0.3+50*0.4+100*0.5+150*0.82+200*0.82+350*1+40+ ((unit-1000) * 1.45);
    }


    total_amt  = amt ;

     printf("Electricity Bill =  %.2f egp this price included approximate cleaning expenses ", total_amt);
     printf(" .......press any key to close the program /// ");

     system("pause");
     return 0;

}
