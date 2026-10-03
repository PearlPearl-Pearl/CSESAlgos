#include <iostream>
#include <string>


void getInput(int n, int* array){
    for (int i=0; i<n-1; i++){
        std::cin >> array[i];
    }
}

void missingNumber(int n, int array[]){

    for (int number=1; number <= n; number++){
        int num = number;
        int found = 0;

        for (int index=0; index<n-1; index++){
            if (array[index] == number){
                found = 1;
                break;
            }

        }
        if (found==0){
            std::cout << num;
            break;
        }
    }
}

int main(){
    int n;
    std::cin >> n;

    int* array = new int[n-1]();

    getInput(n, array);

    missingNumber(n, array);

    delete[] array;

    return 0;
}