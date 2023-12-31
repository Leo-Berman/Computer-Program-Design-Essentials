#include "p02.h"
float dot_product(float v[], float u[], int n){
    int i;
    float result = 0;
    for (i = 0; i < n; i++)
    {
    result += v[i]*u[i];
    }
    return result;
}
