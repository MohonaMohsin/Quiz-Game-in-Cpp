#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


using namespace std;

class QuizeGame {

public:
    string name;
    int age;
    int corrects;

    void Display();
    void Menu();
    
    void Start_Game();
    void Question();
    void View_Score();
    void Search_Player();
    void Delete();


};

void QuizeGame:: Display()
{

        cout<<"\n\n\n\n\n\n";
		cout<<"\n\t   +-------+                          _______       _______                             ";
		cout<<"\n\t   |       |      |         |            |                /                              ";
		cout<<"\n\t   |       |      |         |            |               /                               ";
		cout<<"\n\t   |       |      |         |            |              /                                ";
		cout<<"\n\t   |   \\   |      |         |            |             /                                 ";
		cout<<"\n\t   |    \\  |      |         |            |            /                                  ";
		cout<<"\n\t   +-----\\-+      |_________|         ___|___        /_______                          ";
		cout<<"\n\n\n\n\n\n";
		cout<<"\n\t   +-------+       /\\       |\\            /| +-------                  ";
		cout<<"\n\t   |       |      /  \\      | \\          / | |                          ";
		cout<<"\n\t   |             /    \\     |  \\        /  | |                          ";
		cout<<"\n\t   |            /------\\    |   \\      /   | +-------                  ";
		cout<<"\n\t   |   ----|   /        \\   |    \\    /    | |                         ";
		cout<<"\n\t   |       |  /          \\  |     \\  /     | |                        ";
		cout<<"\n\t   +-------+ /            \\ |      \\/      | +-------                ";


		cout<<"\n\n\n\n\n\n\t\t\t   PRESS ENTER TO CONTINUE.....     ";


		system("pause");
		system("cls");

}

void QuizeGame::Menu()
{

        menustart:
            system("cls");

        int choice;
        cout<<"\t\t\t--------------------------------------------------------------------------\n";
        cout<<"\t\t\t|                  Welcome to Quiz Game                          |\n";
        cout<<"\t\t\t--------------------------------------------------------------------------\n";
        cout<<"\t\t\t-------------------       MENU        -----------------------------------\n\n";
        cout<<"\t\t\t\t\t1.Start Game"<<endl;
        cout<<"\t\t\t\t\t2.View Score"<<endl;
        cout<<"\t\t\t\t\t3.Search Player"<<endl;
        cout<<"\t\t\t\t\t4.Delete Score"<<endl;
        cout<<"\t\t\t\t\t5.Exit"<<endl;
        cout<<"\n\t\t\t\t\tEnter your choice (1/2/3/4/5) :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        Start_Game();
                        break;
                case 2:
                        View_Score();
                        break;
                case 3:
                        Search_Player();
                        break;
                case 4:
                        Delete();
                        break;
                case 5:
                        exit(0);
                        cout<<"\n\t\t\t\t\tThanks for using this program.\n\t\t\t\t\tThis program is created by Team Antivirus.\n\n";

                        break;
                default:
                        system("cls");
                        cout<<"\t\t\t\t\tYou've made a mistake , Try again..\n"<<endl;
                        cin.get();
                        cin.get();
                        goto menustart;
        }


}

void QuizeGame::Start_Game()
{
    system("cls");
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t|                    Starting Quiz Game.....                             |\n";
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;


        cout<<"\n\n\t\t\t 1)Enter Your Name:";
        cin>>name;
        cout<<"\n\t\t\t 2)Enter Your Age:";
        cin>>age;

        ofstream file;
        file.open("quiz.txt",ios::app);
        file<<name<<" "<<age;

        cin.get();
        file.close();

        string Respond;
        cout << "\n\t\t\t Are you ready to take the quiz " << name << "? (yes/no) :  ";
        cin >> Respond;
        if (Respond == "yes"||Respond == "y"||Respond == "Y")
        {
            Question();
        }
        else
        {
            Menu();
        }
}

void QuizeGame::Question()
{
     system("cls");
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t|                    Quiz Game                                |\n";
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        
        
        cout << "\n\nEnter (A/B/C/D) to Answer\n\n";



        string questions[10] = {"1.What year was C++ created?\n",
                                "2.Who invented C++?\n",
                                "3.What is the predescessor of C++?\n",
                                "4.What is not a Palnet?\n",
								"5.Who invented exams?\n",
								"6.What is the speed of light?\n",
								"7.When was wheel invented?\n",
								"8.Where is Polar bear found?\n",
								"9.What element state is fire?\n",
								"10.Who wrote 'Mahabharat'?\n"};

        string answers[][10] = {{"A.1940\t", "B.1979\t", "C.1949\t", "D1985\t\nAns: "},
                                {"A.Bjarne Stroustrup\t", "B.Frank Einstein\t", "C.Michael Jordan\t", "D.Mark Zuckerburg\t\nAns: "},
                                {"A.C\t", "B.C#\t", "C.C++\t", "D.F++\t\nAns: "},
                                {"A.Neptune\t", "B.Pluto\t", "C.Venus\t", "D.Uranus\t\nAns: "},
								{"A.Henry Fischel\t", "B.Carl Friedrich Gauss\t", "C.D r Kaprekar\t", "D.Frank Einstein\t\nAns: "},
								{"A.320000 km/sec\t", "B.290000 km/sec\t", "C.30000000 km/sec\t", "D.300000 km/sec\t\nAns: "},
								{"A.7th millennium BC\t", "B.3rd millennium BC\t", "C.4th millennium BC\t", "D.6th millennium BC\t\nAns: "},
								{"A.North Pole\t", "B.South Pole\t", "C.Netherland\t", "D.Canada\t\nAns: "},
								{"A.Liquid\t", "B.Gas\t", "C.Solid\t", "D.Plasma\t\nAns: "},
								{"A. Vyasa Krishna Dwaipayana\t", "B.Valmiki\t", "C.Veda Vayas\t", "D.Parshurama\t\nAns: "}};
								
		

        char answerKey[] = {'B', 'A', 'C', 'B', 'A', 'D', 'C', 'A', 'D', 'C'};
        corrects = 0;

        int size = sizeof(questions) / sizeof(questions[0]);
        char answer;

        for (int i = 0; i < size; i++)
        {
            cout << questions[i];
            for (int j = 0; j < size; j++)
            {
                cout << answers[i][j];
            }
            
            cin >> answer;
            answer = toupper(answer);
            
            if (answerKey[i] == answer)
            {
                corrects++;
                
            }
            
            cout<<"Correct answew: "<<answerKey[i]<<endl;
        }

        cout << "\n\nYou answered " << corrects << " questions correctly"<<endl;

        ofstream file;
        
        file.open("quiz.txt",ios::app);

        file<<" "<<corrects<<endl;


        cin.get();
        cin.get();
        file.close();
        

        Menu();

}


void QuizeGame::View_Score()
{

    system("cls");
    fstream file;
    int total=1;

        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t|                          Score                                |\n";
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;


    file.open("quiz.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data Is Present...";
        file.close();

    }
    else
    {
        file >> name>> age;
        file>>corrects;

        while (!file.eof())
        {

           cout<<"\n\n\t\t\t Serial NO:" << total++;


           cout<<"\n\n\t\t\t 1)Name: "<< name;
           cout<<"\n\t\t\t 2)Age: "<<age;

           file>> name>>age;

           cout<<"\n\t\t\t 3)Score: "<<corrects;
            file>>corrects;

            }
    }
       if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present..."<<endl;

        }

    file.close();
    
    cout << "\n\n\t\t\t\t\t\tpress enter to go back to menu!!";
    cin.get();
    cin.get();
    Menu();
}

void QuizeGame::Search_Player()
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("quiz.txt", ios::in);
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t|                          SEARCH                              |\n";
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;

    if (!file)
    {

        cout << "\n\t\t\t\t\t\t\t No Data Is Present...";
    }
    else
    {
        string Name;

        cout << "\n\n\t\t\t Enter Nmae Which You Want to Search: ";
        cin >> Name;
        file >> name>> age>> corrects;
        while (!file.eof())
        {
            if (Name == name)
            {

                cout<<"\n\n\t\t\t 1)Name: "<< name;
                cout<<"\n\t\t\t 2)Age: "<<age;
                cout<<"\n\t\t\t 3)Score: "<<corrects;
                found++;
                }
        file >> name>> age>> corrects;
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t Not Found...";
        }
        file.close();

    }
    
    cout << "\n\n\t\t\t\t\t\tpress enter to go back to menu!!";
    
    cin.get();
    cin.get();
    Menu();
}


void QuizeGame::Delete()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string name1;

        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t|                         DELETE RESULT                              |\n";
        cout<<"\t\t\t--------------------------------------------------------------------"<<endl;



    file.open("quiz.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\n\n\t\t\tEnter the Player Name which Player Data you want to Delete: ";
        cin >> name1;

        file1.open("record.txt", ios::app | ios::out);

        file >> name>> age>> corrects;
        while (!file.eof())
        {
            if (name!= name1)
            {
              file1<<name<<" "<<age<<" "<<corrects<<endl;
            }
            else
            {
                found++;
                cout << "\n\n\t\t\t\t\t\tSuccessfully Delete Data";
            }
        file >> name>> age>> corrects;
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t  Not Found....";
        }
        file1.close();
        file.close();
        remove("quiz.txt");
        rename("record.txt", "quiz.txt");

    }
    
    cout << "\n\n\t\t\t\t\t\tpress enter to go back to menu!!";
    cin.get();
    cin.get();
    Menu();

}

int main()
{
    QuizeGame obj;

    obj.Display();
    obj.Menu();

    return 0;
}
