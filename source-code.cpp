//FASHION FIRM MANAGEMENT SYSTEM
//By Mohd Ibrahim Mallick
//Delhi Technological University

/* HEADER FILES */

#include <bits/stdc++.h>
using namespace std;

/* MAIN FUNCTIONS */

void AtaniaPortal();
void MainMenu();
void Check();
void Work();

/* ATANIA FUNCTIONS */

void Employee();
void Designs();
void Buyers();
void MoneyManagement();

/* EMPLOYEE FUNCTIONS */

void EnterDetails();
void DisplayDetails();
void SearchDetail();
void DeleteDetail();
void ModifyDetail();
void IncrementDetail();

/* WORK FUNCTIONS */

void Printing();
void CEmbroidery();
void HEmbroidery();
void Stitching();
void Packaging();
void Work_P();

/* DESIGN FUNCTIONS */

void DesignDetails();
void DesignDisplay();
void SearchDesign();
void ModifyDesign();

/* BUYER FUNCTIONS */

void BuyerDetails();
void DisplayBuyer();
void SearchBuyer();
void ModifyBuyer();
void BuyerOrders();
void DisplayOrder();
void SearchOrder();
void ModifyOrder();

/* MONEY MANAGEMENT FUNCTIONS */

void EmployeeSummary();
void BuyerSummary();
void DisplayRevenue();

/* EMPLOYEE VARIABLES */

struct Details
{
    int empid;
    int age;
    int working_since;
    char name[20];
    char address[50];
    char phone_no[15];
    char aadhar_no[20];
    char post[20];
    float salary;
};

/* DESIGN VARIABLES */

struct Design
{
    int design_no;
    char fabric_color[20];
    char yarn_color_used[20];
    float stitch;
};

/* BUYER VARIABLES */

struct Buyer
{
    int party_id;
    int order_no;
    int qty;
    int design_num;
    int choice;
    char phone_no[15];
    char party_name[20];
};

/* INCOME VARIABLES */

struct Income
{
    unsigned long int totalsal;
    unsigned long int grossincome;
    unsigned long int netincome;
};

/* MAIN MENU CALLING */

int main()
{
    MainMenu();
    return 0;
}

/* ADMIN PASSWORD CHECK */

class Password_Admin
{
    char Admin[20];
    public:
    void Get()
    {
        fflush(stdin);
        cout<<"\n\t\t\t\t\tEnter Password : ";
        cin.getline(Admin,'19','\n');

        if(strcmp(Admin,"Atania87")==0)
        {
            cout<<"\t\t\t\t\t\t\tAccess GRANTED...\n\n";
            AtaniaPortal();
        }
        if(strcmp(Admin,"Atania87")!=0)
        {
            cout<<"\t\t\t\t\t\t\tAccess DENIED...\n";
            Password();
        }
    }
void Password()
    {
        fflush(stdin);
        cout<<"\n\t\t\t\t\tEnter Password : ";
        cin.getline(Admin,'19','\n');

        if(strcmp(Admin,"Atania87")==0)
        {
            cout<<"\t\t\t\t\t\t\tAccess GRANTED...\n\n";
            AtaniaPortal();
        }
        if(strcmp(Admin,"Atania87")!=0)
        {
            cout<<"\t\t\t\t\t\t\tAccess DENIED...\n";
            Get();
        }
    }
};

void Check()
{
    Password_Admin p;
    p.Password();
}

/* MAIN MENU */

void MainMenu()
{
    int choice;

    cout<<"\t\t\t\t\t_____________________________\n";
    cout<<"\n\t\t\t\t\t       ATANIA CREATION";
    cout<<"\n\t\t\t\t\t      The Fashion House\n";
    cout<<"\t\t\t\t\t_____________________________";

    cout<<"\n\n\t\t\t\t\t1 -> QUOTE \n";
    cout<<"\t\t\t\t\t2 -> ADMIN VIEW\n";
    cout<<"\t\t\t\t\t3 -> CLIENT VIEW\n";
    cout<<"\t\t\t\t\t4 -> EXIT\n";

    cout<<"\n\t\t\t\t\tChoose ( 1 - 4 ) : ";
    cin>>choice;
    cout<<"\n";

    switch(choice)
    {
        case 1:
        {
            cout<<"\n\t\t\t\t\t\t--| QUOTE |-- \n";
            cout<<"\n\t\t\t\t\t \" Female is not just F word ";
            cout<<"\n\t\t\t\t\t   Female is Filial Piety ";
            cout<<"\n\t\t\t\t\t   Female is responsibility \" ";
            cout<<"\n ";
            MainMenu();
        }
        case 2 :
            Check();
        case 3 :
            Work();
        case 4:
            exit(0);
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* CLIENT VIEW */

void Work()
{
    int i;
    cout<<"\t\t\t\t\t_______________________________\n";
    cout<<"\n\t\t\t\t\t       WELCOME TO ATANIA\n";
    cout<<"\t\t\t\t\t_______________________________";
    cout<<"\n\n\t\t\t\t\t1. Work Portal";
    cout<<"\n\t\t\t\t\t2. Contact Us";
    cout<<"\n\t\t\t\t\t3. Cover Page";
    cout<<"\n\t\t\t\t\t4. Exit\n";

    cout<<"\n\t\t\t\t\tChoose( 1 - 4 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            Work_P();
        case 2:
        {
            cout<<"\n\t\t\t\t\t\t  --| CONTACT US |--\n";
            cout<<"\n\t\t\t\t\tWEB    : www.ataniacreation.com ";
            cout<<"\n\t\t\t\t\tE-MAIL : ataniacreation@gmail.com ";
            cout<<"\n\t\t\t\t\tPHONE  : 12345678 ";
            cout<<"\n\n\t\t\t\t\t --| THANK YOU FOR VISITING |--\n";   
            Work();
        }
        case 3:
            MainMenu();
        case 4:
            exit(0);
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* WORK PORTAL */

void Work_P()
{
    int i;
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t     WELCOME TO WORK PORTAL\n";
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t1. Printing ";
    cout<<"\n\t\t\t\t\t2. Computerized Embroidery";
    cout<<"\n\t\t\t\t\t3. Hand Embroidery";
    cout<<"\n\t\t\t\t\t4. Stitching";
    cout<<"\n\t\t\t\t\t5. Packaging";
    cout<<"\n\t\t\t\t\t6. Client View\n";

    cout<<"\n\t\t\t\t\tChoose ( 1 - 6 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            Printing();
        case 2:
            CEmbroidery();
        case 3:
            HEmbroidery();
        case 4:
            Stitching();
        case 5:
            Packaging();
        case 6:
            Work();
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* BODY -> PRINTING */

void Printing()
{
    cout<<"\n\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t           DIGITAL TEXTILE PRINTING\n";
    cout<<"\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t     Introduction\n";
    cout<<"\n\tDigital textile printing is described as any ink jet based method of printing colorants onto  ";
    cout<<"\n\tfabric. Most notably, digital textile printing is referred to when identifying either printing   ";
    cout<<"\n\tsmaller designs onto garments(T-shirts, dresses, promotional wear; abbreviated as DTG, which    ";
    cout<<"\n\tstands for Direct to Garment)and printing larger designs onto large format rolls of textile. \n";
    cout<<"\n\t\t\t\t\t\t\t\t\t--| NOT YET STARTED |--\n";
    Work_P();
}

/* BODY -> COMPUTERIZED EMBROIDERY */

void CEmbroidery()
{
    cout<<"\n\t\t\t\t\t\t\t\t_____________________________________\n";
    cout<<"\n\t\t\t\t\t\t\t          COMPUTERIZED (MACHINE) EMBROIDERY\n";
    cout<<"\t\t\t\t\t\t\t\t_____________________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t        Introduction\n";
    cout<<"\n\tIndustrial and commercial embroidery machines and combination sewing-embroidery machines have a ";
    cout<<"\n\thooping or framing system that holds the framed area of fabric taut under the sewing needle ";
    cout<<"\n\tand moves it automatically to create a design from a pre-programmed digital embroidery pattern. \n";
    cout<<"\n\t\t\t\t\t\t\t\t--| Cost per 1000 Stitches -> Rs 2.00 |--\n";
    Work_P();
}

/* BODY -> HAND-MADE EMBROIDERY */

void HEmbroidery()
{
    cout<<"\n\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t             HAND-MADE EMBROIDERY\n";
    cout<<"\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t     Introduction\n";
    cout<<"\n\tHand Embroidery is the craft of decorating fabric or other materials using a needle to apply ";
    cout<<"\n\tthread or yarn. Hand Embroidery is available with a wide variety of thread or yarn color. \n";
    cout<<"\n\t\t\t\t\t\t\t--| Handwork per Suit -> Rs 95.00 |--\n";
    Work_P();
}

/* BODY -> STITCHING */

void Stitching()
{
    cout<<"\n\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t              STITCHING\n";
    cout<<"\t\t\t\t\t\t\t\t______________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t     Introduction\n";
    cout<<"\n\t Stitching is the process of making, mending or joining two pieces of material. \n";
    cout<<"\n\t\t\t\t\t\t\t--| Stitching per Suit -> Rs 115.00 |--\n";
    Work_P();
}

/* BODY -> PACKAGING */

void Packaging()
{
    cout<<"\n\t\t\t\t\t\t\t\t_____________________________\n";
    cout<<"\n\t\t\t\t\t\t\t              GARMENT PACKAGING\n";
    cout<<"\t\t\t\t\t\t\t\t_____________________________\n";
    cout<<"\n\t\t\t\t\t\t\t\t\t     Introduction\n";
    cout<<"\n\tGarment packaging is the process of wrapping, compressing, filling or creating of goods for the ";
    cout<<"\n\tpurpose of protection and their appropriate handling. This is the final process in the production";
    cout<<"\n\tof garments, which prepares the finished merchandise for delivery to the customer. \n";
    cout<<"\n\t\t\t\t\t\t\t--| Packaging per Suit -> Rs 1.00 |--\n";
    Work_P();
}

/* ADMIN VIEW */

void AtaniaPortal()
{
    int ch;
    cout<<"\t\t\t\t\t____________________________\n";
    cout<<"\n\t\t\t\t\t  WELCOME TO ATANIA PORTAL\n";
    cout<<"\t\t\t\t\t____________________________";
    cout<<"\n\n\t\t\t\t\t1 -> Employee Portal";
    cout<<"\n\t\t\t\t\t2 -> Design Portal";
    cout<<"\n\t\t\t\t\t3 -> Buyers Portal";
    cout<<"\n\t\t\t\t\t4 -> Money Management Portal";
    cout<<"\n\t\t\t\t\t5 -> Cover Page";
    cout<<"\n\t\t\t\t\t6 -> Exit\n";

    cout<<"\n\t\t\t\t\tChoose ( 1 - 6 ) : ";
    cin>>ch;
    cout<<"\n";

    switch(ch)
    {
        case 1:
            Employee();
        case 2:
            Designs();
        case 3:
            Buyers();
        case 4:
            MoneyManagement();
        case 5:
            MainMenu();
        case 6:
            exit(0);
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* EMPLOYEE PORTAL */

void Employee()
{
    int i;
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t   WELCOME TO EMPLOYEE PORTAL\n";
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t1. Enter Details";
    cout<<"\n\t\t\t\t\t2. Display Details";
    cout<<"\n\t\t\t\t\t3. Search  Details";
    cout<<"\n\t\t\t\t\t4. Delete Details";
    cout<<"\n\t\t\t\t\t5. Modify Details";
    cout<<"\n\t\t\t\t\t6. Increment Salary";
    cout<<"\n\t\t\t\t\t7. Admin View";

    cout<<"\n\n\t\t\t\t\tChoose( 1 - 7 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            EnterDetails();
        case 2:
            DisplayDetails();
        case 3:
            SearchDetail();
        case 4:
            DeleteDetail();
        case 5:
            ModifyDetail();
        case 6:
            IncrementDetail();
        case 7:
            AtaniaPortal();
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* BODY -> TO ENTER EMPLOYEE DETAILS */

void EnterDetails()
{
    fstream file;
    Details d;
    char c='Y';

    file.open("Employee.txt",ios::app|ios::binary);

    do
    {
        cout<<"\n\tEnter Employee ID : ";
        cin>>d.empid;
        cout<<"\n\tEnter Name : ";
        fflush(stdin);
        cin.getline(d.name,'19','\n');
        cout<<"\n\tEnter Phone Number : ";
        fflush(stdin);
        cin.getline(d.phone_no,'14','\n');
        cout<<"\n\tEnter Address : ";
        fflush(stdin);
        cin.getline(d.address,'49','\n');
        cout<<"\n\tEnter Age : ";
        cin>>d.age;
        cout<<"\n\tEnter Aadhar Number : ";
        fflush(stdin);
        cin.getline(d.aadhar_no,'19','\n');
        cout<<"\n\tEnter Designation : ";
        fflush(stdin);
        cin.getline(d.post,'19','\n');
        cout<<"\n\tEnter Working Since (in years) : ";
        cin>>d.working_since;
        cout<<"\n\tEnter Salary (in INR) : ";
        cin>>d.salary;

        file.write((char*)&d,sizeof(d));

        cout<<"\n\t --> Want to Enter more (y/n) : ";
        cin>>c;
        cout<<"\n";
    }while((c=='Y')||(c=='y'));

    file.close();
    Employee();
}

/* BODY -> TO DISPLAY EMPLOYEE DETAILS */

void DisplayDetails()
{
    fstream file;
    Details d1;

    file.open("Employee.txt",ios::in|ios::binary);

    cout<<"\n\t_____________"<<"\t__________"<<"\t______________"<<"\t___________"<<"\t_____";
    cout<<"\t_______________"<<"\t_____________"<<"\t_______________"<<"\t_______________";
    cout<<setw(14)<<left<<"\n\n\t EMPLOYEE ID";
    cout<<setw(12)<<left<<"\t   NAME";
    cout<<setw(15)<<left<<"\t PHONE NUMBER";
    cout<<setw(12)<<left<<"\t  ADDRESS";
    cout<<setw(6)<<left<<"\t AGE";
    cout<<"\t AADHAR NUMBER";
    cout<<setw(8)<<left<<"\t DESIGNATION";
    cout<<setw(6)<<left<<"\t WORKING SINCE";
    cout<<setw(4)<<left<<"\t SALARY(IN INR)";
    cout<<"\n\t_____________"<<"\t__________"<<"\t______________"<<"\t___________"<<"\t_____";
    cout<<"\t_______________"<<"\t_____________"<<"\t_______________"<<"\t________________";

    while(file)
    {
        file.read((char*)&d1,sizeof(d1));
        if(file.eof())
        {
            break;
        }
        cout<<setw(9)<<left<<"\n\n\t"<<d1.empid;
        cout<<setw(10)<<left<<"\t "<<d1.name;
        cout<<setw(6)<<left<<"\t    "<<d1.phone_no;
        cout<<setw(8)<<left<<"\t"<<d1.address;
        cout<<setw(2)<<left<<"\t "<<d1.age;
        cout<<setw(6)<<left<<"\t"<<d1.aadhar_no;
        cout<<setw(2)<<left<<"\t  "<<d1.post;
        cout<<setw(12)<<left<<"\t "<<d1.working_since;
        cout<<setw(10)<<left<<"\t  "<<d1.salary;
    }

    cout<<"\n\n";
    file.close();
    Employee();
}

/* BODY -> TO SEARCH AN INDIVIDUAL EMPLOYEE DETAILS */

void SearchDetail()
{
    fstream file;
    Details d1;
    int eno, f=0;

    file.open("Employee.txt",ios::in|ios::binary);

    cout<<"\n\tEnter the Employee ID : ";
    cin>>eno;

    while(file)
    {
        file.read((char*)&d1,sizeof(d1));
        if(file.eof())
        {
            break;
        }
        if(d1.empid==eno)
        {
            f=1;
            cout<<"\n\tEmployee ID : "<<d1.empid<<"\n";
            cout<<"\n\t\t Name           : "<<d1.name;
            cout<<"\n\t\t Phone Number   : "<<d1.phone_no;
            cout<<"\n\t\t Address        : "<<d1.address;
            cout<<"\n\t\t Age            : "<<d1.age;
            cout<<"\n\t\t Aadhar Number  : "<<d1.aadhar_no;
            cout<<"\n\t\t Designation    : "<<d1.post;
            cout<<"\n\t\t Working Since  : "<<d1.working_since;
            cout<<"\n\t\t Salary(in INR) : "<<d1.salary<<"\n\n";
        }
    }

    if(f==0)
    {
        cout<<"\n\tEmployee ID : "<<eno;
        cout<<"\n\n\tEmployee Record NOT Found ... \n\n";
    }

    file.close();
    Employee();
}

/* BODY -> TO DELETE AN INDIVIDUAL EMPLOYEE DETAILS */

void DeleteDetail()
{
    Details d1;
    fstream file1, file2;
    int eno, f=0;

    file1.open("Employee.txt",ios::in|ios::binary);
    file2.open("Temp.txt",ios::out|ios::binary);

    cout<<"\n\tEnter the Employee ID : ";
    cin>>eno;

    while(file1)
    {
        file1.read((char*)&d1,sizeof(d1));
        if(file1.eof())
        {
            break;
        }
        if(eno!=d1.empid)
        {
            file2.write((char*)&d1,sizeof(d1));
        }
        if(eno==d1.empid)
        {
            f=1;
        }
    }

    file1.close();
    file2.close();

    if(f==1)
    {
        cout<<"\n\t Record DELETED successfully ...";
    }
    else
    {
        cout<<"\n\t Enter Correct Employee ID ...";
    }

    remove("Employee.txt");
    rename("Temp.txt","Employee.txt");
    Employee();
}

/* BODY -> TO MODIFY AN INDIVIDUAL EMPLOYEE DETAILS */

void ModifyDetail()
{
    Details d1;
    fstream file1, file2;
    int eno, f=0;

    file1.open("Employee.txt",ios::in|ios::binary);
    file2.open("Temp1.txt",ios::out|ios::binary);

    cout<<"\n\tEnter the Employee ID : ";
    cin>>eno;

    while(file1)
    {
        file1.read((char*)&d1,sizeof(d1));
        if(file1.eof())
        {
            break;
        }
        if(eno==d1.empid)
        {
            f=1;
            cout<<"\n\tEnter Phone Number : ";
            cin.getline(d1.phone_no,'14','\n');
            cout<<"\n\tEnter Address : ";
            fflush(stdin);
            cin.getline(d1.address,'49','\n');
            cout<<"\n\tEnter Age : ";
            cin>>d1.age;
            cout<<"\n\tEnter Designation : ";
            fflush(stdin);
            cin.getline(d1.post,'19','\n');
            cout<<"\n\tEnter Working Since (in years) : ";
            cin>>d1.working_since;
            cout<<"\n\tEnter Salary (in INR) : ";
            cin>>d1.salary;
        }
        file2.write((char*)&d1,sizeof(d1));
    }

    file1.close();
    file2.close();
    if(f==1)
    {
        cout<<"\n\t Record MODIFIED successfully ...\n";
    }
    else
    {
        cout<<"\n\t Enter Correct Employee ID ...";
    }

    remove("Employee.txt");
    rename("Temp1.txt","Employee.txt");
    Employee();
}

/* BODY -> TO INCREMENT AN INDIVIDUAL EMPLOYEE SALARY */

void IncrementDetail()
{
    fstream file1, file2;
    Details d1;
    int eno, inc=0, f=0;

    file1.open("Employee.txt",ios::in|ios::binary);
    file2.open("Temp1.txt",ios::out|ios::binary);

    cout<<"\n\tEnter the Employee ID : ";
    cin>>eno;
    cout<<"\n\tEnter the Amount to be Incremented : ";
    cin>>inc;

    while(file1)
    {
        file1.read((char*)&d1,sizeof(d1));
        if(file1.eof())
        {
            break;
        }
        if(eno==d1.empid)
        {
            f=1;
            d1.salary += inc;
        }
        file2.write((char*)&d1,sizeof(d1));
    }

    file1.close();
    file2.close();
    if(f==1)
    {
        cout<<"\n\t Salary INCREMENTED successfully ...\n\n";
    }
    else
    {
        cout<<"\n\t Enter Correct Employee ID ...\n\n";
    }

    remove("Employee.txt");
    rename("Temp1.txt","Employee.txt");
    Employee();
}

/* DESIGN PORTAL */

void Designs()
{
    int i;
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t    WELCOME TO DESIGN PORTAL\n";
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t1. Enter Details ";
    cout<<"\n\t\t\t\t\t2. Display Details  ";
    cout<<"\n\t\t\t\t\t3. Search Details  ";
    cout<<"\n\t\t\t\t\t4. Modify Details  ";
    cout<<"\n\t\t\t\t\t5. Admin View";

    cout<<"\n\n\t\t\t\t\tChoose ( 1 - 5 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            DesignDetails();
        case 2:
            DesignDisplay();
        case 3:
            SearchDesign();
        case 4:
            ModifyDesign();
        case 5:
            AtaniaPortal();
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* BODY -> TO ENTER DESIGN DETAILS */

void DesignDetails()
{
    fstream file;
    Design d;
    char c='Y';

    file.open("Design.txt",ios::app|ios::binary);

    do
    {
        cout<<"\n\tEnter Design Number : ";
        cin>>d.design_no;
        cout<<"\n\tEnter Stitches : ";
        cin>>d.stitch;
        cout<<"\n\tEnter Fabric Colour : ";
        fflush(stdin);
        cin.getline(d.fabric_color,'19','\n');
        cout<<"\n\tEnter Yarn Colour : ";
        fflush(stdin);
        cin.getline(d.yarn_color_used,'19','\n');

        file.write((char*)&d,sizeof(d));

        cout<<"\n\t --> Want to Enter more (y/n) : ";
        cin>>c;
    }while((c=='Y')||(c=='y'));

    file.close();
    Designs();
}

/* BODY -> TO DISPLAY (ALL) DESIGN DETAILS */

void DesignDisplay()
{
    fstream file;
    Design d1;

    file.open("Design.txt",ios::in|ios::binary);

    cout<<"\n\t_______________"<<"\t__________"<<"\t______________"<<"\t____________";
    cout<<setw(14)<<left<<"\n\n\t DESIGN NUMBER";
    cout<<setw(12)<<left<<"\t STITCHES";
    cout<<setw(15)<<left<<"\t FABRIC COLOR";
    cout<<setw(12)<<left<<"\t YARN COLOR";
    cout<<"\n\t_______________"<<"\t__________"<<"\t______________"<<"\t____________";

    while(file)
    {
        file.read((char*)&d1,sizeof(d1));
        if(file.eof())
        {
            break;
        }
        cout<<setw(9)<<left<<"\n\n\t"<<d1.design_no;
        cout<<setw(7)<<left<<"\t"<<d1.stitch;
        cout<<setw(6)<<left<<"\t   "<<d1.fabric_color;
        cout<<setw(8)<<left<<"\t"<<d1.yarn_color_used;
    }

    cout<<"\n\n";
    file.close();
    Designs();
}

/* BODY -> TO SEARCH AN INDIVIDUAL DESIGN DETAILS */

void SearchDesign()
{
    fstream file;
    Design d1;
    int dno, f=0;

    file.open("Design.txt",ios::in|ios::binary);

    cout<<"\n\tEnter the Design Number : ";
    cin>>dno;

    while(file)
    {
        file.read((char*)&d1,sizeof(d1));
        if(file.eof())
        {
            break;
        }
        if(d1.design_no==dno)
        {
            f=1;
            cout<<"\n\tDesign Number : "<<d1.design_no<<"\n";
            cout<<"\n\t\t Stitches      : "<<d1.stitch;
            cout<<"\n\t\t Fabric Colour : "<<d1.fabric_color;
            cout<<"\n\t\t Yarn Colour   : "<<d1.yarn_color_used;
            cout<<"\n\n";
        }
    }

    if(f==0)
    {
        cout<<"\n\t Design No : "<<dno;
        cout<<"\n\n\t Design Details NOT Found ... \n\n";
    }
    file.close();
    Designs();
}

/* BODY -> TO MODIFY AN INDIVIDUAL DESIGN DETAILS */

void ModifyDesign()
{
    Design d1;
    fstream file1, file2;
    int dno, f=0;

    file1.open("Design.txt",ios::in|ios::binary);
    file2.open("Temp1.txt",ios::out|ios::binary);

    cout<<"\n\tEnter the Design Number : ";
    cin>>dno;

    while(file1)
    {
        file1.read((char*)&d1,sizeof(d1));
        if(file1.eof())
        {
            break;
        }
        if(dno==d1.design_no)
        {
            f=1;
            cout<<"\n\tEnter Stitches : ";
            cin>>d1.stitch;
            cout<<"\n\tEnter Fabric Colour : ";
            fflush(stdin);
            cin.getline(d1.fabric_color,'19','\n');
            cout<<"\n\tEnter Yarn Colour : ";
            fflush(stdin);
            cin.getline(d1.yarn_color_used,'19','\n');
        }
        file2.write((char*)&d1,sizeof(d1));
    }

    file1.close();
    file2.close();
    if(f==1)
    {
        cout<<"\n\t Record MODIFIED successfully ...\n\n";
    }
    else
    {
        cout<<"\n\t Enter Correct Design Number ...\n\n";
    }

    remove("Design.txt");
    rename("Temp1.txt","Design.txt");
    Designs();
}

/* BUYERS PORTAL */

void Buyers()
{
    int i;
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t    WELCOME TO BUYERS PORTAL\n";
    cout<<"\t\t\t\t\t________________________________\n";
    cout<<"\n\t\t\t\t\t1. Enter Details ";
    cout<<"\n\t\t\t\t\t2. Display Details ";
    cout<<"\n\t\t\t\t\t3. Enter Orders ";
    cout<<"\n\t\t\t\t\t4. Display Orders ";
    cout<<"\n\t\t\t\t\t5. Search Order  ";
    cout<<"\n\t\t\t\t\t6. Modify Order  ";
    cout<<"\n\t\t\t\t\t7. Admin View ";

    cout<<"\n\n\t\t\t\t\tChoose ( 1 - 7 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            BuyerDetails();
        case 2:
            DisplayBuyer();
        case 3:
            BuyerOrders();
        case 4:
            DisplayOrder();
        case 5:
            SearchOrder();
        case 6:
            ModifyOrder();
        case 7:
            AtaniaPortal();
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* BODY -> TO ENTER BUYER DETAILS */

void BuyerDetails()
{
    fstream file;
    Buyer b;
    char c='Y';

    file.open("Buyers.txt",ios::app|ios::binary);

    do
    {
        cout<<"\n\tEnter Buyer ID : ";
        cin>>b.party_id;
        cout<<"\n\tEnter Buyer Name : ";
        fflush(stdin);
        cin.getline(b.party_name,'19','\n');
        cout<<"\n\tEnter Buyer Phone Number : ";
        cin.getline(b.phone_no,'14','\n');

        file.write((char*)&b,sizeof(b));

        cout<<"\n\t --> Want to Enter more (y/n) : ";
        cin>>c;
    }while((c=='Y')||(c=='y'));

    file.close();
    Buyers();
}

/* BODY -> TO DISPLAY (ALL) BUYER DETAILS */

void DisplayBuyer()
{
    fstream file;
    Buyer b1;

    file.open("Buyers.txt",ios::in|ios::binary);

    cout<<"\n\t_____________"<<"\t____________"<<"\t______________";
    cout<<setw(16)<<left<<"\n\n\t  BUYER ID";
    cout<<setw(16)<<left<<"\t    NAME";
    cout<<setw(1)<<left<<"\t PHONE NUMBER";
    cout<<"\n\t_____________"<<"\t____________"<<"\t______________";

    while(file)
    {
        file.read((char*)&b1,sizeof(b1));
        if(file.eof())
        {
            break;
        }
        cout<<setw(9)<<left<<"\n\n\t "<<b1.party_id;
        cout<<setw(13)<<left<<"\t"<<b1.party_name;
        cout<<setw(7)<<left<<"\t"<<b1.phone_no;
        cout<<"\n\n";
    }

    file.close();
    Buyers();
}

/* BODY -> TO ENTER BUYER ORDERS */

void BuyerOrders()
{
    fstream file;
    Buyer b;
    char c='Y';

    file.open("Orders.txt",ios::app|ios::binary);

    do
    {
        cout<<"\n\tEnter Buyer ID : ";
        cin>>b.party_id;
        do
        {
            cout<<"\n\t Enter Order Number : ";
            cin>>b.order_no;
            cout<<"\n\t Enter Design Number : ";
            cin>>b.design_num;
            cout<<"\n\t Quantity : ";
            cin>>b.qty;
            cout<<"\n\t Buyer wants (including Stitching and Packaging) along with : ";
            cout<<"\n\t\t 1. Computerized Embroidery ";
            cout<<"\n\t\t 2. Hand Embroidery ";
            cout<<"\n\t\t 3. Computerized Embroidery & Hand Embroidery ";
            cout<<"\n\t\t -----> ";
            cin>>b.choice;

            file.write((char*)&b,sizeof(b));

            cout<<"\n\t --> More orders for Buyer ID "<<b.party_id<<" (y/n) : ";
            cin>>c;
        }while((c=='Y')||(c=='y'));
        cout<<"\n\t --> Order of Another Buyer (y/n) : ";
        cin>>c;
    }while((c=='Y')||(c=='y'));

    file.close();
    Buyers();
}

/* BODY -> TO DISPLAY (ALL) BUYER ORDERS */

void DisplayOrder()
{
    fstream file;
    Buyer b1;

    file.open("Orders.txt",ios::in|ios::binary);

    cout<<"\n\t__________\t______________\t_______________\t__________\t__________________________________________";
    cout<<"\n\n\t BUYER ID ";
    cout<<"\t ORDER NUMBER ";
    cout<<"\t DESIGN NUMBER ";
    cout<<"\t QUANTITY ";
    cout<<"\t\t            ORDER OF ";
    cout<<"\n\t__________\t______________\t_______________\t__________\t__________________________________________";

    while(file)
    {
        file.read((char*)&b1,sizeof(b1));
        if(file.eof())
        {
            break;
        }
        cout<<"\n\n\t    "<<setw(10)<<left<<b1.party_id;
        cout<<"\t   "<<setw(10)<<left<<b1.order_no;
        cout<<"\t  "<<setw(10)<<left<<b1.design_num;
        cout<<"\t"<<setw(5)<<left<<b1.qty;
        cout<<"\t"<<setw(10)<<left;
        if(b1.choice==1)
        {
            cout<<" Computerized Embroidery ";
        }
        if(b1.choice==2)
        {
            cout<<" Hand Embroidery ";
        }
        if(b1.choice==3)
        {
        cout<<" Computerized Embroidery & Hand Embroidery ";
        }
        cout<<"\n";
    }

    file.close();
    Buyers();
}

/* BODY -> TO SEARCH AN INDIVIDUAL BUYER ORDER */

void SearchOrder()
{
    fstream file;
    Buyer b1;
    int bno, f=0, count=1;

    file.open("Orders.txt",ios::in|ios::binary);

    cout<<"\n\tEnter the Buyer ID : ";
    cin>>bno;

    while(file)
    {
        file.read((char*)&b1,sizeof(b1));
        if(file.eof())
        {
            break;
        }
        if(b1.party_id==bno)
        {
            f=1;
            while(count==1)
            {
                cout<<"\n\t__________\t______________\t_______________\t__________\t__________________________________________";
                cout<<"\n\n\t BUYER ID ";
                cout<<"\t ORDER NUMBER ";
                cout<<"\t DESIGN NUMBER ";
                cout<<"\t QUANTITY ";
                cout<<"\t\t            ORDER OF ";
                cout<<"\n\t__________\t______________\t_______________\t__________\t__________________________________________";
                count++;
            }
            cout<<"\n\n\t    "<<setw(10)<<left<<b1.party_id;
            cout<<"\t   "<<setw(10)<<left<<b1.order_no;
            cout<<"\t  "<<setw(10)<<left<<b1.design_num;
            cout<<"\t"<<setw(5)<<left<<b1.qty;
            cout<<"\t"<<setw(10)<<left;
            {
                if(b1.choice==1)
                    cout<<" Computerized Embroidery ";
                if(b1.choice==2)
                    cout<<" Hand Embroidery ";
                if(b1.choice==3)
                    cout<<" Computerized Embroidery & Hand Embroidery ";
            }
            cout<<"\n\n";
        }
    }

    if(f==0)
    {
        cout<<"\n\t Buyer ID : "<<bno;
        cout<<"\n\n\t Buyer Orders NOT Found ... \n\n";
    }

    file.close();
    Buyers();
}

/* BODY -> TO MODIFY AN INDIVIDUAL BUYER ORDER */

void ModifyOrder()
{
    Buyer b1;
    fstream file1, file2;
    int bno, ono, f=0;

    file1.open("Orders.txt",ios::in|ios::binary);
    file2.open("Temp1.txt",ios::out|ios::binary);

    cout<<"\n\tEnter the Buyer ID : ";
    cin>>bno;
    cout<<"\n\t Enter the Order No : ";
    cin>>ono;

    while(file1)
    {
        file1.read((char*)&b1,sizeof(b1));
        if(file1.eof())
        {
            break;
        }
        if((bno==b1.party_id)&&(ono==b1.order_no))
        {
            f=1;
            cout<<"\n\t Enter Design Number : ";
            cin>>b1.design_num;
            cout<<"\n\t Quantity : ";
            cin>>b1.qty;
            cout<<"\n\t Buyer wants (including Stitching and Packaging) along with : ";
            cout<<"\n\t\t 1. Computerized Embroidery ";
            cout<<"\n\t\t 2. Hand Embroidery ";
            cout<<"\n\t\t 3. Computerized Embroidery  & Hand Embroidery ";
            cout<<"\n\t\t -----> ";
            cin>>b1.choice;
        }
        file2.write((char*)&b1,sizeof(b1));
    }

    file1.close();
    file2.close();
    if(f==1)
    {
        cout<<"\n\t Record MODIFIED successfully...\n";
    }
    else
    {
        cout<<"\n\t Enter Correct Buyer ID or Order No ...";
    }

    remove("Orders.txt");
    rename("Temp1.txt","Orders.txt");
    Buyers();
}

/* MONEY MANAGEMENT PORTAL */

void MoneyManagement()
{
    int i;
    cout<<"\t\t\t\t\t______________________________________\n";
    cout<<"\n\t\t\t\t\t  WELCOME TO MONEY MANAGEMENT PORTAL\n";
    cout<<"\t\t\t\t\t______________________________________\n";
    cout<<"\n\t\t\t\t\t1. Salary Paid ";
    cout<<"\n\t\t\t\t\t2. Income ";
    cout<<"\n\t\t\t\t\t3. Revenue ";
    cout<<"\n\t\t\t\t\t4. Admin View";

    cout<<"\n\n\t\t\t\t\tChoose ( 1 - 4 ) : ";
    cin>>i;
    cout<<"\n";

    switch(i)
    {
        case 1:
            EmployeeSummary();
        case 2:
            BuyerSummary();
        case 3:
            DisplayRevenue();
        case 4:
            AtaniaPortal();
        default:
            cout<<"\n\tEnter Correct Choice...\n\n";
            break;
    };
}

/* BODY -> TO DISPLAY THE TOTAL MONTHLY SALARY OF THE EMPLOYEES */

void EmployeeSummary()
{
    Details d;
    fstream file1, file2;
    Income i;

    file1.open("Employee.txt",ios::in|ios::binary);
    file2.open("Salary.txt",ios::out|ios::binary);

    cout<<"\n\t_____________\t________________";
    cout<<"\n\n\t EMPLOYEE ID";
    cout<<"\t SALARY(IN INR)";
    cout<<"\n\t_____________\t________________\n\n";

    while(file1)
    {
        file1.read((char*)&d,sizeof(d));
        if(file1.eof())
        {
            break;
        }
        cout<<setw(7)<<left<<"\t"<<d.empid;
        cout<<setw(15)<<left<<"\t"<<d.salary;
        cout<<"\n";
        i.totalsal += d.salary;
    }
    cout<<"\n\t_____________\t________________\n";
    cout<<"\n\t| NET SALARY |\t    "<<i.totalsal<<"/=";
    cout<<"\n\t_____________\t________________\n\n";
    file2.write((char*)&i,sizeof(i));

    file1.close();
    file2.close();
    MoneyManagement();
}

/* BODY -> TO DISPLAY THE TOTAL MONTHLY INCOME FROM THE BUYERS */

void BuyerSummary()
{
    fstream file1, file2, file3;
    Design d1;
    Buyer b1;
    Income i;
    int pid=1;
    unsigned long int amt = 0;

    file1.open("Orders.txt",ios::in|ios::binary);
    file2.open("Revenue.txt",ios::out|ios::binary);

    cout<<"\n\t_____________\t_______________\t________________";
    cout<<"\n\n\t  BUYER ID";
    cout<<"\t        ORDER NO";
    cout<<"\t INCOME (IN INR)";
    cout<<"\n\t_____________\t_______________\t________________\n\n";

    while(file1)
    {
        file1.read((char*)&b1,sizeof(b1));

        if(b1.party_id != pid)
        {
            cout<<"\t_____________\t_______________\t________________";
            cout<<"\n\t|"<<setw(3)<<left<<"\t "<<(b1.party_id-1)<<"     |  | GROSS INCOME"<<setw(6)<<left<<" | |   "<<i.grossincome<<"/=  |";
            cout<<"\n";
            cout<<"\t-------------\t---------------\t----------------\n\n";

            pid = b1.party_id;
            i.netincome += i.grossincome;
            i.grossincome = 0;
        }
        if(file1.eof())
        {
            break;
        }

        file3.open("Design.txt",ios::in|ios::binary);

        while(file3)
        {
            file3.read((char*) &d1, sizeof(d1));
            if(file3.eof())
            {
                break;
            }

            if((d1.design_no==b1.design_num)&&(b1.choice==1))
            {
                amt = b1.qty*((0.002*d1.stitch)+115+1) ;
            }
            if(b1.choice==2)
            {
                amt = b1.qty*(95+115+1) ;
            }
            if((d1.design_no==b1.design_num)&&(b1.choice==3))
            {
                amt = b1.qty*((0.002*d1.stitch)+115+1+95) ;
            }
        }

        cout<<setw(24)<<left<<"\t"<<b1.order_no;
        cout<<setw(10)<<left<<"\t"<<amt;
        cout<<"\n";
        i.grossincome += amt;
        file3.close();
    }

    cout<<"\t_____________\t_______________\t________________";
    cout<<"\n\t|"<<setw(3)<<left<<"\t "<<(b1.party_id)<<"     |  | GROSS INCOME"<<setw(6)<<left<<" | |   "<<i.grossincome<<"/=   |";
    cout<<"\n\t-------------\t---------------\t----------------";

    i.netincome += i.grossincome;
    cout<<"\n\t_______________________________\t________________";
    cout<<"\n\n\t|           NET INCOME         |\t"<<i.netincome<<"/=";
    cout<<"\n\t_______________________________\t________________\n\n";
    file2.write((char*)&i,sizeof(i));

    file2.close();
    file3.close();
    MoneyManagement();
}

/* BODY -> TO DISPLAY THE TOTAL MONTHLY PROFIT OF THE COMPANY */

void DisplayRevenue()
{
    fstream file1, file2;
    Income i;
    unsigned long int Profit=0, Loss=0;
    unsigned long int salary=0, incm=0;

    file1.open("Salary.txt",ios::in|ios::binary);
    file2.open("Revenue.txt",ios::in|ios::binary);

    cout<<"\n\t______________________\n";
    cout<<"\n\t|       REVENUE      |";
    cout<<"\n\t______________________\n";
    while(file1)
    {
        file1.read((char*)&i,sizeof(i));
        if(file1.eof())
        {
            break;
        }
        cout<<"\n\tSALARY PAID| "<<setw(1)<<left<<" "<<i.totalsal<<"/=";
        salary = i.totalsal;
    }
    while(file2)
    {
        file2.read((char*)&i,sizeof(i));
        if(file2.eof())
        {
            break;
        }
        cout<<"\n\n\tNET INCOME | "<<setw(1)<<left<<" "<<i.netincome<<"/=";
        incm = i.netincome;
    }

    if(incm>salary)
    {
        Profit = (incm - salary);
        cout<<"\n\t_______________________";
        cout<<"\n\n\t|  PROFIT  | "<<Profit<<"/= |";
        cout<<"\n\t_______________________\n\n";
    }
    if(salary>incm)
    {
        Loss = (salary - incm);
        cout<<"\n\t______________________";
        cout<<"\n\n\t|   LOSS  | "<<Loss<<"/= |";
        cout<<"\n\t______________________\n\n";
    }

    file1.close();
    file2.close();
    MoneyManagement();
}
