#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
    int no;
    char ad[10];
};

void yazdir(struct ogrenci og1) {
    printf("%s %d ",og1.ad,og1.no);
}

int main() {
    struct ogrenci og1;
    og1.no = 3;
    strcpy(og1.ad,"veysel"); 

    yazdir(og1);
    
}
