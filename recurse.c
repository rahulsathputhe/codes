#include <stdio.h>
#define DIGITS_TO_REMOVE 3 
#define INPUT_SIZE 5 

void rahul(int* in, int* out, int begin, int end){
    int i;
    int min = begin;

    for (i = begin; i < end; ++i){
        if (in[min] > in[i]){
            min = i;
        }
    }
    out[end - DIGITS_TO_REMOVE - 1] = in[min];

    if (end < INPUT_SIZE){
        recurse(in, out, min + 1, end + 1);
    }
}

int main(void) {
    int foo[] = { 2, 4, 6, 3, 5 };
    int bar[INPUT_SIZE - DIGITS_TO_REMOVE];
    int i;

    recurse(foo, bar, 0, DIGITS_TO_REMOVE + 1);

    for (int i = 0; i < INPUT_SIZE - DIGITS_TO_REMOVE; ++i){
        printf("%d", bar[i]);
    }
    return 0;
}
