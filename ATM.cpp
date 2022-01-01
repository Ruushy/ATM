#include<iostream>
using namespace std;
void showmenu(){

   cout<<"**********MENU**********" <<endl;
   cout<<"1. check balance "<<endl;
   cout<<"2. deposit money "<<endl;
   cout<<"3. withdraw miney "<<endl;
   cout<<"4. exit "<<endl;
   cout<<"********************" <<endl;
}
int main(){
    int option;
    double balance = 900;
    do{


        showmenu();
        cout<<"option: ";
        cin>>option;
        system("cls");
        switch(option){

           case 1:

              cout<<"your balance is: " <<balance <<" $" <<endl;
              break;
           case 2:
              double deposit;
              cout<<"deposit money: ";
              cin>>deposit;
              balance += deposit;
              cout<<"added seccesfully "<<endl;;
             break;

          case 3:
             double withdraw;
             cout<<"withdraw money: ";
             cin>>withdraw;
             if(withdraw <= balance){
                balance -= withdraw;
                cout<<"drawed seccesfully "<<endl;
             }
             else
                cout<<"not enught money "<<endl;
             break;
          case 4:
            exit(0);

      }

      }while(option != 5);


}


