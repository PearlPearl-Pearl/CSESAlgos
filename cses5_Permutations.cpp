#include <iostream>
#include <vector>
#include <numeric>

bool isEven(int n){
    if (n%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

void beautifulPermutation(int n){
    std::vector<int> array (n, 0);
    
    if (isEven(n) && n > 2){
        int pairTotal = n+1;
        for (int number=1; number<=n/2; number++){
            if (!isEven(number)){
                array[(n/2)-number] = number;
                array[(n/2)+number-1] = pairTotal-number;
            }
            else{
                array[(n/2)+number-1] = number;
                array[(n/2)-number] = pairTotal-number;
            }
        } 

        for (int count=0; count<n; count++){
            std::cout << array[count] << ' ';
        }
    }

    else if (!isEven(n) && n!=3){
        array[(n-1)/2] = n;

        for (int number=1; number<n; number++){
            if (isEven(number)){
                array[(number+n-1)/2] = number;
            }
            else{
                array[((n-2)-number)/2] = number;
            }
        }

        for (int count=0; count<n; count++){
            std::cout << array[count] << ' ';
        }
    }

    else{
        std::cout << "NO SOLUTION";
    }
}

int main(){
    int n = 0;

    std::cin >> n;
    beautifulPermutation(n);

    return 0;
}