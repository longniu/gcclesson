/* Practice of 2.4*/
#include<stdio.h>

int main(void){
  float tal_hours_week = 0.0f, salary_week = 0.0f, temp_dol = 0.0f,
    cents = 0.0f;

  int dol= 0;
  
  printf("Please type in the salary of week: ");
  scanf("%f", &salary_week);

  printf("\nPlease type in the worked hours one week: ");
  scanf("%f", &tal_hours_week);

  temp_dol = salary_week / tal_hours_week;

  dol =(int)temp_dol;
  /*  cents = (int)(temp_dol*100) - ((int)temp_dol)*100; */
  cents = (temp_dol - dol)*100;
  printf("\nYour average hourly pay rate is %d dollars and %.0f cents", dol, cents);

}
