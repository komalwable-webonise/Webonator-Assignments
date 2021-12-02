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
    void camera(string cam){
        cout<<"It has "<<cam<<" primary camera"<<endl;
    }
};
class Transactional_apps{
    public:
    void paypal(){
        cout<<"You are using paypal App"<<endl;
    }
    void paytm(){
        cout<<"You are using paytm App"<<endl;
    }
    void phonepay(){
        cout<<"You are using phonepay App"<<endl;
    }
    void Googlepay(){
        cout<<"You are using Googlepay App"<<endl;
    }
    void tez(){
        cout<<"You are using tez App"<<endl;
    }
    void usingApp(int option){
        switch(option)
        {
            case 1:
            paypal();
            break;

            case 2:
            paytm();
            break;

            case 3:
            phonepay();
            break;

            case 4:
            Googlepay();
            break;
            
            case 5:
            tez();
            break;


            default:
            cout<<"Invalid Input"<<endl;
            break;

        }
    }
};
class Samsung:public Cellphone,public Transactional_apps{
    public:
    void samsungpay(){
        cout<<"samsung pay makes it easy to pay your bills"<<endl;
    }
};
class Oppo:public Cellphone,public Transactional_apps{
    public:
    void oppoStore(){
        cout<<"Here You can easily install any application"<<endl;
    }
};
class Iphone:public Cellphone,public Transactional_apps{
    public:
    void iphoneAppStore(){
        cout<<"Here You can easily install any application"<<endl;
    }
};

int main()
{
    cout<<"select brand for building your cellphone"<<endl;
    cout<<"1.samsung"<<endl;
    cout<<"2.oppo"<<endl;
    cout<<"3.iphone"<<endl;
    int choice;
    cin>>choice;
    cout<<endl;
    cout<<"Enter your choice which transaction app you want to use:"<<endl;
    cout<<"1.paypal"<<endl;
    cout<<"2.paytm"<<endl;
    cout<<"3.phonepay"<<endl;
    cout<<"4.Googlepay"<<endl;
    cout<<"5.tez"<<endl;
    int option;
    cin>>option;
    Samsung sam;
    Oppo o;
    Iphone I;
    switch(choice){
        case 1:
            
            sam.name="Galaxy s20";
            sam.price=23000;
            cout<<"Name of the phone is "<<sam.name<<" And the price is "<<sam.price<<endl;
            sam.samsungpay();
            sam.playMusic("Hello");
            sam.calling(987654321,"komal");
            sam.camera("13 MP");
            sam.createcontact(5364866412,"mohit");
            sam.usingApp(option);
            break;
        case 2:
           
           o.name="Reno6 Pro";
           o.price=45555;
           cout<<"Name of the phone is "<<o.name<<"And the price is "<<o.price<<endl;
           o.oppoStore();
           o.SendMessage("How are you");
           o.calling(987654321,"komal");
           o.playMusic("cute song");
           o.createcontact(746845568,"komal");
           o.camera("12Mp");
           o.usingApp(option);
           
           break;
        case 3:
           
           I.name="Iphone 13Pro";
           I.price=100555;
           cout<<"Name of the phone is "<<o.name<<"And the price is "<<o.price<<endl;
           I.iphoneAppStore();
           I.SendMessage("How are you");
           I.calling(987654321,"komal");
           I.camera("48Mp");
           I.createcontact(957371263,"shubham");
           I.usingApp(option);
          
           break;
           
	    default:
           cout<<"Invalid Input";
           break;
    }
   
   
   
   return 0;
   
}
   
