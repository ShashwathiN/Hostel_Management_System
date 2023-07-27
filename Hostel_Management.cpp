#include <iostream>
#include <string.h>
using namespace std;
struct HSTL
{
    int NUMBER = 1;
    int fill = 0;
    long long int stnum[3];
    long long int panum[3];
    char CUS_NAMES[3][10];
    char PAR_NAMES[3][10];
    char email[3][20];
    char address[3][25];
    HSTL *NXT;
    HSTL *PREVIOUS;
};
class hostel
{
    HSTL *TITLE[3];
    friend class hos;
    public:
    hostel()
    {
    for (int x = 0; x < 3; x++)
    TITLE[x] = NULL;}

};
class hos
{
    public:
        HSTL *WORDS;
    hostel h;

   void create()
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 25; y++)
            {
                HSTL *ss = new HSTL;
                ss->NXT = NULL;
                ss->PREVIOUS = NULL;
                if (h.TITLE[x] == NULL)
                {
                    h.TITLE[x] = ss;
                    ss->NUMBER = 1;
                }
                else
                 {  HSTL *WORDS=h.TITLE[x];
                    while (WORDS->NXT != NULL)
                    {
                        WORDS= WORDS->NXT;
                    }
                    if (y>10&&y<=20)
                    {
                        WORDS->NUMBER = 3;
                    }
                    if (y>=1&&y<=10)
                    {
                        WORDS->NUMBER = 2;
                    }
                    WORDS->NXT = ss;
                    ss->PREVIOUS = WORDS;}

            }
        }}
        void detail()
    {
        int fl, rom;
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter the floor number : ";
        cin >> fl;
        int x = 1;
        try
        {
            if (fl < 0 || fl > 4)

            {
                throw(fl);
            }
            else
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\tEnter the room number : ";
            cin >> rom;
                try
                {
                    if (rom < 0 || rom > 26)

                    {
                        throw(rom);
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t\t\t\t\t\t\tDetails of Entered Room is\n";
                        WORDS = h.TITLE[fl - 1];

                    while (x < rom)
                    {
                        WORDS = WORDS->NXT;
                        x++;
                    }
                    if (WORDS->fill==0 )
                    {
                      cout<<"\t\t\t\t\t\t\t\t\t\tRoom is vacant"<<endl;
                       }
                        else if(rom<11)
                        {
                            if(WORDS->stnum[0]!=0){
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[0]<<endl;
                            cout<<endl;}
                            if(WORDS->stnum[1]!=0){
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[1]<<endl;
                            }
                        }
                        else if(rom<21)
                        {
                            if(WORDS->stnum[0]!=0)
                            {
                                cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[0]<<endl;
                            }
                            if(WORDS->stnum[1]!=0)
                            {
                               cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[1]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[1]<<endl;
                            }
                            if(WORDS->stnum[2]!=0)
                            {
                               cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[2]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[2]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[2]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[2]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[2]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[2]<<endl;
                            }

                        }
                        else
                        {
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tName of student: "<<WORDS->CUS_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Phone number: "<<WORDS->stnum[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent Permanent Address: "<<WORDS->address[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent email id: "<<WORDS->email[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tStudent's Parent name: "<<WORDS->PAR_NAMES[0]<<endl;
                            cout<<"\t\t\t\t\t\t\t\t\t\t\tParent's Phone number: "<<WORDS->panum[0]<<endl;
                        }
                        }
                    }


                catch (int r)
                {
                    cout << "\ninvalid room number : "<< r;
                }
            }
            }


        catch (int r)

        {
            cout << "\n floor dosn't exist : "<< r;
        }
    }
    void display()
    {
        int y = 0, z = 0, w = 0;
        for (int x = 0; x < 48; x++)
        {
            cout << "--";
        }
        cout << "\n ";
        for (int x = 1; x < 4; x++)
        {
            cout << "|Floor number : "<< x << " \t\t";
        }
        cout << "|\n" ;
        for (int x = 0; x < 48; x++)
        {
            cout << "--";
        }
        WORDS= h.TITLE[y];
        HSTL *s = h.TITLE[y + 1];
        HSTL *t = h.TITLE[y + 2];
        cout << "\n ";
        while (WORDS!= NULL)
        {
            if (WORDS->fill != WORDS->NUMBER && WORDS->NUMBER != 0)
            {
                y++;
                cout << "|room no : "<< y;
                cout << "->Vacant cots->"<< WORDS->NUMBER;
            }
            else
            {
                y++;
                cout << "|room no : "<< y;
                cout << "->Present ";
            }
            if (s->fill != s->NUMBER && s->NUMBER != 0)
            {
                z++;
                cout << "|room no : "<< y;
                cout << "->Vacant cots->"<< s->NUMBER;
            }
            else
            {
                z++;
                cout << "|room no : "<< y;
                cout << "->Present ";
            }
            if (t->fill != t->NUMBER && t->NUMBER != 0)
            {
                w++;
                cout << "|room no : "<< y;
                cout << "->Vacant cots->"<< t->NUMBER << "| ";
            }
            else
            {
                w++;
                cout << "|room no : "<< y;
                cout << "->Present "<< " | ";
            }
            cout << " \n ";
            for (int x = 0; x < 48; x++)
            {
                cout << "--" ;
            }
            cout << "\n ";
            WORDS= WORDS->NXT;
            s = s->NXT;
            t = t->NXT;
        }
    }
    void booking(int people)
    {
        int fl, rom;
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter the floor number : ";
        cin >> fl;
        try
        {
            if (fl < 0 || fl > 4)

            {
                throw(fl);
            }
            WORDS= h.TITLE[fl - 1];

            cout << "\nt\t\t\t\t\t\t\t\t\t\tEnter the room number : ";
            cin >> rom;
            try
            {

                if (rom < 0 || rom > 26)
                {
                    throw(rom);
                }
                else
                {
                    int x = 1;
                    while (x < rom)
                    {
                        WORDS= WORDS->NXT;
                        x++;
                    }
                    if (WORDS->NUMBER >= people)
                    {
                        cout << "\n\t\t\t\t\t\t\t\t\t\troom is vacant you can apply for room" ;

                        int count = 0;
                        while (WORDS->fill - 1 <= WORDS->NUMBER)
                        {

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter name of Student "<< WORDS-> fill + 1 << " : ";
                            cin >> WORDS->CUS_NAMES[WORDS->fill];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Mobile number of student "<< WORDS-> fill + 1 << " : ";
                            cin>>WORDS->stnum[WORDS->fill];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Permanent Address of Student "<< WORDS-> fill + 1 << " : ";
                            cin >> WORDS->address[WORDS->fill];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter email id of Student "<< WORDS-> fill + 1 << " : ";
                            cin >> WORDS->email[WORDS->fill];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter name of Student "<< WORDS-> fill + 1 << " Parent(Father/Mother) : ";
                            cin >> WORDS->PAR_NAMES[WORDS->fill];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Mobile number of Parent : ";
                            cin>>WORDS->panum[WORDS->fill];
                            count++;
                            WORDS->fill++;
                            if (count >= people)
                            {
                                break;
                            }
                        }
                        WORDS->NUMBER = WORDS->NUMBER - people;
                    }

                    else
                    {
                        cout << "\n\t\t\t\t\t\t\t\t\t\troom is not vacant... SORRY !!!";
                    }
                }
            }
            catch (int r)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\tinvalid room number : "<< r;
            }
        }
        catch (int r)
        {
            cout << " \n\t\t\t\t\t\t\t\t\t\tinvalid floor number : " << r;
        }
    }
    void cancelled(int check)
    {
        char checking_namess[10];
        int fg = 0;
        int rms, x = 1;
        try
        {
            if (check < 0 || check > 4)

            {
                throw(check);
            }
            else
            {
                cout << " \t\t\t\t\t\t\t\t\t\tEnter the room no : ";
                cin >> rms;
                try
                {
                    if (rms < 0 || rms > 26)
                    {
                        throw(rms);
                    }
                    else
                    {
                        cout << " \t\t\t\t\t\t\t\t\t\tEnter the name to be delete :";

                        cin >> checking_namess;
                        WORDS= h.TITLE[check - 1];
                        while (x < rms)
                        {
                            WORDS= WORDS->NXT;
                            x++;
                        }
                        x = 0;
                        while (x < 3)
                        {

                            if (!strcmp(checking_namess, WORDS-> CUS_NAMES[x]))

                            {
                                fg = 1;
                                break;
                                x = 0;
                            }
                            else
                                x++;
                        }
                        if (fg == 1 && WORDS->fill != 0)
                        {
                            cout << "\n\t\t\t\t\t\t\t\t\t\trecord deleted : "<< WORDS-> CUS_NAMES[x];
                            WORDS->CUS_NAMES[x][0] ='A';
                            WORDS->CUS_NAMES[x][1] ='\0';
                            WORDS->PAR_NAMES[x][0]='A';
                            WORDS->PAR_NAMES[x][1]='\0';
                            WORDS->address[x][0]='A';
                            WORDS->address[x][1]='\0';
                            WORDS->email[x][0]='A';
                            WORDS->email[x][1]='\0';
                            WORDS->panum[x]=0;
                            WORDS->stnum[x]=0;
                           if(WORDS->fill==3&&WORDS->NUMBER==0)
                            {
                                if(x==0)
                                {
                                    strcpy(WORDS->CUS_NAMES[0],WORDS->CUS_NAMES[1]);
                                    strcpy(WORDS->PAR_NAMES[0],WORDS->PAR_NAMES[1]);
                                    strcpy(WORDS->address[0],WORDS->address[1]);
                                    strcpy(WORDS->email[0],WORDS->email[1]);
                                    WORDS->panum[0]=WORDS->panum[1];
                                    WORDS->stnum[0]=WORDS->stnum[1];
                                    strcpy(WORDS->CUS_NAMES[1],WORDS->CUS_NAMES[2]);
                                    strcpy(WORDS->PAR_NAMES[1],WORDS->PAR_NAMES[2]);
                                    strcpy(WORDS->address[1],WORDS->address[2]);
                                    strcpy(WORDS->email[1],WORDS->email[2]);
                                    WORDS->panum[1]=WORDS->panum[2];
                                    WORDS->stnum[1]=WORDS->stnum[2];
                                    WORDS->stnum[2]=0;
                                }
                                else if(x==1)
                                {
                                    strcpy(WORDS->CUS_NAMES[1],WORDS->CUS_NAMES[2]);
                                    strcpy(WORDS->PAR_NAMES[1],WORDS->PAR_NAMES[2]);
                                    strcpy(WORDS->address[1],WORDS->address[2]);
                                    strcpy(WORDS->email[1],WORDS->email[2]);
                                    WORDS->panum[1]=WORDS->panum[2];
                                    WORDS->stnum[1]=WORDS->stnum[2];
                                    WORDS->stnum[2]=0;
                                }

                            }
                            else if((WORDS->fill==2&&WORDS->NUMBER==0)||(WORDS->fill==2&&WORDS->NUMBER==1))
                            {
                                if(x==0)
                                {
                                    strcpy(WORDS->CUS_NAMES[0],WORDS->CUS_NAMES[1]);
                                    strcpy(WORDS->PAR_NAMES[0],WORDS->PAR_NAMES[1]);
                                    strcpy(WORDS->address[0],WORDS->address[1]);
                                    strcpy(WORDS->email[0],WORDS->email[1]);
                                    WORDS->panum[0]=WORDS->panum[1];
                                    WORDS->stnum[0]=WORDS->stnum[1];
                                    WORDS->stnum[1]=0;
                                }
                            }
                            WORDS->fill--;
                            WORDS->NUMBER++;
                        }
                        else

                            cout << "\n\t\t\t\t\t\t\t\t\t\trecord not present ";
                    }
                }
                catch (int r)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\tinvalid room number : " << r;
                }
            }
        }

        catch (int r)

        {
            cout << " \n\t\t\t\t\t\t\t\t\t\t floor dosn't exist : " << r;
        }
    }
    void modify(int check)
    {
        char checking_namess[10];
        int rms, x = 1;
        try
        {
            if (check < 0 || check > 4)

            {
                throw(check);
            }
            else
            {
                cout << " \t\t\t\t\t\t\t\t\t\tEnter the room no : ";
                cin >> rms;
                try
                {
                    if (rms < 0 || rms > 26)

                    {
                        throw(rms);
                    }
                    else
                    {
                        cout << "\t\t\t\t\t\t\t\t\t\tEnter the name to be updated :";

                        cin >> checking_namess;
                        WORDS= h.TITLE[check - 1];
                        while (x < rms)
                        {
                            WORDS= WORDS->NXT;
                            x++;
                        }
                        x = 0;
                        while (x < 3)
                        {
                            if (!strcmp(checking_namess, WORDS-> CUS_NAMES[x]))

                            {
                                cout << "\n\t\t\t\t\t\t\t\t\t\tenter updated name of student : " ;

                                cin >> WORDS->CUS_NAMES[x];
                                cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Mobile number of student :";
                            cin>>WORDS->stnum[x];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Permanent Address of Student :";
                            cin >> WORDS->address[x];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter email id of Student : ";
                            cin >> WORDS->email[x];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter name of Parent(Father/Mother) : ";
                            cin >> WORDS->PAR_NAMES[x];

                            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Mobile number of Parent : ";
                            cin>>WORDS->panum[x];

                                break;
                            }
                            else
                                x++;
                        }
                        if (x >= 3)
                            cout << "\t\t\t\t\t\t\t\t\t\trecord not found ";
                        else
                        {
                            cout << "\n\t\t\t\t\t\t\t\t\t\tRecord is updated ! ";
                        }
                    }
                }
                catch (int r)
                {
                    cout << "\n\t\t\t\t\t\t\t\t\t\tinvalid room number : "<< r;
                }
            }
        }

        catch (int r)

        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t floor dosn't exist : "<< r;
        }
    }
};
int main()
{
/*0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White*/

system("color B4");
    hos objectives;
    int key_rooms;
    char channels;
    int checking_floors;
    objectives.create();
    do
    {
        cout<<"\n\n\n\t\t\t\t\t\t\t\t\t******WELCOME TO HOSTEL BOOKING SYSTEM****\n\n\n";
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t1.BOOK A ROOM FOR 1 PERSON\n\t\t\t\t\t\t\t\t\t\t\t2.BOOK A ROOM FOR 2PERSON\n\t\t\t\t\t\t\t\t\t\t\t3.BOOK A ROOM FOR 3 PERSON\n\t\t\t\t\t\t\t\t\t\t\t4.DISPLAY THE CURRENT STATUS OF ROOMS\n\t\t\t\t\t\t\t\t\t\t\t5.CANCEL A BOOKING\n\t\t\t\t\t\t\t\t\t\t\t6.MODIFY\n\t\t\t\t\t\t\t\t\t\t\t7.CHECK DETAILS"<< endl;
        cout << " \t\t\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE : "   ;
        cin >> key_rooms;
        system("CLS");
        switch (key_rooms)
        {
        case 1:
        {
            objectives.booking(1);
            break;
        }
        case 2:
        {
            objectives.booking(2);
            break;
        }
        case 3:
        {
            objectives.booking(3);
            break;
        }
        case 4:
        {
            objectives.display();
            break;
        }
        case 5:
        {
            cout << "Enter floor number : ";
            cin >> checking_floors;
            objectives.cancelled(checking_floors);
            break;
        }
        case 6:
        {
            cout << "Enter floor number : ";
            cin >> checking_floors;
            objectives.modify(checking_floors);
            break;
        }
         case 7:
        {
            objectives.detail();
            break;
        }



        default:
            cout << "\nInvalid choice ";
        }
        cout << "\nt\t\t\t\t\t\t\t\t\t\tDo you want to continue(Y / N) ";
        cin >> channels;
        system("CLS");
    } while (channels =='Y'|| channels =='y');
}
