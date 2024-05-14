#ifndef INTERN_H
#define INTERN_H

#define HISTORYSIZE 5
typedef struct HistoryArray
{
    int begin;
    int end;
    char history_cmd[5][100];
} HistoryArray;
void history(HistoryArray* a);
#endif
