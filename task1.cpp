#include<iostream>
void compare_lsb_msb(unsigned int);
int main() {
    unsigned int num = 0;
    std::cin >> num;
    compare_lsb_msb(num);
    return 0;
}
void compare_lsb_msb(unsigned int number) {
    unsigned int lsb = number & 1;
    unsigned int msb = number >> (sizeof(int) * 8 - 1) & 1;
    if (lsb == msb) {
        std::cout<< "true";
    }
    else { std::cout << "false"; }
}