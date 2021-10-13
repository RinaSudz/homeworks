#include <iostream>
#include "ComplexNumbers.h"
int main()
{
Complex_Numbers obj1(33, 33);
Complex_Numbers obj2(11 , 24);
Complex_Numbers obj3(obj2);
Complex_Numbers obj4(21 , 67);
Complex_Numbers obj5(134, 58);
Complex_Numbers obj6(154, 53);
Complex_Numbers obj7(124, 236);
Complex_Numbers obj8(14, 242);
std::vector<Complex_Numbers> c_numbers;
c_numbers.push_back(obj1);
c_numbers.push_back(obj2);
c_numbers.push_back(obj3);
c_numbers.push_back(obj4);
c_numbers.push_back(obj5);
c_numbers.push_back(obj6);
c_numbers.push_back(obj7);
c_numbers.push_back(obj8);
sort_complex_numbers(c_numbers);
for (int i = 0; i < c_numbers.size(); ++i)
{
std::cout << c_numbers[i].absolute_value() << " ";
}
std::cout << std::endl;
}
