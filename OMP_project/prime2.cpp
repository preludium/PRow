//#include <stdio.h>
//#include <omp.h>
//#include <time.h>
//#include <math.h>
//#include <iostream>
//
//#define NUM_THREADS 8
//#define SHOW_RESULTS false
//
//bool isPrime(int num) {
//    for (int i = 2; i < num; ++i) {
//        if (num % i == 0)
//            return false;
//    }
//    return true;
//}
//
//
//int main(int argc, char* argv[])
//{
//	double startClock, endClock;
//	int iterPrime, iterNum;
//    int *numbers, *primes;
//    int start, end;
//
//	omp_set_num_threads(NUM_THREADS);
//    
//    std::cout << "Type start and end of numbers range: ";
//    std::cin >> start >> end;
//    while (end < start || std::cin.fail() || start < 2) {
//        std::cout << "Incorrect data" << std::endl;
//        std::cout << "Type start and end of numbers range: ";
//        std::cin >> start >> end;
//        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    }
//
//
//    numbers = new int[end - start];
//    primes = new int[round(sqrt(end)) - 2];
//    iterNum = 0;
//    for (int i = start; i <= end; ++i) {
//        numbers[iterNum] = i;
//        ++iterNum;
//    }
//
//	startClock = omp_get_wtime();
//
//    primes[0] = 2;
//    iterPrime = 1;
//    for (int i = 3; i <= round(sqrt(end)); ++i) {
//        if (i % 2 == 0)
//            continue;
//
//        if (isPrime(i)) {
//            primes[iterPrime] = i;
//            ++iterPrime;
//        }
//    }
//
//    for (int i = 0; i < iterNum; ++i) {
//        for (int j = 0; j < iterPrime; ++j) {
//            if (numbers[i] == primes[j]) {
//                break;
//            }
//
//            if (numbers[i] % primes[j] == 0) {
//                numbers[i] = 0;
//                break;
//            }
//        }
//    }
//
//	endClock = omp_get_wtime();
//
//    if (SHOW_RESULTS) {
//        std::cout << std::endl << "Result: ";
//        for (int i = 0; i < iterNum; ++i) {
//            if (numbers[i] != 0)
//                std::cout << numbers[i] << ", ";
//        }
//        std::cout << std::endl;
//    }
//	printf("Czas przetwarzania wynosi %f sekund\n", (endClock - startClock));
//	return 0;
//}
