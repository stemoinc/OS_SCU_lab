#include "intern.h"

void history(HistoryArray* a) {
    int iterator = a->begin;
    int index = 1;
    while (iterator != a->end) {
        printf("%d  %s/n", index, a->history_cmd[iterator]);
        iterator = (iterator + 1) % HISTORYSIZE;
    }
}  // call history cmd