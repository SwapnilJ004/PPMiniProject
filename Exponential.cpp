#include <iostream>
#include <math.h>
using namespace std;

class Exponential{
public:
        void controlExpon(){
            cout<<endl<<"CONSTRUCTING THE EXPONENT"<<endl<<endl;
            cout<<"\n\n"<<endl;

            int funcSelect;
            cout<<"Please select f(x),i.e the power of base (e) for the function e^f(x):"<<endl;
            cout<<"1.f(x) = x^n"<<endl;
            cout<<"2.f(x) = x^(1/n)\n"<<endl;
            cout<<"Please enter the corresponding index:";
            cin>>funcSelect;

            int n;
            cout<<"Please enter n:";
            cin>>n;
            cout<<endl;

            int expOp;
            cout<<"Please choose the operation you want to perform:"<<endl;
            cout<<"1. Find expression value at one of the points"<<endl;
            cout<<"2. Contruct its graph -> (redirect to Wolfram Alpha)"<<endl;
            cout<<"3. Find its derivative"<<endl;
            cout<<"Please enter the corresponding index:";
            cin>>expOp;

            cout<<endl<<endl;

            switch(expOp){
                case 1: printExpValue(funcSelect,n);
                        break;

                case 2: consGraph(funcSelect,n);
                        break;

                case 3: findDeriv(funcSelect,n);
                        break;
            }

            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        }

        void printExpValue(int typeExpon,int n){
            if(typeExpon == 1){
                cout<<"Your function is e^(x^"<<n<<')'<<endl<<endl;
                int x;
                cout<<"Please enter x:";
                cin>>x;

                cout<<"The value of the expression at x = "<<x<<" is: e^("<<x<<"^"<<n
                <<")"<<endl<<'\t'<<"= "<<"||\t"<<pow(2.72,pow(x,n))<<"\t||(Ans)"<<endl<<endl;
            }

            else{
                cout<<"Your function is e^(x^1/"<<n<<')'<<endl;
                int x;
                cout<<"Please enter x:";
                cin>>x;

                cout<<"The value of the expression at x = "<<x<<" is: e^("<<x<<"^"<<"1/"<<n
                <<")"<<endl<<'\t'<<"= "<<"|\t"<<pow(2.72,pow(x,1.0/n))<<"\t|(Ans)"<<endl<<endl;
            }
        }

        void consGraph(int typeExpon,int n){
            if(typeExpon == 1){
                cout<<"Your function is e^(x^"<<n<<')'<<endl;
                cout<<"Please either copy the below link and paste it to your browser:"<<endl;
                cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input?i=plot+e%5Ex%5E"<<n<<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            }
            else{
                if(n == 1){
                    cout<<"Your function is e^(x)"<<endl;
                    cout<<"Please either copy the below link and paste it to your browser:"<<endl;
                    cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
                    cout<<endl<<"https://www.wolframalpha.com/input?i=plot+e%5Ex%5E1"<<endl<<endl;

                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                else{
                    cout<<"Your function is e^(x^1/"<<n<<')'<<endl;
                    cout<<"Please either copy the below link and paste it to your browser:"<<endl;
                    cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
                    cout<<endl<<"https://www.wolframalpha.com/input?i=plot+e%5Ex%5E%281%2F"<<n<<"%29"<<endl<<endl;

                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
            }
        }

        void findDeriv(int typeExpon,int n){
            if(typeExpon == 1){
                cout<<"Your function is e^(x^"<<n<<')'<<endl;
                cout<<"Required derivative is:"<<endl<<"\t= "<<"(e^x^"<<n<<")*"<<n<<"x^("<<n<<"-1)"
                <<endl<<"\t= ||\t"<<"(e^x^"<<n<<")*"<<n<<"x^"<<n-1<<"\t||(Ans)"<<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            }
            else{
                cout<<"Your function is e^(x^1/"<<n<<')'<<endl;
                cout<<"Required derivative is:"<<endl<<"\t= "<<"(e^x^"<<"1/"<<n<<")*(1/"<<n<<")x^(1/"
                <<n<<"-1)"<<endl<<"\t= ||\t"<<"(e^x^(1"<<n<<"))*"<<1.0/n<<"x^"<<(1.0/n)-1<<"\t||(Ans)"<<endl<<endl;
            }
        }

};