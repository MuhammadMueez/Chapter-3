#include<iostream>
#include<string>
using namespace std;

class invoice{
  
public:
    string part,description_part;
    int quantity,price;
    double VAT,Discount;
    
public:

    
    invoice(string P1,string D,int Q,int P,double v1,double d1){
        
        part=P1;
        description_part=D;
        quantity=Q;
        price=P;
        VAT=v1;
        Discount=d1;
       
//        cout<<"I am A constructor";
    }
//    ~invoice(){
//    	cout<<"I am A destrucor";
//	}
    public:
    void getparts ()
    {	cout<<"Part no: "<<part<<endl<<"Parts Description: "<<description_part<<endl<<"Quantity of item: "<<quantity<<endl<<"Price: "<<price<<endl<<"VAT: "<<VAT<<endl<<"Discount: "<<Discount<<endl<<endl;
// 
    }
    void setpart(string P1,string D,int Q,int P,double v1,double d1){
        part=P1;
        description_part=D;
        quantity=Q;
        price=P;
        VAT=v1;
        Discount=d1;
//        cout<<"Part no: "<<part<<endl<<"Parts Description: "<<description_part<<endl<<"Quantity of item: "<<quantity<<endl<<"Price: "<<price<<endl<<"VAT: "<<VAT<<endl<<"Discount: "<<Discount<<endl;
//        cout<<"Part no"<<endl<<"Parts Description"<<endl<<"Quantity of item"<<endl<<"Price"<<endl<<"VAT"<<endl<<"Discount"<<endl;
    }
    };

int main()
{
  		invoice obj("Bulb","Light",5,550,0.2,0);
//    invoice a("Bulb","Light",5,550,0.2,0);

    obj.getparts();
    cout<< "Invoice Updated"<< endl;
    obj.setpart("hardisk", "sanDisk", 9, 300, 0.5, 0);
    obj.getparts();
    return 0;
}
