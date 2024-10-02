/*
    Zach Hiesterman
    Computer Science Fall 2024
    Due: October 1st
    Lab 3: User and File I/O
    This lab is for figuring out how to input files and output files to the code.
*/
#include <iostream>
#include <string>
#include "fstream"
#include "MeanStd.cpp"
/*
int getInput(std::string numName);
void printNumber(int number);
*/
int main()
{
    /*std::cout << "We need four numbers from you" << std::endl;

    int number1 = getInput("first");
    int number2 = getInput("second");
    int number3 = getInput("third");
    int number4 = getInput("fourth");

    printNumber(number1);
    printNumber(number2);
    printNumber(number3);
    printNumber(number4);*/

    std::ifstream inFile;
    inFile.open("inMeanStd.dat");
    float number1, number2, number3, number4;
    inFile >> number1 >> number2 >> number3 >> number4;
    inFile.close();

    MeanStd MeanStd;
    float mean = MeanStd.mean(number1, number2, number3, number4);
    std::cout << "The mean of the numbers is: " << mean << std::endl;
    float dev = MeanStd.calcDeviation(number1, number2, number3, number4);
    std::cout << dev << std::endl;
    float std = MeanStd.calcStd(number1, number2, number3, number4);
    std::cout << "The standard deviation of the numbers is:" << std << std::endl;

    

    // file I/O
    std::ofstream outFile;
    outFile.open("output.dat");
    outFile << "The mean of the numbers is: " << mean << std::endl;
    outFile << "The standard deviation of the numbers is:" << std << std::endl;
    outFile.close();

    return 0;
};
/*
int getInput(std::string numName):
{
    std::cout << "Please enter the " << numName << "number: ";
    int input;
    std::cin >> input;
    return input;
}

void printNumber(int number):
{
    std::cout << "You've entered" << number << std::endL;
}
*/