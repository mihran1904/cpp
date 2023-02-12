#include<iostream>
int main(){
unsigned int num = 0;
std::cin >> num;
unsigned int count_of_bit1 = 0;
unsigned int count_of_bit0 = 0;
while (num!=0){
    count_of_bit1 += num % 2;
    num = num / 2;
}
count_of_bit0 = sizeof(int) * 8 - count_of_bit1;
std::cout << "in your num bit 0 count is:" << count_of_bit0 << "count of bit 1:" << count_of_bit1;
return 0;
}
