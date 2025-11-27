// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/ 

#include <stdio.h>
int findMajorityElement(int nums[], int n){
    int count = 0 ;
    int candidate = -1; 
    for (int i = 0 ; i<n ; i++){
        if (count == 0){
            candidate = nums[i];
        } 
if (nums[i] == candidate){
    count++;
} else {
    count--;
}
}
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    return (count > n / 2) ? candidate : -1;
}

int main() {
    int nums[] = {3, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int majorityElement = findMajorityElement(nums, n);
    printf("Majority Element: %d\n", majorityElement);
    return 0;
}