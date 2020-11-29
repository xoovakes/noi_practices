#include <cstdio>
#include <windows.h>
#define qdo 262
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#define b(a,b) Beep(a,b)

int pai = 600, ban = pai / 2;

int main(){

b(la, ban);
b(si, ban);
b(do1, pai + ban);
b(si, ban);
b(do1, pai);
b(mi1, pai);
b(si, pai + pai + pai);

b(mi, ban);
b(mi, ban);
b(la, pai + ban);
b(so, ban);
b(la, pai);
b(do1, pai);
b(so, pai + pai + pai);

b(mi, ban);
b(fa, pai + ban);
b(mi, ban);
b(fa, pai);
b(do1, pai);
b(mi, pai + pai);

b(0, ban);
b(do1, ban);
b(do1, ban);
b(do1, ban);
b(si, pai + ban);
b(fa, ban);
b(fa, pai);
b(si, pai);
b(si, pai + pai);

b(0, pai);

b(la, ban);
b(si, ban);
b(do1, pai + ban);
b(si, ban);
b(do1, pai);
b(mi1, pai);
b(si, pai + pai + pai);

b(mi, ban);
b(mi, ban);
b(la, pai + ban);
b(so, ban);
b(la, pai);
b(do1, pai);
b(so, pai + pai + pai);


b(re, ban);
b(mi, ban);
b(fa, pai);
b(do1, ban);
b(si, ban);
b(si, ban);
b(do1, ban);
b(do1, pai);
b(re1, ban);
b(re1, ban);
b(mi1, ban);
b(do1, ban);
b(do1, pai + pai);

b(do1, ban);
b(si, ban);
b(la, ban);
b(la, ban);
b(si, pai);
b(so, pai);
b(la, pai + pai + pai);

b(do1, ban);
b(re1, ban);
b(mi1, pai + ban);
b(re1, ban);
b(mi1, pai);
b(so1, pai);
b(re1, pai + pai + pai);

b(so, ban);
b(so, ban);
b(do1, pai + ban);
b(si, ban);
b(do1, pai);
b(mi1, pai);
b(mi1, pai + pai + pai + pai);
b(la, ban);
b(si, ban);
b(do1, pai);
b(si, pai);
b(re1, ban);
b(re1, ban);
b(do1, pai + ban);
b(so, ban);
b(so, pai + pai);

b(fa1, pai);
b(mi1, pai);
b(re1, pai);
b(do1, pai);
b(mi1, pai + pai + pai);

b(mi1, pai);
b(la1, pai+pai);
b(so1, pai);
b(so1, pai);
b(mi1, ban);
b(re1, ban);
b(do1, pai+pai);

b(0, ban);
b(do1, ban);
b(re1, pai);
b(do1, ban);
b(re1, ban);
b(re1, pai);
b(so1, pai);
b(mi1, pai + pai + pai);
b(mi1, pai);
b(la1, pai + pai);
b(so1, pai + pai);

b(mi1, ban);
b(re1, ban);
b(do1, pai + pai);
b(0, ban);
b(do1, ban);
b(re1, pai);
b(do1, ban);
b(re1, ban);
b(re1, pai);
b(si, pai);
b(la, pai + pai + pai);

return 0;
}
