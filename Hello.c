#include <stdio.h>
#include <time.h>


int main(void){
    char name[15];
    printf("Enter your name\n");
    scanf("%s",name);
    time_t now;
    struct tm * timeinfo;
    time (&now);
    timeinfo = localtime(&now);
    int timeOfDay = timeinfo->tm_hour;

    if(timeOfDay >= 06 && timeOfDay < 12){printf("Good Morning, %s!!",name);}
    else if(timeOfDay >= 12 && timeOfDay < 17){printf("Good Afternoon, %s!!",name);}
    else if(timeOfDay >= 17 && timeOfDay < 22){printf("Good Evening, %s!!",name);}
    else {printf("Good Night, %s!!",name);}
}
