#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void){counter =0;}
        void setprice(void);
        void displayPrice(void);

};
void Shop::setprice(void){
    cout<<"enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;

}
void Shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayPrice();

    return 0;
}