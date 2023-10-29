#include <iostream>
#include "Polynomial.cpp"
#include "Exponential.cpp"
#include "Logarithmic.cpp"
#include "Trigonometric.cpp"
using namespace std;

int main(){
    printf("\n");
    printf("MATHEMATICAL FUNCTION CALCULATOR\n\n");
    printf("------------------------------------\n");
    printf("Please select the type of function, you want to work with: \n");

    int funcIndex;
    printf("1. POLYNOMIAL\n");
    printf("2. EXPONENTIAL\n");
    printf("3. LOGARITHMIC\n");
    printf("4. TRIGONOMETRIC\n");
    printf("\n\n");

    printf("PLEASE ENTER THE INDEX CORRESPONDING TO THE MENTIONED FUNCTIONS:");
    scanf("%d",&funcIndex);

    cout<<"\n\n\n"<<endl;
    cout<<"----------------------------------"<<endl;

    Polynomial poly_CALL;
    Exponential exp_CALL;
    Logarithmic log_CALL;
    Trigonometric trigo_CALL;

    switch(funcIndex){
        case 1: poly_CALL.controlPoly();
                break;
        case 2: exp_CALL.controlExpon();
                break;
        case 3: log_CALL.controlLogarithmic();
                break;
        case 4: trigo_CALL.controlTrigo();
                break;
        default: cout<<"Please enter a valid enumerator!"<<endl;
    }
        cout<<endl<<endl<<"THANK YOU FOR USING FUNCTION CALCULATOR!"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        
    return 0;
}