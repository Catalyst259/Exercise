#include <stdio.h>
#include <string.h>

const char *haab[19] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
const char *tz[20] = {"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

int haab_index(const char *m){
    for (int i = 0; i < 19; ++i) if (strcmp(m, haab[i]) == 0) return i;
    return -1;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n", num);
    for(int i = 0; i < num; i++){
        int day, year;
        char mon[19];
        scanf("%d. %s %d",&day, mon, &year);
        int mi = haab_index(mon);
        int all = year * 365 + mi * 20 + day;
        int tz_year = all / 260;
        all = all % 260;
        int tz_num = all % 13 + 1;
        const char *tzday = tz[all % 20];
        printf("%d %s %d\n",tz_num, tzday, tz_year);
    }
}