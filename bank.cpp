#include<iostream>
#include<math.h>
using namespace std;
enum l {Personal=1,Home=2,Education=3};enum dept {Deposite=1,Loan=2};
int main(void)
{
    cout<<"******************* Welcome To Your Bank -********************"<<endl;
    int dept,age,amount,days,ac,year,l,interest,k,yy,mm,M;
    cout<<"Choose Department you want to Visit : 1.Deposite 2.Loan "<<endl;
    cin>>dept;
    
    cout<<"Please mention your age to check MINOR/MAJOR"<<endl;
    cin>>age;

    if(dept>3)
        cout<<"Error! Wrong input please try again"<<endl<<endl;

    if(age>=18 && age<=55)
        cout<<"Yes! You are eligible to open a ACCOUNT in Bank:"<<endl<<endl;
    else if(age<18)
        {
            cout<<"Sorry! You not are eligible to open a ACCOUNT in Bank:"<<endl<<"Have a look at YOUR BANK"<<endl; 
        }
    else
    {
        cout<<"Senior Citizen!"<<endl;
    }
    
    switch(dept)
    {
        case 1:
        {
            enum account {Current=1,Saving};
            cout<<"Enter the amount you want to deposite in your account:"<<endl;
            cin>>amount;
            cout<<"Specify year of deposite:"<<endl;
            cin>>year;
            cout<<"1.Current Account 2.Saving Account"<<endl;
            cin>>ac;

            switch(ac)
            {
                case 1:
                {
                    if(amount<=50000)
                    {
                        if(year==1)
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"3.5% interest is applied"<<endl;
                            interest=(amount*3.5*year)/100;     // simple interest = (p*r*t)/100
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after 1year:"<<amount<<endl;
                        }
                        else if(1<year&&year<=5)
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"3.7% interest is applied"<<endl;
                            interest=(amount*3.7*year)/100;
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after year:"<<amount<<endl;
                        }
                        else
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"3.8% interest is applied"<<endl;
                            interest=(amount*3.8*year)/100;
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after 1year:"<<amount<<endl;
                        }
                    }
                    else
                    {
                         if(year==1)
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"4% interest is applied"<<endl;
                            interest=(amount*4*year)/100;
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after 1year:"<<amount<<endl;
                        }
                        else if(1<year&&year<=5)
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"4.2% interest is applied"<<endl;
                            interest=(amount*4.2*year)/100;
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after 1year:"<<amount<<endl;
                        }
                        else
                        {
                            cout<<"******Your bank gives you*****"<<endl;
                            cout<<"4.4% interest is applied"<<endl;
                            interest=(amount*4.4*year)/100;
                            cout<<interest<<" interest got on amount"<<endl;
                            amount=interest+amount;
                            cout<<"Amount you get after 1year:"<<amount<<endl;
                        }
                    }
                }break;
                case 2:
                {
                    cout<<"******Your bank gives you*****"<<endl;
                    cout<<"3.5% interest is applied on your saving account"<<endl;
                    interest=(amount*3.5*year)/100;
                    cout<<interest<<" interest got on amount"<<endl;
                    amount=interest+amount;
                    cout<<"Amount you get:"<<amount<<endl;
                }break;
            }
        }break;
        case 2:
        {
            int y,emi;       // y=year m=month  variable for emi purpose.
            cout<<"$$$$$$$$$$$$$$  Welcome to Loan Deparment  $$$$$$$$$$$"<<endl;     //compound interest is applicable on loan
            cout<<"Choose type of 1.Personal 2.Education 3.Home"<<endl;
            cin>>l;
            switch(l)
            {
                case 1:
                {
                    cout<<"--------- You are in personal loan Department ---------"<<endl;
                    cout<<"    Upto 50lakhs loan    "<<endl;
                    cout<<"Enter the loan amount:"<<endl;
                    cin>>amount;
                    cout<<"Enter the year:"<<endl;
                    cin>>year;
                    cout<<"Year required to neutralised the loan amount "<<endl;
                    cin>>y;
                    M=y*12;    // year convered into  month for emi
                    if(amount<=1000000)
                        {
                            cout<<"Charge of 8.2%interest on amount per year"<<endl;
                            for(k=1;k<=year;k++)
                            {
                                interest=(amount*8.2*1)/(100*12);  // as all values are related to montly basis so we divide it by 12.
                                cout<<"Additional interest for year "<<k<<":"<<interest<<endl;
                                amount=interest+amount;
                            }                                       
                            cout<<"Total amount after "<<year<<":"<<amount<<endl;
                            emi=amount/M;
                            mm=amount/emi;
                            cout<<"After "<<year<<" year, EMI per month :"<<emi<<endl;
                        }
                    else
                    {
                            int k;
                            cout<<"Charge of 10%interest on amount per year"<<endl;
                            for(k=1;k<=year;k++)
                            {
                                interest=(amount*10*1)/(100*12);
                                cout<<"Additional interest for year "<<k<<":"<<interest<<endl;
                                amount=interest+amount;
                            }                                       
                            cout<<"Total amount after "<<year<<":"<<amount<<endl;
                            emi=amount/M;
                            cout<<"After "<<year<<" year,EMI per month :"<<emi<<endl;  
                    }
                }break;
                case 2:
                {
                    cout<<"*******We are here to help you to educate your child for better Future*******"<<endl;
                    cout<<"Enter the loan amount:"<<endl;
                    cin>>amount;
                    cout<<"Enter the total year of education:"<<endl;
                    cin>>year;
                    cout<<"Year required to neutralised the loan amount "<<endl;
                    cin>>y;
                    M=y*12;   // year convered into month for montly emi.
                    if(amount<=1000000)
                        {
                            cout<<"~~~~~~~ Charge of 6% interest on amount per year ~~~~~~~~~ "<<endl;
                            emi=amount/M;cout<<"You have to pay emi of: "<<emi<<endl;
                            k=year;
                            while(year<=k && amount>=1000)
                            {
                                interest=(amount*6*1)/(100*12); 
                                amount=(amount+interest)-emi;
                            } 
                            k++;
                        }
                    else if(1000000<amount && amount<=5000000)
                        {
                            cout<<"~~~~~~~ Charge of 6.5% interest on amount per year ~~~~~~~~~ "<<endl;
                            emi=amount/M;cout<<"You have to pay emi  of: "<<emi<<endl;
                            k=year;
                            while(k>=year && amount>=1000)
                            {
                                interest=(amount*6.5*1)/(100*12);
                                amount=(amount+interest)-emi;
                            }                        
                            k++;
                        }
                    else
                        {
                            cout<<"~~~~~~~ Charge of 7% interest on amount per year ~~~~~~~~~ "<<endl;
                            emi=amount/M;cout<<"You have to pay emi of: "<<emi<<endl;
                            k=year;
                            while(k>=year && amount>=1000)
                            {
                                interest=(amount*7*1)/(100*12);
                                amount=(amount+interest)-emi;
                            }                        
                            k++; 
                        }
                }break;
                case 3:
                {
                    cout<<"*******Your bank provides you shelter with minimum interest*******"<<endl;
                    cout<<"Enter the loan amount:"<<endl;
                    cin>>amount;
                    cout<<"Enter the  neutralising year of Home loan:"<<endl;
                    cin>>year;
                    M=year*12;   // year convered into month for montly emi.
                    if(amount<=2500000)
                        {
                            int c=0;
                            cout<<"~~~~~~~ Charge of 5.5% interest on amount per year ~~~~~~~~~ "<<endl;
                            emi=amount/M;cout<<"You have to pay emi of: "<<emi<<endl;
                            k=1;
                            while(k<=year && amount>=1000)
                            {
                                interest=(amount*5.5*1)/(100*12); 
                                amount=(amount+interest)-emi;
                            } 
                            k++;
                        }
                    else if(2500000<amount && amount<=5000000)
                        {
                            cout<<"~~~~~~~ Charge of 6% interest on amount per year ~~~~~~~~~ "<<endl;
                            k=1;
                            while(amount>=1000)
                            {
                                interest=(amount*6*1)/(100*12);
                                amount=(amount+interest)-emi;
                            }                        
                            k++;
                        }
                    else
                        {
                            int c=0;
                            cout<<"~~~~~~~ Charge of 7% interest on amount per year ~~~~~~~~~ "<<endl;
                            k=year;
                            while(amount>=1000)
                            {
                                interest=(amount*7*1)/(100*12);
                                amount=(amount+interest)-emi;
                            }                        
                            k++;
                            
                        }  
                }break;
            }break;
        }
    }



    cout<<" ************ YORE BANK is at your service ***************"<<endl;
    return 0;
}