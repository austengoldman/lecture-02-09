//scores.cpp
//Diba Mirza
//Program that stores student scores and
//calculates the average of the scores

#include<iostream>

using namespace std;

/*double getAverage_c11(int sc[], int len){
    double sum=0;
    for (int value :sc){
         sum+= value;
    }

    return (sum/len);                              
}*/

double getAverage(int *sc, int len){
    double sum=0;
    for (int i=0; i<len; i++){
         sum+=sc[i];
    }
    return (sum/len);                              
}


int main(){

    int scores[5]={65, 85, 97, 75, 95}; //Declare and initialize the array to store 5 scores
    
    //Compute average by calling a function and passing the array of scores as a parameter
    double avg_score = getAverage(scores,5);

    //Compute average using C++11's range based for loop
    double sum_c11=0.0;
    for(int value: scores){
        sum_c11=sum_c11+ value;
    }
    double avg_score_c11 = sum_c11/5;

    //Compute average by calling a function that uses C++11's range based for loop
    //double avg_score_c11 = getAverage_c11(scores,5);

    cout<<"\nAverage score is: "<<avg_score<<endl;
    cout<<"\nAverage score in c++11 is: "<<avg_score_c11<<endl;

    return 0;
}

