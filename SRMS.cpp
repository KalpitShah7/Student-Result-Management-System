#include<iostream>
#include<iomanip>
#include<fstream>
#include<windows.h> //  header file for gotoxy
#include <stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;


void welcome();
void enter_details();
void SHOW_DETAILS();
void di_all_stud();
void di_sp_stud();
void result_s();
void cr_re();
void edit_re();
void delete_re();
void delete_re();
void stud_pc_de();

///function definition of calculate function of stud_final_marks class


///****************************************************************************
///                     CLASS  :  STUD_DETAILS
///****************************************************************************

class stud_details
{
protected:
    char name[100];
    int enrollment_num;
    char branch[100];
public:

    void get_data()
    {
        cout<<"Enter personal details of students ----";
        cout<<"\n\nName : ";
        cin>>name;
        cout<<"\nEnrollment number : ";
        cin>>enrollment_num;
    }
    int* roll()
    {
        return enrollment_num;
    }

};

///******************************************************************************
///                     CLASS  :  STUD_MARKS_PRACTICAL
///******************************************************************************

class stud_marks_practical
{
protected:
    int DEp;
    int CDCp;
    int ESFP_IIp;
    int BCSp;
    int BOSSp;
public:


    void get_data()
    {
        cout<<"\n\nEnter marks for Practical out of 50 :";
        cout<<"\nDE : ";
        cin>>DEp;
        cout<<"\nCDC : ";
        cin>>CDCp;
        cout<<"\nESFP-II : ";
        cin>>ESFP_IIp;
        cout<<"\nBCS : ";
        cin>>BCSp;
        cout<<"\nBOSS : ";
        cin>>BOSSp;

    //function for each sunjects
    //we can make diff. class for each sub but if time permit ......
    }
};


///****************************************************************************
///                     CLASS  :  STUD_MARKS_THEORY
///****************************************************************************

class stud_marks_theory
{

protected:
    int DE;
    int CDC;
    int ESFP_II;
    int BCS;
    int BOSS;
public:
    void get_data()
    {

        cout<<"\n\nEnter marks for Theory out of 100:";
        cout<<"\nDE : ";
        cin>>DE;
        cout<<"\nCDC : ";
        cin>>CDC;
        cout<<"\nESFP-II : ";
        cin>>ESFP_II;
        cout<<"\nBCS : ";
        cin>>BCS;
        cout<<"\nBOSS : ";
        cin>>BOSS;

    }
};

///****************************************************************************
///                     CLASS  :  STUD_final_result
///****************************************************************************

/// we have apply multiple inheritance and inherited class stud_marks_theory , stud_marks_practical and stud_details in stud_final_result.

class stud_final_result:public stud_marks_theory,public stud_marks_practical,public stud_details
{
protected:
    double per;
    char grade;
    double ans;
    char grade2;
public:
     ///calculate percentage and grade
    void calculate_t()
    {
             stud_details::get_data();
             stud_marks_theory::get_data();
             stud_marks_practical::get_data();
            per=(DE+CDC+ESFP_II+BCS+BOSS)/5.0;
            ans=(DEp+CDCp+ESFP_IIp+BCSp+BOSSp)*100/250;
        if(per>=80)
            {
                 cout<<"\nPass";
                grade='A';
            }
        else if(per>=70)
             {
                 cout<<"\nPass";
                grade='B';
             }
        else if(per>=60)
            {
                 cout<<"\nPass";
                grade='C';
            }
        else if(per>=50)
            {
                cout<<"\nPass";
                grade='D';
             }
        else
            {
                cout<<"\nFail";
                grade='E';
            }

        if(ans>=80)
            {
                 cout<<"\nPass";
                grade2='A';
            }
        else if(ans>=70)
             {
                 cout<<"\nPass";
                grade2='B';
             }
        else if(ans>=60)
            {
                 cout<<"\nPass";
                grade2='C';
            }
        else if(ans>=50)
             {
                cout<<"\nPass";
                grade2='D';
             }
        else
            {
                cout<<"\nFail";
                grade2='E';
            }



    }

///function definition of SHOW_RESULT function of stud_final_marks class

    void show_result()
        {
            cout<<setw(2)<<enrollment_num<<setw(14)<<name
            <<setw(5)<<DE<<setw(5)<<DEp<<setw(5)<<CDC<<setw(5)<<CDCp<<setw(5)<<ESFP_II<<setw(5)<<ESFP_IIp<<setw(5)<<BCS<<setw(5)<<BCSp<<setw(5)<<BOSS<<setw(5)<<BOSSp
            <<setw(6)<<setprecision(4)<<per<<"%"<<setw(5)<<setprecision(4)<<grade<<endl;

        }
         void result_s()
        {
            cout<<endl<<"Name   : "<<name<<endl;
             cout<<setw(25)<<"Theory "<<setw(22)<<"Practical ";
            cout<<"\nDE  \n"<<setw(20)<< DE <<setw(20)<<DEp;
            cout<<"\nCDC  \n"<<setw(20)<< CDC <<setw(20)<<CDCp;
            cout<<"\nESFP-II  \n"<<setw(20)<<ESFP_II<<setw(20)<<ESFP_IIp;
            cout<<"\nBCS  \n"<<setw(20)<< BCS<<setw(20)<<BCSp;
            cout<<"\nBOSS  \n"<<setw(20)<< BOSS<<setw(20)<<BOSSp;

            cout<<endl<<endl<<setw(27)<<" TOTAL THEORY PERCENTAGE = "<<per<<"%"<<setw(12)<<"grade : "<<grade<<endl;
            cout<<endl<<setw(30)<<" TOTAL PRECTICAL PERCENTAGE = "<<ans<<"%"<<setw(12)<<"grade :"<<grade2<<endl;
        }


};


///main function

int main()
{
    int a,b,i;
//    welcome();
    stud_final_result s[10];
    zz:
        cout<<"\n\n\n"<<setw(60)<<"-------------------------------------";
        cout<<"\n"<<setw(60)<<"-------------------------------------";
        cout<<"\n"<<setw(47)<<"MAIN MENU";
        cout<<"\n"<<setw(60)<<"-------------------------------------";
        cout<<"\n"<<setw(60)<<"-------------------------------------\n";
    cout<<"\n"<<setw(40)<<"1.Teacher \n"<<setw(40)<<"2.Student \n"<<setw(37)<<"3.Exit\n\n"<<setw(60)<<"Please Give your choice in (1-3) :";
    cin>>a;
    switch(a)
    {
    case 1:
        {
            int user;
            int pass;
            u:
            cout<<"\n\t\t\t USERNAME  :  ";
            cin>>user;

            if(user==5798)
            {
                p:
                cout<<"\n\t\t\t PASSWORD  : ";
                cin>>pass;

                if(pass==21798)
                {
                    goto pro;
                }
                else
                {
                    cout<<"\n\t\t Rewrite your password ";
                    goto p;
                }

            }
             else
             {
                cout<<"\n\t\t Rewrite your username ";
                goto u;
             }
             pro:

            aa:
                  system("color a");
            cout<<"\n\n\tTEACHER :\n\n\t\t1.Enter / Edit Details.\n\t\t2.Show details.\n\t\t3.Back to menu.\n";
             cout<<"\n\n\tPlease Enter Your Choice (1-3) :";
            cin>>b;
            if(b==1)
            {
                system("color f");
                enter_details();
                goto aa;

            }
            else if(b==2)
            {
                system("color e");
                SHOW_DETAILS();
                goto aa;
            }
            else if(b==3)
            {
                goto zz;
            }
            else
            {
                cout<<"\nWrong Entry.\n";
                goto aa;
            }
    case 2:
        {
            system("color e");
            try
            {
                stud_pc_de();
            }
            catch(int z)
            {
                cout<<"\n Exception Occurs";
                cout<<"\n oops....!!!!!! sorry file is't available  ";
                exit(0);
            }
            goto zz;
             break;
        }
    case 3:
        {
             break;
        }
    default:
        {
            cout<<"\nWrong Entry.\n";
            goto zz;
             break;
        }
    }
    }
}

///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!----------------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
///                                  ALL   FUNCTIONS DEFINITION
///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!----------------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



/// ===== ===== ===== ===== =====  SHOW FUNCTION ==== ===== ====== ====== ===== =====
///*************************************************************************************

void SHOW_DETAILS()
{
    int ap;
    cc:
    cout<<"\n\n\n\tSHOW MENU :";
    cout<<"\n\n\t\t1.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t\t2.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t\t3.BACK TO MENU";
    cout<<"\n\n\t\tPlease Enter Your Choice (1-3) :";
    cin>>ap;
if(ap>0)
{

    if(ap==1)
    {
        try
        {
            di_all_stud();
        }
        catch(int a3)
        {
            cout<<"\n Exception Occured!!";
            cout<<"\n oops....!!!!!! sorry file is't available  ";
            exit(0);
        }
        goto cc;
    }

    else if(ap==2)
    {

        try
        {
            di_sp_stud();
        }
        catch(int a2)
        {
            cout<<"\n Exception Occured!!";
            cout<<"\n oops....!!!!!! sorry file is't available  ";
            exit(0);
        }
        goto cc;
    }
    else if(ap==3)
    {
      //  goto ee;
    }
    else
    {
        cout<<"\nWrong Input Is Given Re-enter your choice :\n";
        goto cc;
    }
}
}



/// ===== ===== ===== ===== =====  ENTRY FUNCTION ==== ===== ====== ====== ===== =====
///*************************************************************************************


void enter_details()
{
    int ain,bin,i;
    bb:

    cout<<"\n\n\n\tENTRY MENU :";
	cout<<"\n\n\t\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t\t2.MODIFY STUDENT RECORD";
	cout<<"\n\n\t\t3.DELETE STUDENT RECORD";
	cout<<"\n\n\t\t4.BACK TO MENU";
	cout<<"\n\n\t\tPlease Enter Your Choice (1-4) : ";

    cin>>ain;
if(ain>0)
    {


    if(ain==1)
        {
            cr_re();

            goto bb;
        }
    else if(ain==2)
        {
            try
            {
                edit_re();
            }
            catch(int b)
            {
                cout<<"\n Exception Occured!";
                cout<<"\n oops....!!!!!! sorry file is't available  ";
                exit(0);
            }

            goto bb;

        }
    else if(ain==3)
        {
            try
            {
                delete_re();
            }
            catch(int a)
            {
                cout<<"\n Exception Occured!";
                cout<<"\n oops....!!!!!! sorry file is't available  ";
                exit(0);
            }

            goto bb;

        }
    else if(ain==4)
        {

          //  goto dd;

        }
    else
        {
            cout<<"\nWrong Input Is Given Re-enter your choice :\n";
            goto bb;
        }
    }
}


///=== ==== ===== ===== =====   DISPLAY ALL STUDENTS RECORD  ==== ==== ==== ==== ====
///***********************************************************************************

void di_all_stud()
{
        stud_final_result s;
        ifstream fi;
        fi.open("STUD.dat",ios::binary|ios::app);
        if(!fi)
        {
            throw 6;
        }
        else
        {
            cout<<"\n\n"<<setw(50)<<"ALL STUDENTS RESULT \n\n";
        cout<<"===============================================================================\n";
        cout<<setw(4)<<"EN.No"<<setw(10)<<"Name"<<setw(7)<<"DE"<<setw(11)<<"CDC"<<setw(12)<<"ESFP-II"<<setw(7)<<"BCS"<<setw(9)<<"BOSS"<<setw(9)<<"per"<<setw(9)<<"Grade\n";
        cout<<"-------------------------------------------------------------------------------\n";
        cout<<setw(19)<<"T"<<setw(5)<<"P"<<setw(5)<<"T"<<setw(5)<<"P"<<setw(5)<<"T"<<setw(5)<<"P"<<setw(5)<<"T"<<setw(5)<<"P"<<setw(5)<<"T"<<setw(5)<<"P\n";
        cout<<"===============================================================================\n";
        while(fi.read((char *) &s, sizeof(stud_final_result)))
        {
            s.show_result();
        }
        fi.close();

        }

        }

///=== ==== ===== ===== =====   DISPLAY SPECIFIC STUDENTS RECORD  ==== ==== ==== ==== ====
///***********************************************************************************

void di_sp_stud()
{

    stud_final_result s;
    int n;
    cout<<"Enter roll number :";
    cin>>n;
	ifstream fi;
	fi.open("STUD.dat",ios::binary);
	if(!fi)
	{
        throw 4;
	}
	else
    {
        int flag=0;

	while(fi.read((char *) &s, sizeof(stud_final_result)))
	{
		if(s.roll()==n)
		{
			 s.result_s();
			 flag=1;
		}
	}
	fi.close();
	if(flag==0)
		cout<<"\n\nrecord not exist";
    }


}

///=== ==== ===== ===== =====   CREATE STUDENT RECORD  ==== ==== ==== ==== ====
///***********************************************************************************

void cr_re()
            {

            stud_final_result s;
            ofstream of;
            of.open("STUD.dat",ios::binary|ios::app);
            s.calculate_t();
            of.write((char *) &s, sizeof( stud_final_result));
            of.close();
            cout<<"\n\nStudent record Has Been Created ";
            }


///=== ==== ===== ===== =====   EDIT STUDENT RECORD  ==== ==== ==== ==== ====
///***********************************************************************************
void edit_re()
            {

            int n;
            cout<<"Enter roll number :";
            cin>>n;
                int found=0;
                stud_final_result s;
                fstream F;
                F.open("STUD.dat",ios::binary|ios::in|ios::out);
                if(!F)
                {
                    throw 3;
                }
                else
                {
                    while(F.read((char *) &s, sizeof(stud_final_result)) && found==0)
                {
                    if(s.roll()==n)
                    {
                        s.result_s();
                        cout<<"\n\nPlease Enter The New Details of student"<<endl;
                        s.calculate_t();
                            int pos=(-1)*sizeof(s);
                            F.seekp(pos,ios::cur);
                            F.write((char *) &s, sizeof(stud_final_result));
                            cout<<"\n\n\t Record Updated";
                            found=1;
                    }
                }
                F.close();
                if(found==0)
                    cout<<"\n\n Record Not Found ";

                }
            }


///=== ==== ===== ===== =====   STUDENT CAN SHOW HIS/HER RECORD  ==== ==== ==== ==== ====
///***********************************************************************************


void delete_re()
    {
            int n1;
            bool flag=false;
            cout<<"\n Enter Roll Number :";
            cin>>n1;
            stud_final_result s;
            ifstream fil;
            fil.open("STUD.dat",ios::binary);
            if(!fil)
            {
                 throw 2;
            }
            //                    }
            else
            {
                ofstream out;
            out.open("Temp.dat",ios::out);
            fil.seekg(0,ios::beg);
            while(fil.read(reinterpret_cast<char *> (&s), sizeof(stud_final_result)))
            {
                if(s.roll()!=n1)
                {
                    out.write(reinterpret_cast<char *> (&s), sizeof(stud_final_result));
                    flag=true;
                }
            }
            out.close();
            fil.close();
            remove("STUD.dat");
            rename("Temp.dat","STUD.dat");
            cout<<"\n\n\tRecord Deleted ..";
                    if(flag==false)
                    {
                        cout<<"\n\n\tRecord not Found..";
                    }


                //
            }

            }

///=== ==== ===== ===== =====   STUDENT cAN SHOW HIS/HER RECORD  ==== ==== ==== ==== ====
///***********************************************************************************


                void stud_pc_de()
                {

                    stud_final_result s;
                    int n;
                    cout<<"Enter roll number :";
                    cin>>n;
                    ifstream fi;
                    fi.open("STUD.dat",ios::binary);
                    if(!fi)
                    {
                        throw 1;
                    }
                        //                    }
                    else
                    {
                        int flag=0;

                    while(fi.read((char *) &s, sizeof(stud_final_result)))
                    {
                        if(s.roll()==n)
                        {
                             s.result_s();
                             flag=1;
                        }
                    }
                    fi.close();
                    if(flag==0)
                        cout<<"\n\nrecord not exist";

                    }

                }

///=== ==== ===== ===== =====  ====  WELCOME   FUNCTION  ====  ==== ==== ==== ==== ====
///***********************************************************************************


COORD coord={0,0}; // this is global variable
void fordelay(int x);                                   //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

 void welcome()
{
    int i1,j1;



        for(j1=2;j1<3;j1++)
        {
             for(i1=0;i1<100;i1++)
            {
                system("color b");
                gotoxy(i1,j1);printf("* . ");//top
                fordelay(10100000);
            }
        }

        cout<<"\n\n"<<setw(45)<<"WELCOME \n\n";


        for(j1=9;j1<10;j1++)
        {
             for(i1=0;i1<100;i1++)
            {
                system("color b");
                gotoxy(i1,j1);printf("* . ");//top
                fordelay(10100000);
            }
        }


         for(j1=13;j1<14;j1++)
        {
             for(i1=0;i1<80;i1++)
            {
                gotoxy(i1,j1); printf("*");//top
                fordelay(10100000);
            }

        }
        cout<<"\n\n"<<setw(63)<<" STUDENT RESULT MANAGEMENT SYSTEM  \n\n\n\n\n\n";
        cout<<"\n"<<setw(60)<<" Project by : - \n"<<setw(70)<<"- Tithi Patel & Kalpit Shah";

         for(j1=26;j1<27;j1++)
        {
             for(i1=0;i1<80;i1++)
            {
                gotoxy(i1,j1);printf("*");//top
                fordelay(10100000);
            }
        }

}
void fordelay(int x1)
{
int n1,k1;
    for(n1=0;n1<x1;n1++)
    {
        k1=n1;
    }
}

