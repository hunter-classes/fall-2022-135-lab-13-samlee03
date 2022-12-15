#include <iostream>
#include "funcs.h"

int main(){
    std::cout << "Task A" << std::endl;
    std::string str = printRange(1, 5);
    std::string str1 = printRange(2, 10);
    std::cout << "printRange(1, 5): " << str << std::endl;
    std::cout << "printRange(2, 10): " << str1 << std::endl;

    // std::string str2 = sumRange(1, 3);
    std::cout << "\nTask B\n";
    std::cout << "sumRange(1, 3): " << sumRange(1,3) << std::endl;
    std::cout << "sumRange(-2, 10): " << sumRange(-2, 10) << std::endl;
    int arr1[5] = {5, 10, 15, 20, 25};
    // int *arr = &arr1;
    //arr[0] = 3;
    //arr[1] = 2;
    // arr--;
    // delete[] arr;
    std::cout << "\nTask C\nint arr1[5] = {5, 10, 15, 20, 25};\n";
    std::cout << "sumArray(arr, 5): " << sumArray(arr1, 5) << std::endl;
    std::cout << "\nTask D\n";
    std::cout << "isAlphanumeric(\"allnumbers123andletters\"): " << isAlphanumeric("allnumbers123andletters") << std::endl;
    std::cout << "isAlphanumeric(\"words with space\"): " << isAlphanumeric("words with space") << std::endl;
    std::cout << "\nTask E\n";
    std::cout << "nestedParens((11)): " <<  nestedParens("((11))") << std::endl;
    std::cout << "nestedParens((())): " <<  nestedParens("(())") << std::endl;
    
    
    return 0;
}