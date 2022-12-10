
#include "lib.h"
#include <iostream>
using namespace std;
float max (float a[],int n){
    float b=0;

    for (int i = 0; i <= n ; i++) {
        if ( a[i]>b){
            b=a[i];
        }
    }
    return b;
}
