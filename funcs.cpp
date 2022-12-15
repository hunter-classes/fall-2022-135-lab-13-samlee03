#include <iostream>
#include <string>

std::string printRange(int left, int right){
    if (left < right){
        std::string nums;
        return std::to_string (left) + " " + printRange(left + 1, right);
    } else {
        return std::to_string(left);
    }
}

int sumRange(int left, int right){
    if (left <= right){
        return left + sumRange(left + 1, right);      
    } else {
        return 0;
    }
}
int sumArrayInRange(int *arr, int left, int right){
    if (left <= right){
        return arr[left] + sumArrayInRange(arr, left + 1, right);
    } else {
        return 0;
    }
    //return arr[left] + sumArrayInRange(arr[left + 1], right) 
}
int sumArray(int *arr, int size){
    return sumArrayInRange(arr, 0, size - 1);
}

// int sumArray()

bool isAlphanumeric(std::string s){
    if (s.length() == 0){
        return true;
    } else {
        if (!((s[0] >= 48 && s[0] <= 57) || (s[0] >= 65 && s[0] <= 90) || (s[0] >= 97 && s[0] <= 122))){
            return false;
        }
        return isAlphanumeric(s.substr(1));
    }
}

bool nestedParens(std::string s){
    // if (s.length() % 2 == 0){
    //     if (s.length() == 0 || ){
    //         return true;
    //     } else {
    //         return nestedParens(s.substr(1, s.length() - 2))
    //     }
    // } else {
    //     return false;
    // }

    if (s.length() == 0){
        return true;
    } else {
        if (s.length() % 2 != 0){
            return false;
        } else {
            if (s.substr((s.length()/2) - 1, 2) == "()"){
                // std::cout << s.substr(1, s.length() -2) << std::endl;
                // return nestedParens(s.substr(1, s.length() - 2));
                return nestedParens(s.substr(0, (s.length() / 2) - 1) + s.substr(s.length()/2 + 1)); 
            }
            return false;
        }
    }
}