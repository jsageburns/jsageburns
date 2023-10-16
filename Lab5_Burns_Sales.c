/*Jordan Burns, EECS 348 Friday 1:00 PM Lab
Purpose: Generates sales report.*/

#include <stdio.h>

int main() {
    //initializing all monthly sales values to 0
    double janval = 0;
    double febval = 0;
    double marval = 0;
    double aprval = 0;
    double mayval = 0;
    double junval = 0;
    double julval = 0;
    double augval = 0;
    double sepval = 0;
    double octval = 0;
    double novval = 0;
    double decval = 0;

    //getting each months value.

    printf("Enter sales figures from January.");
    scanf("%lf", &janval);
    printf("Enter sales figures from February.");
    scanf("%lf", &febval);
    printf("Enter sales figures from March.");
    scanf("%lf", &marval);
    printf("Enter sales figures from April.");
    scanf("%lf", &aprval);
    printf("Enter sales figures from May.");
    scanf("%lf", &mayval);
    printf("Enter sales figures from June.");
    scanf("%lf", &junval);
    printf("Enter sales figures from July.");
    scanf("%lf", &julval);
    printf("Enter sales figures from August.");
    scanf("%lf", &augval);
    printf("Enter sales figures from September.");
    scanf("%lf", &sepval);
    printf("Enter sales figures from October.");
    scanf("%lf", &octval);
    printf("Enter sales figures from November.");
    scanf("%lf", &novval);
    printf("Enter sales figures from December.");
    scanf("%lf", &decval);
    


    //Sales Report

    printf("Monthly sales report for 2023: \n\n");
    printf("Month       Sales\n");
    printf("January     $%.2lf\n",janval);
    printf("February    $%.2lf\n",febval);
    printf("March       $%.2lf\n",marval);
    printf("April       $%.2lf\n",aprval);
    printf("May         $%.2lf\n",mayval);
    printf("June        $%.2lf\n",junval);
    printf("July        $%.2lf\n",julval);
    printf("August      $%.2lf\n",augval);
    printf("September   $%.2lf\n",sepval);
    printf("October     $%.2lf\n",octval);
    printf("November    $%.2lf\n",novval);
    printf("December    $%.2lf\n\n",decval);


    //Sales Summary

        // Minimum Sales 
    printf("Sales summary:\n\n");
    double data[] = {janval,febval,marval,aprval,mayval,junval,julval,augval,sepval,octval,novval,decval};
    int month;
    char *month_str = "";

    double temp = data[0];
    for (int i = 0; i < 12; i++) {
        if (data[i] < temp) {
            temp = data[i];
            month = i;
            


        }
    }


    if (month == 0) {
        month_str = "January";
    } 
    else if (month == 1) {
        month_str = "February";
    }
    else if (month == 2) {
        month_str = "March";
    }
    else if (month == 3) {
        month_str = "April";
    }
    else if (month == 4) {
        month_str = "May";
    }
    else if (month == 5) {
        month_str = "June";
    }
    else if (month == 6) {
        month_str = "July";
    }
    else if (month == 7) {
        month_str = "August";
    }
    else if (month == 8) {
        month_str = "September";
    }
    else if (month == 9) {
        month_str = "October";
    }
    else if (month == 10) {
        month_str = "November";
    }
    else if (month == 11) {
        month_str = "December";
    }
    else {
        printf("Error.");
    }




    printf("Minimum sales:  $%.2lf  ", temp);
    printf("(%s)\n", month_str);
    
    //Maximum Sales
    int month_max;
    char *max_month_str = "";
    double max_temp = data[0];
    for (int i = 0; i < 12; i++) {
        if (data[i] > max_temp) {
            max_temp = data[i];
            month_max = i;
            


        }
    }

if (month_max == 0) {
        max_month_str = "January";
    } 
    else if (month_max == 1) {
        max_month_str = "February";
    }
    else if (month_max == 2) {
        max_month_str = "March";
    }
    else if (month_max == 3) {
        max_month_str = "April";
    }
    else if (month_max == 4) {
        max_month_str = "May";
    }
    else if (month_max == 5) {
        max_month_str = "June";
    }
    else if (month_max == 6) {
        max_month_str = "July";
    }
    else if (month_max == 7) {
        max_month_str = "August";
    }
    else if (month_max == 8) {
        max_month_str = "September";
    }
    else if (month_max == 9) {
        max_month_str = "October";
    }
    else if (month_max == 10) {
        max_month_str = "November";
    }
    else if (month_max == 11) {
        max_month_str = "December";
    }
    else {
        printf("Error.");
    }

    printf("Maximum sales:  $%.2lf  ", max_temp);
    printf("(%s)\n", max_month_str);


    //Average Sales
    double sum = 0;
    for (int i = 0; i < 13; i++) {
        sum = sum + data[i];
    
    }
    
    sum = (sum / 12);
    printf("Average sales:  $%.2lf  \n\n", sum);

// Six-Month Moving Average Report

    //jan to june
    double janjune_sum = 0;
    for (int i = 0; i < 6; i++) {
        janjune_sum = janjune_sum + data[i];
    
    }
    janjune_sum = (janjune_sum / 6);
   
    //feb to july
    double febjul_sum = 0;
    for (int i = 1; i < 7; i++) {
        febjul_sum = febjul_sum + data[i];
    
    }
    febjul_sum = (febjul_sum / 6);

    //march to aug
    double maraug_sum = 0;
    for (int i = 2; i < 8; i++) {
        maraug_sum = maraug_sum + data[i];
    
    }
    maraug_sum = (maraug_sum / 6);

    //april to sep
    double aprsep_sum = 0;
    for (int i = 3; i < 9; i++) {
        aprsep_sum = aprsep_sum + data[i];
    
    }
    aprsep_sum = (aprsep_sum / 6);

    //may to oct
    double mayoct_sum = 0;
    for (int i = 4; i < 10; i++) {
        mayoct_sum = mayoct_sum + data[i];
    
    }
    mayoct_sum = (mayoct_sum / 6);

    //june to nov
    double junenov_sum = 0;
    for (int i = 5; i < 11; i++) {
        junenov_sum = junenov_sum + data[i];
    
    }
    junenov_sum = (junenov_sum / 6);

    //july to dec
    double juldec_sum = 0;
    for (int i = 6; i < 12; i++) {
        juldec_sum = juldec_sum + data[i];
    
    }
    juldec_sum = (juldec_sum / 6);

    printf("Six-Month Moving Average Report:\n\n");
    printf("January    -   June         $%.2lf\n",janjune_sum);
    printf("February   -   July         $%.2lf\n",febjul_sum);
    printf("March      -   August       $%.2lf\n",maraug_sum);
    printf("April      -   September    $%.2lf\n",aprsep_sum);
    printf("May        -   October      $%.2lf\n",mayoct_sum);
    printf("June       -   November     $%.2lf\n",junenov_sum);
    printf("July       -   December     $%.2lf\n\n",juldec_sum);

//Sales Report
    printf("Sales Report (Highest to Lowest):\n\n");
    printf("Month   		Sales\n");

    //sort array from highest to lowest, keep months in mind?????
    
    double temp_2 = 0;
    int temp_2_month = 0;
    int months[] = {0,1,2,3,4,5,6,7,8,9,10,11};
    for (int i = 0; i < 12; i++) 
    {
		for (int x=0; x<(11-i); x++) 
		{
			if (data[x] > data[x+1]) 
			{
				temp_2 = data[x];
				temp_2_month = months[x];
				
				data[x] = data[x+1];
				months[x] = months[x+1];
				
				data[x+1] = temp_2;
				months[x+1] = temp_2_month;
			}
		}
	}
	
	char* months_str[12];
	for (int m=0; m<12; m++) 
	{
		if (months[m] == 0) {
        months_str[m] = "January	";
		} 
		else if (months[m] == 1) {
			months_str[m] = "February";
		}
		else if (months[m] == 2) {
			months_str[m] = "March	";
		}
		else if (months[m] == 3) {
			months_str[m] = "April	";
		}
		else if (months[m] == 4) {
			months_str[m] = "May	";
		}
		else if (months[m] == 5) {
			months_str[m] = "June	";
		}
		else if (months[m] == 6) {
			months_str[m] = "July	";
		}
		else if (months[m] == 7) {
			months_str[m] = "August	";
		}
		else if (months[m] == 8) {
			months_str[m] = "September";
		}
		else if (months[m] == 9) {
			months_str[m] = "October	";
		}
		else if (months[m] == 10) {
			months_str[m] = "November";
		}
		else if (months[m] == 11) {
			months_str[m] = "December";
		}
		else {
			printf("Error.");
		}
	}
    
    printf("%s		$%-.2lf\n",months_str[11], data[11]);
    printf("%s		$%-.2lf\n",months_str[10], data[10]);
    printf("%s		$%-.2lf\n",months_str[9], data[9]);
    printf("%s		$%-.2lf\n",months_str[8], data[8]);
    printf("%s		$%-.2lf\n",months_str[7], data[7]);
    printf("%s		$%-.2lf\n",months_str[6], data[6]);
    printf("%s		$%-.2lf\n",months_str[5], data[5]);
    printf("%s		$%-.2lf\n",months_str[4], data[4]);
    printf("%s		$%-.2lf\n",months_str[3], data[3]);
    printf("%s		$%-.2lf\n",months_str[2], data[2]);
    printf("%s		$%-.2lf\n",months_str[1], data[1]);
    printf("%s		$%-.2lf\n",months_str[0], data[0]);


    return 0;
}

