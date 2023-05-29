#include<bits/stdc++.h>
#include<unistd.h>
#include<ctime>
using namespace std;
void menu();
class start_menu
{
protected:
    string username;
public:
    start_menu()
    {
        system("color 0A");
        cout<<"\n\n\n\n Enter your name to continue as a admin:"<<endl;
        cin>>username;
        system("CLS");
        menu();
    }
    ~start_menu()
    {

    }
};
class customers
{
public:
    string name,address,gender;;
    int age,mobile_no,prev;
    static int cus_id;
    char op[999];
    void enter_details()
    {
        ofstream ans("old_customers.txt",ios::app);
        {
            cout<<"\n Enter customer_id:";
            cin>>cus_id;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter adddress:";
            cin>>address;
            cout<<"Enter gender:";
            cin>>gender;
            cout<<"Enter age:";
            cin>>age;
            cout<<"Enter mobile number:";
            cin>>mobile_no;
        }
        ans<<"\n CUSTOMER ID:"<<cus_id<<"\n NAME:"<<name<<"\n ADDRESS:"<<address<<"\n GENDER:"<<gender<<"\n AGE:"<<age<<"\n MOBILE NUMBER:"<<mobile_no<<endl;
        ans.close();
        cout<<endl;
        cout<<"\n Thank you!! We saved your details for future purposes\n"<<endl;
    }
    void show_details()
    {
        ifstream ans("old_customers.txt");
        {
            if(!ans)
            {
                cout<<"\nOOPS!!! File error..."<<endl;
            }
            else
            {
                while(!(ans.eof()))
                {
                    cout<<op<<endl;
                }
            }
        }
    }
};
int customers::cus_id;
class cabs
{
public:
    int cab_choice,km;
    int choose_cab;
    float cab_cost;
    static float total_cabcost;
    void cabs_details()
    {
        cout << "\nWe collaborated with one of the best cab service around the country" << endl;
        cout << "-----------FAST TRACK CABS-----------\n" << endl;
        cout << "\t1. Rent a Standard Cab -   Rs.15/KM" << endl;
        cout << "\t2. Rent a Luxury Cab   -   Rs.30/KM" << endl;
        cout<<"\n Select which cab you need";
        cin>>cab_choice;
        cout<<"\n Enter kilometers to travel :";
        cin>>km;
        if(cab_choice==1)
        {
            cab_cost=km*15;
            cout<<"\n Your cab will cost:" << cab_cost<<endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin>>choose_cab;
            system("CLS");
            if(choose_cab==1)
            {
                total_cabcost = cab_cost;
                cout << "\nYou have successfully hired standard cab" << endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(choose_cab==2)
            {
                cabs_details();
            }
            else
            {
                cout <<"\n Invalid Input Please wait!! Redirecting to menu" << endl;
                sleep(2000);
                system("CLS");
                cabs_details();
            }
        }
        else if(cab_choice==2)
        {
            cab_cost=30*km;
            cout << "\nYour cab will cost "<<"Rs." << cab_cost << " for a luxury cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> choose_cab;
            system("CLS");
            if(choose_cab==1)
            {
                total_cabcost = cab_cost;
                cout << "\nYou have successfully hired luxury cab" << endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(choose_cab== 2)
            {
                cabs_details();
            }
            else
            {
                cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
                sleep(2000);
                system("CLS");
                cabs_details();
            }
        }
        else
        {
            cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
            sleep(2000);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to goto main menu: ";
        cin >> choose_cab;
        system("CLS");
        if(choose_cab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};
float cabs::total_cabcost;

class hotels
{
public:
    int hotel_no,package;
    static float total_hotelcost;
    void hotels_details()
    {
        cout<<"\n Currently we collaborate with the hotels listed down....."<<endl;
        cout<<"\t 1. HOTEL BOCARO"<<endl;
        cout<<"\t 2. HOTEL TAJ"<<endl;
        cout<<"\t 3. HOTEL SEA BAY"<<endl;
        cout<<"\nChoose the hotel to stay:";
        cin>>hotel_no;
        if(hotel_no==1)
        {
            cout<<"\n\t WELCOME TO HOTEL BOCARO \t"<<endl;
            cout<<"-- Best hotel         --"<<endl;
            cout<<"-- Summer package     --"<<endl;
            cout<<"-- High quality food  --"<<endl;
            cout<<"-- Sea food           --"<<endl;
            cout<<"__________ AVAILABLE PACKAGES__________"<<endl;
            cout << "\t 1. Standard Pack" << endl;
            cout << "\t All basic facilities @ just: Rs.5000.00" << endl;
            cout << "\t 2. Premium Pack" << endl;
            cout << "\t Enjoy Premium pack @ just: Rs.10000.00" << endl;
            cout << "\t 3. Luxury Pack" << endl;
            cout << "\t Live luxury @ BOCARO @ just: Rs.15000.00" << endl;
            cout<<"\n Choose the package you want:";
            cin>>package;
            if(package==1)
            {
                total_hotelcost=5000.00;
                cout<<"\n You successfully booked standard pack @ BOCARO"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==2)
            {
                total_hotelcost=10000.00;
                cout<<"\n You successfully booked premium pack @ BOCARO"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==3)
            {
                total_hotelcost=5000.00;
                cout<<"\n You successfully booked luxury pack @ BOCARO"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else
            {
                cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
                sleep(2000);
                system("CLS");
                hotels_details();
            }
        }
        else if(hotel_no==2)
        {
            cout<<"\n\t WELCOME TO HOTEL TAJ \t"<<endl;
            cout<<"-- Family hotel             --"<<endl;
            cout<<"-- Fresh food               --"<<endl;
            cout<<"-- Swimming pool|Free wifi  --"<<endl;
            cout<<"-- Taj special room         --"<<endl;
            cout<<"__________ AVAILABLE PACKAGES__________"<<endl;
            cout << "\t 1. Family Pack" << endl;
            cout << "\t Enjoy with your family @ just: Rs.20000.00" << endl;
            cout << "\t 2. Best Pack" << endl;
            cout << "\t Get TAJ'S best pack @ just: Rs.15000.00" << endl;
            cout << "\t 3. Quality Pack" << endl;
            cout << "\t Go with quality pack @ just: Rs.10000.00" << endl;
            cout<<"\n Choose the package you want:";
            cin>>package;
            if(package==1)
            {
                total_hotelcost=20000.00;
                cout<<"\n You successfully booked family pack @ TAJ"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==2)
            {
                total_hotelcost=15000.00;
                cout<<"\n You successfully booked TAJ'S best pack "<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==3)
            {
                total_hotelcost=10000.00;
                cout<<"\n You successfully booked Quality  pack @ TAJ"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else
            {
                cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
                sleep(2000);
                system("CLS");
                hotels_details();
            }
        }
        else if(hotel_no==3)
        {
            cout<<"\n\t WELCOME TO SEA BAY \t"<<endl;
            cout<<"-- Richest hotel         --"<<endl;
            cout<<"-- Beach resort          --"<<endl;
            cout<<"-- Heaven rooms          --"<<endl;
            cout<<"-- Top class foods       --"<<endl;
            cout<<"__________ AVAILABLE PACKAGES__________"<<endl;
            cout << "\t 1. Basic Pack" << endl;
            cout << "\t All basic facilities @ just: Rs.15000.00" << endl;
            cout << "\t 2. Rich Pack" << endl;
            cout << "\t Enjoy high class  with SEA BAY @ just: Rs.22000.00" << endl;
            cout << "\t 3. Heaven Pack" << endl;
            cout << "\t Live heaven with your closest @ SEA BAY @ just: Rs.35000.00" << endl;
            cout<<"\n Choose the package you want:";
            cin>>package;
            if(package==1)
            {
                total_hotelcost=15000.00;
                cout<<"\n You successfully booked basic pack @ SEA BAY"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==2)
            {
                total_hotelcost=22000.00;
                cout<<"\n You successfully booked rich pack @ SEA BAY"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else if(package==3)
            {
                total_hotelcost=35000.00;
                cout<<"\n You successfully booked luxury pack @ SEA BAY"<<endl;
                cout << "For bill goto main menu" << endl;
            }
            else
            {
                cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
                sleep(2000);
                system("CLS");
                hotels_details();
            }
        }
        else
        {
            cout << "Invalid Input Please wait!! Redirecting to main menu" << endl;
            sleep(2000);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to goto main menu: ";
        cin >> package;
        system("CLS");
        if(package == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};
float hotels::total_hotelcost;
class bill:public customers,cabs,hotels
{
public:
    time_t now=time(NULL);
    tm*get=localtime(&now);
    void download_bill()
    {
        ofstream ans("receipt.txt");
        {
            ans << "\t\t\t\t LEGS GO \t\t" << endl;
            ans << "\t\t|-------------Receipt------------|" << endl;
            ans << "\t\t|________________________________|" << endl;

            ans << "\t\t  Customer ID: " << customers::cus_id << endl;
            ans << "\t\t       Total" << endl;
            ans << "\t\t  1.Hotel cost :" << fixed << setprecision(2) << hotels::total_hotelcost << endl;
            ans << "\t\t  2.Cab cost   :" << fixed << setprecision(2) << cabs::total_cabcost << endl;

            ans << "\t\t|________________________________|" << endl;
            ans << "\t\t\t TOTAL COST:" << fixed << setprecision(2) << hotels::total_hotelcost+cabs::total_cabcost << endl;
            ans << "_________________________________" << endl;
            ans << "\t\t|Bill Date:"<<1900+get->tm_year<<"/"<<1+get->tm_mon<<"/"<<get->tm_mday<<endl;
            ans << "\t\t|Bill Time:"<<5+get->tm_hour<<":"<<30+get->tm_min<<":"<<get->tm_sec<<endl;
            ans << "\t\t|-------------THANK YOU----------|" << endl;
        }
            ans.close();
    }
    void show_bill()
    {
        ifstream ans("receipt.txt");
        {
            if(!ans)
            {
                cout << "File Error!" << endl;
            }
            else
            {
                while(!(ans.eof()))
                {
                    ans.getline(op, 999);
                    cout << op << endl;
                }
            }
        }
        ans.close();
    }
};
void menu()
{
    int first,second,prev;
    cout<<"            *LEGS GO TRAVELS*            \n"<<endl;
    cout<<"--------------------MAIN MENU--------------------"<<endl;
    cout<<"\t|\t                          |"<<endl;
    cout<<"\t|\t 1.Customer management    |"<<endl;
    cout<<"\t|\t 2.Cabs management        |"<<endl;
    cout<<"\t|\t 3.Hotels management      |"<<endl;
    cout<<"\t|\t 4.Total charges & bills  |"<<endl;
    cout<<"\t|\t 5.Exit                   |"<<endl;
    cout<<"\t|\t                          |"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"\n Enter your choice to begin"<<endl;
    cin>>first;
    system("CLS");
    //CREATING THE OBJECTS
    customers p1;
    cabs p2;
    hotels p3;
    bill p4;
    if(first==1)
    {
        cout<<"----\t Customers \t----\n"<<endl;
        cout<<"1.Enter new customers"<<endl;
        cout<<"2.See old customers"<<endl;
        cout<<endl;
        cout<<"Enter your choice:";
        cin>>second;
        system("CLS");
        if(second==1)
        {
            p1.enter_details();
        }
        else if(second==2)
        {
            p1.show_details();
        }
        else
        {
            cout<<"Invalid input \n please wait!! Redirecting to the main menu"<<endl;
            sleep(2000);
            system("CLS");
            menu();
        }
        cout<<"Press 1 to goto main menu:";
        cin>>prev;
        if(prev==1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if(first==2)
    {
        cout<<"----\t For booking cabs \t----\n"<<endl;
        p2.cabs_details();
    }
    else if(first==3)
    {
        cout<<"----\t For booking the best hotels \t----\n"<<endl;
        p3.hotels_details();
    }
    else if(first==4)
    {
        cout<<"----\t Take your receipt\t----\n"<<endl;
        cout<<"1.To download bill"<<endl;
        cout<<"2.To see the bill"<<endl;
        cout<<"Enter your choice:";
        cin>>second;
        if(second==1)
        {
            p4.download_bill();
        }
        else if(second==2)
        {
            p4.show_bill();
        }
        else
        {
            cout<<"Invalid input \n Please wait!!!Redirecting to the main menu"<<endl;
            sleep(2000);
            system("CLS");
            menu();
        }
        cout<<"Press 1 to goto main menu:";
        cin>>prev;
        if(prev==1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if(first==5)
    {
        cout<<"\n\n\t---- THANK YOU  FOR CONTACTING US ----"<<endl;
        sleep(2000);
        system("CLS");
        start_menu();
    }
    else
    {
        cout<<"Invalid input \n please wait!! Redirecting to the main menu"<<endl;
        sleep(2000);
        system("CLS");
        menu();
    }
}
int main()
{
    start_menu startobj;
}
