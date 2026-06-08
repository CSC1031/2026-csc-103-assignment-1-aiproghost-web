#include <stdio.h>
#include <stdlib.h>

int main()
{
    short mathematics,science,english;
    int total;
    float average;
    char grade[1];


    printf("Enter Your Mathematics Marks   : ");
    scanf("%hd",&mathematics);
    printf("Enter Your Science Marks       : ");
    scanf("%hd",&science);
    printf("Enter Your English Marks       : ");
    scanf("%hd",&english);

    if (mathematics>100 || science>100 || english>100 || mathematics<0 || science <0 || english < 0){
        printf("\n\n\t\tYou entered wrong marks above 100 ! \n\t\t   ***Recheck and try again!***\n\t\t_________________________________");

    }
    else {
    total = mathematics + science + english;
    average = total/3.0;
    printf("\nTotal: %d\n",total);
    printf("Average: %.2f\n",average);

        if (average<=100 && average >=80)
            printf("Grade A");
        else if (average>=70)
            printf("Grade B");
        else if (average>=60)
            printf("Grade C");

        else if (average>=50)
            printf("Grade D");
            else {
                printf("Grade F");
            }

    }
    if (average<=100 && average>=40)
        printf("\nResult: PASS\n");
    else {
        printf("\nResult: FAIL\n");
    }

    if (mathematics>science && mathematics>english)
        printf("\nYou get highest marks for mathematics\n");
    else if (science>mathematics&& science >english)
        printf("\nYou get highest marks for science\n");

    else if (english>mathematics && english > science)
        printf("\nYou get highest marks for English\n");
    else {
        printf("\nYou get same marks for some subjects \n");
    }




    return 0;
}
