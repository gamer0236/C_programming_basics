#include <stdio.h>

//Recipe Functions

void prepareCoconutMilk();
void dhalCurry();
void potatoCurry();
void fishCurry();

int main() {
    dhalCurry();
    printf("\n");
    potatoCurry();
    printf("\n");
    fishCurry();
    return 0;
}

// Recipe of CoconutMilk

void prepareCoconutMilk() {
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("***************************************************************\n");
}

// Recipe of dhalCurry

void dhalCurry() {
    printf("************Dhal Curry****************\n");
    prepareCoconutMilk();
    printf("***Wash and Drain dhal\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.1 t spoon\n");
    printf("***Add pepper = 1 t spoon\n");
    printf("***Add lemon grass\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
}
// Recipe of potatoCurry

void potatoCurry() {
    printf("************Potato Curry****************\n");
    prepareCoconutMilk();
    printf("***Wash and peel potato = 1 kg\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.5 t spoon\n");
    printf("***Add pepper = 2 t spoon\n");
    printf("***Add lemon grass\n");
    printf("*********************************Add tomato\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
}

// Recipe of fishCurry

void fishCurry() {
    printf("************Fish Curry****************\n");
    prepareCoconutMilk();
    printf("***Wash the fish\n");
    printf("*******************Add Spices\n");
    printf("***Add tumeric = 0.5 t spoon\n");
    printf("***Add pepper = 3 t spoon\n");
    printf("***Add lemon grass\n");
    printf("******************************\n");
    printf("***Add salt = 1 t spoon\n");
    printf("***Add water\n");
    printf("***Cook\n");
    printf("***Add coconut milk\n");
}

