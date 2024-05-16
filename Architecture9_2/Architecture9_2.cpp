

#include <iostream>

int main()
{
    int8_t arr[11] = { 2, 3, 10, 12, 20, 1, 30, 17, 29, 0, 5 }; 
    int8_t res = 0;
    __asm {
        mov ecx, 11
        lea esi, arr
        xor bl, bl
        loo:
            lods
            cmp al, 7
            jl less
            inc bl
            loop loo

        less:
            loop loo

        mov res, bl
    }
    std::cout << "Amout of numbers, that equal or greater than 7: " << (int)res;
    return 0;
}

