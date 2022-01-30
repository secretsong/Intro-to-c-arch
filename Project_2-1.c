//Sam Feuerborn
//9-24-2020
//Time since 1970

#include <stdio.h>
#include <time.h>

int main(void){
	
	//declares current time of ran project
	time_t now;
	 now = time(NULL);
	 
	 //declares how many seconds are in each time unit
	 int sec_per_min = 60;	 
	 int sec_per_hour = sec_per_min * 60;	 	 
	 int sec_per_day = sec_per_hour * 24;	 	 
	 int sec_per_month = sec_per_day * 30.42;	 	 
	int sec_per_year = sec_per_day * 365;
	
	//calculates and declares how many years since 1970	 
   printf("time since January 1, 1970-\n");
   printf("years: %ld\n", now/sec_per_year);
   
   //calculates and declares how many months since jan 1970 
   int mnth_sec_left = now%sec_per_year;
   int month = mnth_sec_left/sec_per_month;
   printf("months: %d\n", month);
   
   //calculates and declares how days since jan 1 1970	 
   int day_sec_left = mnth_sec_left%sec_per_month;
   int day = day_sec_left/sec_per_hour;
   printf("days: %d\n", day);
   
   //calculates and declares how many hours since jan 1 1970	 
      int hour_per_sec = day%sec_per_hour;
      int hour = hour_per_sec / 1;
   printf("hours: %d\n", hour);

   return(0);
}
