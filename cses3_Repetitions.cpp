#include <iostream>

void Repetition(std::string sequence){
    int count = 1;
    int max = 1;

    int lenSequence = sequence.length();

    for (int i=1; i<lenSequence; i++){
        if (sequence[i] == sequence[i-1]){
            count++;
            if (count > max){max = count;}
        }
        else{
            count = 1;
        }
    }
    std::cout << max;
}


int main(){
    std::string sequence;
    std::cin >> sequence;
    
    Repetition(sequence);

    return 0;
}