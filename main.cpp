// *** Coded By SahilJoseph *** //
# include <iostream>

int sum(int a, int b) {

    int result = a + b;

    return result;

}

int main(int argc, char const *argv[]) {

    while (true) {

        int first_number;
        int second_number;

        std::cout<<"Enter the First Number : ";
        std::cin>>first_number;
        std::cout<<"Enter the Second Number : ";
        std::cin>>second_number;

        int result = sum(first_number, second_number);

        std::cout<<"The sum of "<<first_number<<" and "<<second_number<<" is "<<result<<std::endl;
        
    }

    return 0;
}
