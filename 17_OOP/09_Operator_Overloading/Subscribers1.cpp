#include<iostream>
using namespace std;
class Channel
{
    private: 
        int subscribers;
    public:
        Channel(int s)
        {
            subscribers = s;
        }
        void operator--()
        {
            subscribers--;
        }
        void display()
        {
            cout<<"Subscribers: "<<subscribers<<endl;
        }
};
int main()
{
    Channel gs(1000);
    --gs;
    gs.display();
    return 0;
}