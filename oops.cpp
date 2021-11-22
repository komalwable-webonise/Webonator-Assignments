/******************************************************************************
OOPS Assignment

*******************************************************************************/

#include <iostream>

using namespace std;

class Cellphone{
    public:
    string name;
    int price;
    void calling(double phoneNumber,string name){
        cout<<"calling to "<<name<<endl;
    }
    void createcontact(double phoneNumber,string name){
        cout<<"contact saved as"<<name<<endl;
    }
    void playMusic(string song){
        cout<<"playing "<<song<<endl;
    }
    void SendMessage(string msg)  
    {  
        cout<<"message:"<<msg<<endl<<"Message Sent "<<endl;  
    }  
};
class Samsung:public Cellphone{
    public:
    void samsungpay(){
        cout<<"samsung pay makes it easy to pay your bills"<<endl;
    }
};
class Oppo:public Cellphone{
    public:
    void oppoStore(){
        cout<<"Here You can easily install any application"<<endl;
    }
};
int main()
{
   Samsung sam;
   sam.name="Galaxy s20";
   sam.price=23000;
   cout<<"Name of the phone is "<<sam.name<<" And the price is "<<sam.price<<endl;
   sam.samsungpay();
   sam.playMusic("Hello");
   Oppo o;
   o.name="Reno6 Pro";
   o.price=45555;
   cout<<"Name of the phone is "<<o.name<<"And the price is "<<o.price<<endl;
   o.oppoStore();
   o.SendMessage("How are you");
   o.calling(987654321,"komal");
   
    return 0;
}

