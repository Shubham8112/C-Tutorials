// Problem Statement
// A fitness tracking application aims to motivate users by highlighting 
// their progress in physical activity.
// The application focuses on users' 
// daily step counts, tracked over a series of days.
// The goal is to develop a program that efficiently searches through sorted
//  arrays of daily step counts to find and display instances where a user's
//  step count has increased from one day to the next. 
// This solution should employ a binary search algorithm to enhance performance, 
// especially beneficial for users with a long history of tracked data.
// Input format :
// The first line of input consists of an integer N, representing the number of 
// days for which step counts are tracked.
// The second line consists of N distinct space-separated integers, representing the list of 
// daily step counts.

// Output format :

// The output prints "Consecutive step counts: " followed by the step counts.

// If no consecutive counts were found, print "No consecutive step counts found."




// Refer to the sample output for formatting specifications.

// Code constraints :

// 1 ≤ N ≤ 10

// 1 ≤ step count ≤ 100

// Sample test cases :
// Input 1 :
// 7
// 12 15 34 47 48 57 69
// Output 1 :
// Consecutive step counts: 47 and 48
// Input 2 :
// 6
// 24 25 37 48 98 100
// Output 2 :
// Consecutive step counts: 24 and 25
// Input 3 :
// 4
// 14 34 59 98
// Output 3 :
// No consecutive step counts found.
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int consecutive_found = 0;  // Flag to indicate if consecutive step counts were found
    for (int i = 0; i < n ; i++) {
        if (arr[i + 1] == arr[i] + 1) {
            if (!consecutive_found) {
                printf("Consecutive step counts: %d and %d", arr[i], arr[i + 1]);
                consecutive_found = 1;
            } else {
                printf(", %d and %d", arr[i], arr[i + 1]);
            }
        }
    }
    if (!consecutive_found) {
        printf("No consecutive step counts found.");
    }
    return 0;
}