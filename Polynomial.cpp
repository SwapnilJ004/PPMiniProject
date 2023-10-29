#include <iostream>
#include <math.h>
using namespace std;

class Polynomial{
    public: void controlPoly(){
        int degree;
        cout<<'\n'<<"CONSTRUCTING THE POLYNOMIAL\n"<<endl;
        cout<<"\n\n"<<endl;
        cout<<"Please enter the degree of the expression:";
        cin>>degree;
        cout<<endl;

        if(degree < 0 || degree > 9){
            cout<<"Please enter the degree between 0 to 9\n"<<endl;
            return;
        }
        cout<<"Your polynomial will look like:"<<endl;
        int printingDeg = degree;
        while(printingDeg>=0){
            if(printingDeg){
            cout<<"a"<<degree-printingDeg<<"x^"<<printingDeg<<" + ";
            printingDeg--;
            }
            else {
                cout<<"a"<<degree-printingDeg<<"x^"<<printingDeg;
                printingDeg--;
            }
        }
        cout<<'\n'<<endl;

        int coefficients[10] = {0};
        cout<<"Enter the values of the "<<degree+1<<" coefficients, starting from a0:";
        for(int i = 0; i<=degree; i++){
            cin>>coefficients[i];
        }
        
        cout<<"---------------------------\n\n"<<endl;
        cout<<endl<<"Your polynomial is:";
        for(int i = 0; i<=degree; i++){
            if(i != degree){
            cout<<coefficients[i]<<"x^"<<degree-i<<"+ ";
            }
            else{
                cout<<coefficients[i]<<endl;
            }
        }

        cout<<"----------------------------\n"<<endl;

        int Operation = chooseOperation();

        switch(Operation){
            case 1:PrintExpValue(coefficients,degree);
                    break;
            case 2:GraphConstruc(coefficients,degree);
                    break;
            case 3:PrintIntegral(coefficients,degree);
                    break;
            case 4:PrintDerivative(coefficients,degree);
                    break;
            default:
                    cout<<"Please enter a valid enumerator of listed Operations"<<endl;
        }
    }

    public: int chooseOperation(){
        cout<<endl;
        int oper;
        cout<<endl<<"Select one of the operations to be performed on the Polynomial:\n"<<endl;
        cout<<"1. Find expression value at one of the points"<<endl;
        cout<<"2. Contruct its graph -> (redirect to Wolfram Alpha)"<<endl;
        cout<<"3. Find its integral"<<endl;
        cout<<"4. Find its derivative"<<endl;

        cout<<"\nPlease enter the corresponding index:";
        cin>>oper;
        cout<<"\n\n"<<endl;
        return oper;
    }

    void PrintExpValue(int *coeff, int deg){
        int x;
        cout<<"----------------------------\n"<<endl;
        cout<<"Please enter the point at which value of the function has to be found:";
        cin>>x;

        for(int j = 30; j>=0; j--){
            cout<<'-';
        }
        cout<<endl;

        cout<<"At x = \""<<x<<"\" the value of the polynomial is:"<<endl;

        for(int i = deg; i>=0; i--){
            if(i){
                cout<<coeff[deg-i]<<'('<<x<<')'<<"^"<<i<<" + ";
            }
            else{
                cout<<coeff[deg-i]<<"  =  ||\t ";
            }
        }

        int funcVal = 0;
        for(int i = 0; i<= deg; i++){
        funcVal += coeff[i]*pow(x,deg-i);
        }

        cout<<funcVal<<"\t||(Ans)\n"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }

    void GraphConstruc(int *coeff,int deg){
        cout<<"---------------------------\n"<<endl;

        cout<<"Please either copy the below link and paste it to your browser:"<<endl;
        cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
        cout<<endl<<"https://www.wolframalpha.com/input?i=plot+";
        for(int i = 0; i<=deg; i++){
            if(i<=deg-2){
                cout<<coeff[i]<<"x"<<"%5E"<<deg-i<<"+%2B+";
            }
            else if(i == deg-1){
                cout<<coeff[i]<<"x+%2B+";
            }
            else if(i == deg){
                cout<<coeff[i]<<endl<<endl;
            }
        }
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }


    void PrintIntegral(int *coeff,int deg){
        int typeInt = 0; 
        cout<<"-------------------------\n"<<endl;
        cout<<"Please select the form of Integration:"<<endl;
        cout<<"1.Indefinite (without Limits)"<<endl;
        cout<<"2.Definite (with Limits)\n"<<endl;
        cout<<"YOU MAY ENTER INDEX FROM THE ABOVE CATEGORIES:";

        cin>>typeInt;

        float degF = deg;

        if(typeInt == 1){   //Indefinite
            cout<<"-----------------------------\n"<<endl;
            cout<<"The required Indefinite Integral is :"<<endl<<"\t= (integ){";

            for(int i = 0; i<= deg; i++){
                if(i<degF){
                    cout<<coeff[i]<<"x^"<<deg-i<<" + ";
                }
                else{
                    cout<<coeff[i]<<'}'<<endl;
                }
            }

            cout<<"\t= ";

            for(int i = 0; i<=deg; i++){
                if(i<degF){
                    cout<<coeff[i]<<'/'<<'('<<deg-i<<"+1"<<')'<<"x^("<<deg-i<<"+1) "<<"+ ";
                }
                else{
                    cout<<coeff[i]<<"x + c";
                }
            }

            cout<<endl<<endl<<'\t'<<"= ";

            for(int i = 0; i<=deg; i++){
                if(i<deg){
                    cout<<coeff[i]/(degF-i+1)<<"x^"<<(deg-i+1)<<" + ";
                }
                else{
                    cout<<coeff[i]/(degF-i+1)<<"x + c"<<endl;
                }
            }
        }
        else if(typeInt == 2){   //Definite
            cout<<"-----------------------------\n"<<endl;

            int limt1,limt2;
            cout<<"Enter the limits of Integration:";
            cin>>limt1;
            cin>>limt2;

            cout<<endl<<"The required Definite Integral is :"<<endl<<"\t= "<<limt1<<"(integ)"<<limt2<<'{';

            for(int i = 0; i<= deg; i++){
                if(i<deg){
                    cout<<coeff[i]<<"x^"<<deg-i<<" + ";
                }
                else{
                    cout<<coeff[i];
                }
            }

            cout<<'}'<<endl<<"\t= "<<'[';
            
            for(int i = 0; i<=deg; i++){
                if(i<deg){
                    cout<<coeff[i]/(degF-i+1)<<"x^"<<deg-i+1<<" + ";
                }
                else{
                    cout<<coeff[i]/(degF-i+1)<<"x]"<<'('<<limt1<<" to "<<limt2<<')';
                }
            }

            float value1 = 0;
            for(int i = 0; i<=deg; i++){
                float term = coeff[i]/(degF-i+1);
                value1 += term*pow(limt2,deg-i+1);
            }

            float value2 = 0;
            for(int i = 0; i<=deg; i++){
                float term = coeff[i]/(degF-i+1);
                value2 += term*pow(limt1,deg-i+1);
            }
            
            cout<<endl<<"\t= [{";

            for(int i = 0; i<=deg; i++){
                if(i<deg){
                    cout<<coeff[i]/(degF-i+1)<<"("<<limt2<<")^"<<deg-i+1<<" + ";
                }
                else{
                    cout<<coeff[i]/(degF-i+1)<<'('<<limt2<<")} - {";
                }
            }
            for(int i = 0; i<=deg; i++){
                if(i<deg){
                    cout<<coeff[i]/(degF-i+1)<<"("<<limt1<<")^"<<deg-i+1<<" + ";
                }
                else{
                    cout<<coeff[i]/(degF-i+1)<<"("<<limt1<<")}]"<<endl;
                }
            }

            cout<<endl<<"\t= ||\t"<<value1-value2<<"\t||(Ans)"<<endl<<endl;
        }

        else{
            cout<<"Please enter a valid TYPE OF INTEGRAL enumerator!"<<endl;

        }

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;

    }
    void PrintDerivative(int *coeff,int deg){
        cout<<"---------------------------\n"<<endl;
        cout<<"Please select the type of differentiation:"<<endl;
        
        int diffOp = 0;
        cout<<"1. Find f'(x) for some variable 'x'"<<endl;
        cout<<"2. Find f'(a) for some x = a"<<endl;
        cout<<"PLEASE ENTER ONE OF THE INDICES:";
        cin>>diffOp;

        float f_RandomPt_a = 0;
        if(diffOp == 2){
            cout<<endl<<endl<<"Now, please enter a:";
            cin>>f_RandomPt_a;

        }

        cout<<endl<<"Required derivative is:"<<endl;
        cout<<"\t= "<<"d/dx(";

        for(int i = 0; i<=deg; i++){
            if(i<deg){
                cout<<coeff[i]<<"x^"<<deg-i<<" + ";
            }
            else{
                cout<<coeff[i]<<")"<<endl<<"\t= ";
            }
        }
        for(int i = 0; i<deg; i++){
            if(i<deg-1){
                cout<<'('<<coeff[i]<<'*'<<deg-i<<')'<<"x^"<<deg-i-1<<" + ";
            }
            else{
                cout<<'('<<coeff[i]<<"*"<<deg-i<<')'<<endl<<"\t= ";
            }
        }

        for(int i = 0; i<deg; i++){
            if(i<deg-1){
                cout<<coeff[i]*(deg-i)<<"x^"<<deg-i-1<<" + ";
            }
            else{
                cout<<coeff[i]*(deg-i)<<'\t';
            }
        }

        switch(diffOp){
            case 1:{
                cout<<"||\tAns\t||"<<endl;
                break;
            } 
            case 2:{
                
                float f_dValue = 0;
                for(int i = 0; i<deg; i++){
                    int term = coeff[i]*(deg-i);
                    f_dValue += term*pow(f_RandomPt_a,deg-i-1
                    );
                }
                cout<<endl<<"\t= ";
                for(int i = 0; i<deg; i++){
                    if(i<deg-1){
                        cout<<coeff[i]*(deg-i)<<"*("<<f_RandomPt_a<<")^"<<deg-i-1<<" + ";
                    }
                    else{
                        cout<<coeff[i]*(deg-i)<<endl;
                    }
                }

                cout<<"\t= ||\t"<<(int)f_dValue<<"\t||(Ans)"<<endl;
                break;
            }
            default:{
                cout<<"Please enter a valid enumerator!";
            }
        }

        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
    }
};