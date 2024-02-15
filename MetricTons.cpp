//MetricTons.cpp
//Carlos Romero
//carlosromero4434@gmail.com
//Chapter two practice program 1: 
//
//A metric ton is 35,273.92 ounces. Write a program that will read the
//weight of a package of breakfast cereal in ounces and output the weight
//in metric tons as well as the number of boxes needed to yield 1 metric
//ton of cereal. Your program should allow the user to repreat this calculation
//as often as the user wishes.
//
//Last Changed: January 4, 2023 Anno Domini
#include <iostream>
using namespace std;

int main()
{
    const double OUNCES_PER_METRIC_TON = 35,273.92;
    double ounces, metric_tons, boxes;

    cout << "Enter weight of package of breakfast cereal in ounces: " << endl;
    cin >> ounces;

    metric_tons = 1/(OUNCES_PER_METRIC_TON/ounces);

    cout << "The weight of this package of breakfast cereal in metric tons is " 
         << metric_tons << " metric tons." << endl;

    boxes = 
    
    cout << "The number of boxes needed to yield 1 metric ton of cereal is " 
         << boxes << " boxes." << endl;

}