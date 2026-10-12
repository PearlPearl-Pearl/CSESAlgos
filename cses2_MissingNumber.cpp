#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


void getInput(int n, int array[]){
    for (int i=0; i<n-1; i++){
        int a;
        std::cin >> a;
        array[i] = a;
    }
}

void missingNumber(int n, int array[]){
    int expected_sum = 0;
    int actual_sum = 0;

    for (int number=1; number <= n; number++){
        expected_sum += number;
    }

    for (int index=0; index<n-1; index++){
        actual_sum += array[index];       
    }

    std::cout << expected_sum - actual_sum;
}

int main(){
    int n;
    std::cin >> n;

    int array[n-1] = {0};

    getInput(n, array);

    missingNumber(n, array);

    return 0;
}