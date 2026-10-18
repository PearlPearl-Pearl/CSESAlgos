#include <iostream>
#include <cmath>

long long findDiag(const long long& x){
    long long result = x + ((x-1)*(x-1));
    return result;
}

bool isEven(const long long& x){
    if (x%2==0){
        return true;
    }
    else{
        return false;
    }
}

void NumberSpiral(const long long& row, const long long& column){
    long long max = std::max(row, column);
    
    long long diag = findDiag(max);

    if (max != row && isEven(column)){
        diag -= (max-row);
    }
    else if (max != row && !isEven(column)){
        diag += (max-row);
    }
    else if (max != column && !isEven(row)){
        diag -= (max-column);
    }
    else if (max != column && isEven(row)){
        diag += (max-column);
    }

    std::cout << diag << '\n';
}

int main(){

    int t;
    std::cin >> t;

    for (int count=0; count < t; count ++){
        long long row;
        long long column;

        std::cin >> row >> column;

        NumberSpiral(row, column);
    }

    return 0;
}