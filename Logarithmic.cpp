#include <iostream>
#include <math.h>
using namespace std;

class Logarithmic{
public:
        void controlLogarithmic(){
            cout<<endl<<"CONSTRUCTING THE LOGARITHM"<<endl<<endl;
            cout<<"\n\n"<<endl;

            int funcSelect;
            cout<<"Please select f(x), i.e. in log(e)f(x), the function about which log(e) is to be calculated:"<<endl;
            cout<<"1.x^n"<<endl;
            cout<<"2.x^(1/n)"<<endl;
            cout<<"Please enter the corresponding index:";
            cin>>funcSelect;
            
            cout<<endl;

            int n;
            cout<<"Please enter n:"<<endl;
            cin>>n;

            cout<<endl;

            int logOp;
            cout<<"Please select the type of operation to be performed on the function:"<<endl;
            cout<<"1. Find expression value at one of the points"<<endl;
            cout<<"2. Contruct its graph -> (redirect to Wolfram Alpha)"<<endl;
            cout<<"3. Find its derivative"<<endl;
            cout<<"Please enter the corresponding index:";
            cin>>logOp;

            cout<<endl<<endl;

            switch(logOp){
                case 1: findExpVal(funcSelect,n);
                        break;
                case 2: consGraph(funcSelect,n);
                        break;
                case 3: findDeriv(funcSelect,n);
                        break;
            }

            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        }

        void findExpVal(int typeLog, int n){
            if(typeLog == 1){
                cout<<"Your function is logx^"<<n<<" = "<<n<<"logx"<<endl;
                int x;
                cout<<"Please enter x:";
                cin>>x;
                cout<<"The value of the expression at x = "<<x<<" is: log("<<x<<'^'<<n
                <<")"<<endl<<"\t= ||\t"<<n*log(x)<<"\t||(Ans)"<<endl;
            }
            else{
                cout<<"Your function is logx^(1/"<<n<<") = 1/"<<n<<"logx"<<endl;
                int x;
                cout<<"Please enter x:";
                cin>>x;
                cout<<"The value of the expression at x = "<<x<<" is: log"<<x<<"^(1/"<<n<<')'<<endl<<"\t= ||\t"<<(1.0/n)*log(x)<<"\t||(Ans)"<<endl;
            }
        }

        void consGraph(int typeLog, int n){
            if(typeLog == 1){
                cout<<"Your function is logx^"<<n<<") = 1/"<<n<<"logx"<<endl;

                cout<<"Please either copy the below link and paste it to your browser:"<<endl;
                cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input?i=log%28x%5E"<<n<<"%29"<<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            }
            else{
                cout<<"Your function is logx^(1/"<<n<<") = 1/"<<n<<"logx"<<endl;

                cout<<"Please either copy the below link and paste it to your browser:"<<endl;
                cout<<"OR you may click on \"follow link\" which appears when the link is clicked:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input?i=log%28x%5E1%2F"<<n<<"%29"<<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            }
        }

        void findDeriv(int typeLog,int n){
            if(typeLog == 1){
                cout<<"Your function is logx^("<<n<<") = 1/"<<n<<"logx"<<endl;
                
                cout<<"Required derivative is:"<<endl<<"\t= "<<"("<<n<<")"<<"*1/x"<<endl<<"\t= ||\t"<<n<<"/x"<<"\t||(Ans)"
                <<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
            }
            else{
                cout<<"Your function is logx^(1/"<<n<<") = 1/"<<n<<"logx"<<endl;

                cout<<"Required derivative is:"<<endl<<"\t= "<<"(1/"<<n<<")*1/x"<<endl<<"\t= ||\t"<<1.0/n<<"/x"<<"\t||(Ans)"
                <<endl<<endl;

                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
            }

        }
};