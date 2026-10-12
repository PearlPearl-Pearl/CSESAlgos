#include <iostream>

void Repetition(std::string sequence){
    int countA = 0;
    int countC = 0;
    int countG = 0;
    int countT = 0;

    int size = sizeof(sequence)/sizeof(int);

    int max = 0;

    for (int i=0; i<size-1; i++){
        if (sequence[i] == 'A' && sequence[i+1]=='A'){
            countA++;
        }
        else if (sequence[i] == 'C' && sequence[i+1]=='C'){
            countC++;
        }
        else if (sequence[i] == 'G' && sequence[i+1]=='G'){
            countG++;
        }
        else if (sequence[i] == 'T' && sequence[i+1]=='T'){
            countT++;
        }
    }

    max = countA;
    if (countC > max){
        max = countC;
    }
    else if (countG > max){
        max = countG;
    }
    else if (countT > max){
        max = countT;
    }

    std::cout << max+1;
}


int main(){
    std::string sequence;
    std::cin >> sequence;
    
    Repetition(sequence);

    return 0;
}