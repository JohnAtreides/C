#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void dispTitle ()
{
    printf("############################################\n");
    printf("##--                                    --##\n");
    printf("##---        TeamTrack Check Time      ---##\n");
    printf("##--                                    --##\n");
    printf("######################-by-Samuel-Cases-#####\n");
    printf("##--                                    --##\n");
    printf("##--         FORMATS :                  --##\n");
    printf("##--                                    --##\n");
    printf("##--   time   :  HH                     --##\n");
    printf("##--   day    :  DD                     --##\n");
    printf("##--   month  :  MM                     --##\n");
    printf("##--                                    --##\n");
    printf("############################################\n\n");
}


timeDateCheck dataIn (timeDateCheck data)
{
    // LAST TIME CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Time of the last check ?\n");
    printf(" Format : HH  \n");

    do
    {
        scanf("%d", &data.lastTimeCheck);

        if (data.lastTimeCheck >= 24)
        {
            printf("Please enter a number smaller than 24\n");
        }

        else if (data.lastTimeCheck < 0)
        {
            printf(" Please enter a number from 0 to 23\n");
        }

        else if (data.lastTimeCheck>=0 && data.lastTimeCheck<24)
        {
            printf("Last check at = %dh\n", data.lastTimeCheck);
        }

        else
        {
            printf("\nERROR IN LAST TIME CHECK\n");
        }

    }
    while (data.lastTimeCheck<0 || data.lastTimeCheck>=24);


    // LAST DAY CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Day of the last check ?\n");
    printf(" Format : DD  \n");

    do
    {
        scanf("%d", &data.lastDayCheck);

        if (data.lastDayCheck > 31)
        {
            printf("Please enter a number smaller than 31\n");
        }

        else if (data.lastDayCheck < 0)
        {
            printf(" Please enter a number higher than 0\n");
        }

        else if (data.lastDayCheck>0 && data.lastDayCheck<=31)
        {
            printf("Last check the = %d\n", data.lastDayCheck);
        }

        else
        {
            printf("\nERROR IN LAST DAY CHECK\n");
        }

    }
    while (data.lastDayCheck<=0 || data.lastDayCheck>31);


    // LAST MONTH CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Month of the last check ?\n");
    printf(" Format : MM  \n");

    do
    {
        scanf("%d", &data.lastMonthCheck);

        if (data.lastMonthCheck > 12)
        {
            printf("Please enter a number smaller than 12\n");
        }

        else if (data.lastMonthCheck < 0)
        {
            printf(" Please enter a number higher than 0\n");
        }

        else if (data.lastMonthCheck>0 && data.lastMonthCheck<=12)
        {
            printf("Ok !");
        }

        else
        {
            printf("\nERROR IN LAST MONTH CHECK\n");
        }

    }
    while (data.lastMonthCheck<=0 || data.lastMonthCheck>12);


    //CURRENT TIME CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Current time ?\n");
    printf(" Format : HH  \n");
    do
    {
        scanf("%d", &data.currentTime);

        if (data.currentTime >= 24)
        {
            printf("Please enter a number smaller than 24\n");
        }

        else if (data.currentTime < 0)
        {
            printf(" Please enter a number from 0 to 23\n");
        }

        else if (data.currentTime>=0 && data.currentTime<24)
        {
            printf("Last check at = %dh\n", data.currentTime);
        }

        else
        {
            printf("ERROR IN CURRENT TIME CHECK");
        }

    }
    while (data.currentTime<0 || data.currentTime>=24);



// CURRENT DAY CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Current day ?\n");
    printf(" Format : DD  \n");

    do
    {
        scanf("%d", &data.currentDay);

        if (data.currentDay > 31)
        {
            printf("Please enter a number smaller than 31\n");
        }

        else if (data.currentDay < 1)
        {
            printf(" Please enter a number higher than 0\n");
        }

        else if (data.currentDay>0 && data.currentDay<=31)
        {
            printf("Last check the = %d\n", data.currentDay);
        }

        else
        {
            printf("ERROR IN CURRENT DAY CHECK");
        }

    }
    while (data.lastDayCheck<=0 || data.lastDayCheck>31);


    // CURRENT MONTH CHECK
    printf("\n\n\n-------------------------------------------\n");
    printf(" Current ?\n");
    printf(" Format : MM  \n");

    do
    {
        scanf("%d", &data.currentMonth);

        if (data.currentMonth > 12)
        {
            printf("Please enter a number smaller than 12\n");
        }

        else if (data.currentMonth < 0)
        {
            printf(" Please enter a number higher than 0\n");
        }

        else if (data.currentMonth>0 && data.currentMonth<=12)
        {
            printf("Ok !");
        }

        else
        {
            printf("\nERROR IN LAST MONTH CHECK\n");
        }

    }
    while (data.currentMonth<=0 || data.currentMonth>12);


    return data;
}

void dispData(timeDateCheck data)
{
    printf("\n\n\n-------------------------------------------\n");
    printf("LAST CHECK\n");
    printf("the %d / %d / 2020 - at %d h\n\n", data.lastDayCheck, data.lastMonthCheck, data.lastTimeCheck);

    printf("TODAY\n");
    printf("the %d / %d / 2020 - at %d h\n\n", data.currentDay, data.currentMonth, data.currentTime);
}
