#include <iostream>
using namespace std;

class Trigonometric{
public:
        void controlTrigo(){
            cout<<endl<<"CHOOSING THE TRIGONOMETRIC FUNCTION"<<endl<<endl;
            cout<<"\n\n"<<endl;

            int trigSelect;
            cout<<"Please choose the trignonometric function you want to work with:"<<endl;
            cout<<"1. sinx"<<endl;
            cout<<"2. cosx"<<endl;
            cout<<"3. tanx"<<endl;
            cout<<"4. cosecx"<<endl;
            cout<<"5. secx"<<endl;
            cout<<"6. cotx"<<endl;
            
            cout<<"Please enter the corresponding index:";
            cin>>trigSelect;

            cout<<endl;

            int trigOp;
            cout<<"Please select the operation you want to perform on the function:"<<endl;
            cout<<"2. Construct its graph -> (redirect to wolfram alpha)"<<endl;
            cout<<"3. Find its integral"<<endl;
            cout<<"4. Find its derivative"<<endl;
            cout<<"Please enter the corresponding index:";
            cin>>trigOp;

            cout<<endl<<endl;

            switch(trigOp){
                case 1: findExpVal(trigSelect);
                        break;
                case 2: consGraph(trigSelect);
                        break;
                case 3: findInteg(trigSelect);
                        break;
                case 4: findDeriv(trigSelect);
                        break;
            }

            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
        }

        void findExpVal(int typeTrig){
            switch(typeTrig){
                case 1:
                    int x1;
                    cout<<"Enter x:";
                    cin>>x1;
                    cout<<"The value of the function at x = "<<x1<<" is: ||\t"<<sin(x1)<<"\t||(Ans)"<<endl;
                    break;
                case 2:
                    int x2;
                    cout<<"Enter x:";
                    cin>>x2;
                    cout<<"The value of the function at x = "<<x2<<" is: ||\t"<<cos(x2)<<"\t||(Ans)"<<endl;
                case 3:
                    int x3;
                    cout<<"Enter x:";
                    cin>>x3;
                    cout<<"The value of the function at x = "<<x3<<" is: ||\t"<<tan(x3)<<"\t||(Ans)"<<endl;
                case 4:
                    int x4;
                    cout<<"Enter x:";
                    cin>>x4;
                    cout<<"The value of the function at x = "<<x4<<" is: ||\t"<<1.0/sin(x4)<<"\t||(Ans)"<<endl;
                case 5:
                    int x5;
                    cout<<"Enter x:";
                    cin>>x5;
                    cout<<"The value of the function at x = "<<x5<<" is: ||\t"<<1.0/cos(x5)<<"\t||(Ans)"<<endl;
                case 6:
                    int x6;
                    cout<<"Enter x:";
                    cin>>x6;
                    cout<<"The value of the function at x = "<<x6<<" is: ||\t"<<1.0/tan(x6)<<"\t||(Ans)"<<endl;
            }
        }
        void consGraph(int typeTrig){
            switch(typeTrig){
                case 1: 
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input/?i=graph+sin+x"<<endl;
                break;

                case 2:
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input/?i=graph+cos+x"<<endl;
                break;

                case 3:
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input/?i=graph+tan+x"<<endl;
                break;

                case 4:
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input/?i=graph+cosec+x"<<endl;
                break;

                case 5:
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input/?i=graph+sec+x"<<endl;
                break;

                case 6:
                cout<<"Please either click on \"follow link\" which appears when the link is clicked: "<<endl;
                cout<<"OR you may copy the below link and paste it to your browser:"<<endl;
                cout<<endl<<"https://www.wolframalpha.com/input<<?i=graph+cot+x"<<endl;
            }
        }

        void findInteg(int typeTrig){
            switch(typeTrig){
                case 1:
                cout<<"Required integral is: "<<"(int)sinx = -cosx"<<endl;
                break;

                case 2:
                cout<<"Required integral is: "<<"(int)cosx = sinx"<<endl;
                break;

                case 3:
                cout<<"Required integral is: "<<"(int)tanx = log(secx)"<<endl;
                break;

                case 4:
                cout<<"Required integral is: "<<"(int)cosecx = log|cosecx - cotx|"<<endl;
                break;

                case 5:
                cout<<"Required integral is: "<<"(int)secx = log|secx + tanx|"<<endl;
                break;

                case 6:
                cout<<"Required integral is: "<<"(int)cotx = log|sinx|"<<endl;
                break;
            }
        }

        void findDeriv(int typeTrig){
            switch(typeTrig){
                case 1:
                cout<<"Required derivative is: d/dx(sinx) = cosx"<<endl;
                break;

                case 2:
                cout<<"Required derivative is: d/dx(cosx) = -sinx"<<endl;
                break;

                case 3:
                cout<<"Required derivative is: d/dx(tanx) = sec^2(x)"<<endl;
                break;

                case 4:
                cout<<"Required derivative is: d/dx(cosecx) = -cosecx*cotx"<<endl;
                break;

                case 5:
                cout<<"Required derivative is: d/dx(secx) = secx*tanx"<<endl;
                break;

                case 6:
                cout<<"Required derivative is: d/dx(cotx) = -cosec^2(x)"<<endl;
                break;
            }
        }
};