/* Program practice 3.2 */
#include<stdio.h>

int main(void)
{
  unsigned int day=1,
    month=1,
    year=1;
  /*
  enum dayEnd {st, nd, rd, th} theDay;
  enum montheStr { January, Febuary, March, April, May, June,
		   July, August, September, October, November,
		   December} theMonth;
  */
  printf("\nPlease input three unsigned number present the date DD MM YYY\n");
  scanf("%d %d %d", &day, &month, &year);
  if(month <=12){
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 12:
      if(day>31){
	  printf("\nDay too big");
	  return 0;
      }
	break;
    case 2:
	if((year/100!=0&&year/4==0)||(year/400==0)){
	  if(day>29){
	    printf("\nDay too big");
	    return 0;
	  }
	  break;
	}else{
	  if(day>28){
	    printf("\nDay too big");
	    return 0;
	  }
	  break;
	}
      break;
    default:
      if(day>30){
	  printf("\nDay too big");
	  return 0;
      }
      break;
    }
  }else{
    printf("\nMonth too big");
    return 0;
  }
  //  printf("\n You input %d %d %d\n", day, month, year);

  switch(day){
  case 1: case 11: case 21: case 31:
    printf("\n%dst ", day);
    break;
  case 2: case 12: case 22:
    printf("\n%dnd ", day);
    break;
  case 3: case 13: case 23:
    printf("\n%drd ", day);
    break;
  default:
    printf("\n%dth ", day);
    break;
  }

  switch(month){
  case 1:
    printf("January");
    break;
  case 2:
    printf("Febuary");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;
  default:
    //goto MonthError;
    printf("\nPlease input a currect month\n");
    return 0;
    //    break;
  }

  printf(" %d", year);

  return 1;
}
