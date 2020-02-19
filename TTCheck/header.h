#ifndef HEADER
#define HEADER


// --- STRUCT ---
typedef struct timeDateCheck
{
    int lastTimeCheck;
    int lastDayCheck;
    int lastMonthCheck;
    int currentTime;
    int currentDay;
    int currentMonth;
} timeDateCheck;


// --- PROTO ---
void dispTitle();
void dispData(timeDateCheck data);
timeDateCheck dataIn(timeDateCheck data);


#endif // HEADER
