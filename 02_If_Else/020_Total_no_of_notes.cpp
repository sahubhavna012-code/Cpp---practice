#include<iostream>
using namespace std;
int main()
{
    int note_500, note_200, note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    int amt;
    cout << "Enter the amount: ";
    cin>>amt;
    note_500=amt/500;
    amt=amt%500;
    note_200=amt/200;
    amt=amt%200;
    note_100=amt/100;
    amt=amt%100;
    note_50=amt/50;
    amt=amt%50;
    note_20=amt/20;
    amt=amt%20;
    note_10=amt/10;
    amt=amt%10;
    note_5=amt/5;
    amt=amt%5;
    note_2=amt/2;
    amt=amt%2;
    note_1=amt/1;
    cout<<"Note 500: "<<note_500<<endl;
    cout<<"Note 200: "<<note_200<<endl;     
    cout<<"Note 100: "<<note_100<<endl;
    cout<<"Note 50: "<<note_50<<endl;
    cout<<"Note 20: "<<note_20<<endl;
    cout<<"Note 10: "<<note_10<<endl;
    cout<<"Coins 5: "<<note_5<<endl;
    cout<<"Coins 2: "<<note_2<<endl;
    cout<<"Coins 1: "<<note_1<<endl;

    cout<<"Total number of notes and coins: "<<note_500+note_200+note_100+note_50+note_20+note_10+note_5+note_2+note_1<<endl;
}