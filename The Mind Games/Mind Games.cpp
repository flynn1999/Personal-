# include<iostream.h>
# include <conio.h>
# include<stdlib.h>

void hpquiz();
void sudoku();
void main()
{
clrscr();
char x;
cout<<"                                THE MIND GAMES"<<endl;
cout<<"                               ----------------"<<endl<<endl;
cout<<"A) Play Harry Potter Trivia Quiz."<<endl;
cout<<"B) Play Sudoku";
cout<<endl<<endl<<"Enter Choice (A or B): ";
cin>>x;
char qw;
cin.get(qw);
switch(x)
{
case( 'A' ): hpquiz();
break;
case( 'B' ): sudoku();
    break;
default: cout<<"Wrong choice ";
    break;
}
}
void hpquiz()
{
clrscr();
int a[25], s=0, p;
char name[30], bld_sts[15];
cout<<"                           THE HARRY POTTER TRIVIA"<<endl;
cout<<"                          --------------------------"<<endl<<endl;
cout<<"Enter Your NAME: ";
cin.getline(name,30);
cout<<endl<<"Read the following instructions to know your Blood Status:"<<endl<<endl;
cout<<" 1) If You have BOTH, Read the Books and Seen the Movies; You are a PURE-BLOOD."<<endl;
cout<<" 2) If You have ONLY, Read the Books; You are a HALF-BLOOD."<<endl;
cout<<" 3) If You have ONLY, Seen the Movies; You are a MUDBLOOD."<<endl;
cout<<" 4) If You have NOT, Done any of the above; You are a SQUIB."<<endl<<endl;
cout<<" Following these Instructions, Enter Your BLOOD STATUS: ";
cin.getline(bld_sts,15);
cout<<endl<<endl<<"                         ONLY THE WITTY CAN PREVAIL..."<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<endl<<"Q1. What is the Name of Uncle Vernon s Drilling Company?"<<endl<<endl;
cout<<"    1) Drillits"<<endl;
cout<<"    2) Grunnings"<<endl;
cout<<"    3) Grunners"<<endl;
cout<<"    4) Drillos"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[0];
if (a[0]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q2. What does Profesor McGonagall Become in her Animagus Form?"<<endl<<endl;
cout<<"    1) A Tabby Cat"<<endl;
cout<<"    2) An Eagle Owl"<<endl;
cout<<"    3) A Grey Rabbit"<<endl;
cout<<"    4) A Snowy Cat"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[1];
if (a[1]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q3. What is Albus Dumbledore s Patronus?"<<endl<<endl;
cout<<"    1) A Thestral"<<endl;
cout<<"    2) A Goat"<<endl;
cout<<"    3) An Ox"<<endl;
cout<<"    4) A Phoenix"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[2];
if (a[2]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q4. Harry Potter s Patronus is a __________."<<endl<<endl;
cout<<"    1) Doe"<<endl;
cout<<"    2) Russell Terrier"<<endl;
cout<<"    3) Stag"<<endl;
cout<<"    4) Otter"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[3];
if (a[3]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q5. What is the Name of Dumbledore s Sister?"<<endl<<endl;
cout<<"    1) Ariana Dumbledore"<<endl;
cout<<"    2) Lucy Dumbledore"<<endl;
cout<<"    3) Hestia Dumbledore"<<endl;
cout<<"    4) Beatrix Dumbledore"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[4];
if (a[4]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q6. What is the Name of the Wizarding Prison which held GellertGrindelwald?"<<endl<<endl;
cout<<"    1) Azkaban"<<endl;
cout<<"    2) Nurmengard"<<endl;
cout<<"    3) Gringotts"<<endl;
cout<<"    4) Durmstrang"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[5];
if (a[5]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q7. Which one of these is a Marauder?"<<endl<<endl;
cout<<"    1) Snivellus"<<endl;
cout<<"    2) Mollywobbles"<<endl;
cout<<"    3) Prongs"<<endl;
cout<<"    4) Willy"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[6];
if (a[6]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q8. What does the Sign of the Deathly Hallows comprise of?"<<endl<<endl;
cout<<"    1) A Square, A Triangle and A Circle"<<endl;
cout<<"    2) A Pyramid with An Eye"<<endl;
cout<<"    3) A Pentagon and A Triangle"<<endl;
cout<<"    4) A Triangle, A Circle and A Line"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[7];
if (a[7]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q9. What are the Names of the Deathly Hallows?"<<endl<<endl;
cout<<"    1) The Deathstick, The Pebble and The Invisible Wrapper"<<endl;
cout<<"    2) The Supreme Wand, The Resurrection Stone and The Coat of Invisibility"<<endl;
cout<<"    3) The Wand of Destiny, The River Stone and The Cloth of Invisibility"<<endl;
cout<<"    4) The Elder Wand, The Resurrection Stone and The Cloak of Invisibility"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[8];
if (a[8]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q10. Where did Albus Dumbledore Die?"<<endl<<endl;
cout<<"    1) The Astronomy Tower"<<endl;
cout<<"    2) The Forbidden Forest"<<endl;
cout<<"    3) The Lost Cave"<<endl;
cout<<"    4) Hogsmeade"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[9];
if (a[9]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q11. What is the Full Name of Albus Dumbledore?"<<endl<<endl;
cout<<"    1) AlbusLoxias Egbert Pevrell Dumbledore"<<endl;
cout<<"    2) Albus Percival Wulfric Brian Dumbledore"<<endl;
cout<<"    3) AlbusGinerva Hannah Jones Dumbledore"<<endl;
cout<<"    4) Albus Percival Kendra Wulfric Dumbledore"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[10];
if (a[10]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q12. What is the Full Name of Ronald Weasley?"<<endl<<endl;
cout<<"    1) Ronald Arthur Weasley"<<endl;
cout<<"    2) Ronald Jean Weasley"<<endl;
cout<<"    3) Ronald BiliusWeasley"<<endl;
cout<<"    4) Ronald Molly Weasley"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[11];
if (a[11]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q13. Who is the Head of Beauxbaton s Academy of Magic?"<<endl<<endl;
cout<<"    1) Igor Karkaroff"<<endl;
cout<<"    2) Barty Crouch Jr."<<endl;
cout<<"    3) Ludo Bagman"<<endl;
cout<<"    4) Madame Maxime"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[12];
if (a[12]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q14. Name Ginny Weasley s Quidditch Team, after leaving Hogwarts?"<<endl<<endl;
cout<<"    1) Chudley Canons"<<endl;
cout<<"    2) Puddlemere United"<<endl;
cout<<"    3) Holyhead Harpies"<<endl;
cout<<"    4) Wimbourne Wasps"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[13];
if (a[13]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q15. Name the Secret Society founded by Dumbledore, against the Dark Arts?"<<endl<<endl;
cout<<"    1) Defence Association"<<endl;
cout<<"    2) Order of the Phoenix"<<endl;
cout<<"    3) Dumbledore s Army"<<endl;
cout<<"    4) Order of Merlin"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[14];
if (a[14]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q16. Which Potion,  Induces a Powerful Obsession for something ?"<<endl<<endl;
cout<<"    1) Amortentia"<<endl;
cout<<"    2) Veritaserum"<<endl;
cout<<"    3) Draught of Living Death"<<endl;
cout<<"    4) Felix Felicis"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[15];
if (a[15]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q17. Nicolas Flamel Died at the Age of?"<<endl<<endl;
cout<<"    1) 673"<<endl;
cout<<"    2) 665"<<endl;
cout<<"    3) 662"<<endl;
cout<<"    4) 671"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[16];
if (a[16]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q18. Who is the Author of  Hogwarts: A History ?"<<endl<<endl;
cout<<"    1) BathildaBagshot"<<endl;
cout<<"    2) Gilderoy Lockhart"<<endl;
cout<<"    3) Libatius Borage"<<endl;
cout<<"    4) Rita Skeeter"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[17];
if (a[17]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q19. What is the Full Form of SPEW?"<<endl<<endl;
cout<<"    1) Society for Purification of Elder Wizardary"<<endl;
cout<<"    2) Society for Procastination of Elfish Warfare"<<endl;
cout<<"    3) Society for Protection of Elfish Welfare"<<endl;
cout<<"    4) Society for Protection of the Elder Wand"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[18];
if (a[18]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q20. Which Dragon did Viktor Krum face in the First Task of the Triwizard       Tournament?"<<endl<<endl;
cout<<"    1) Common Welsh Green"<<endl;
cout<<"    2) Hungarian Horntail"<<endl;
cout<<"    3) Swedish Short Snout"<<endl;
cout<<"    4) Chinese Fireball"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[19];
if (a[19]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q21. Which Magical Technique resists the External Penetration of the Mind through Magic?"<<endl<<endl;
cout<<"    1) Arithmancy"<<endl;
cout<<"    2) Legilimency"<<endl;
cout<<"    3) Occlumency"<<endl;
cout<<"    4) Attornomency"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[20];
if (a[20]==3)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q22. In Which Story in  The Tales of Beedle The Bard , are the Deathly Hallows    Introduced?"<<endl<<endl;
cout<<"    1) The Tale of The Three Brothers"<<endl;
cout<<"    2) The Fountain of Fair Fortune"<<endl;
cout<<"    3) The Warlock s Hairy Heart"<<endl;
cout<<"    4) The Wizard and The Hopping Pot"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[21];
if (a[21]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q23. What is the Core of the Elder Wand?"<<endl<<endl;
cout<<"    1) Two Feathers from the Tail of the Phoenix Supreme"<<endl;
cout<<"    2) Single Hair from the Tail of a Thestral"<<endl;
cout<<"    3) Twelve Hairs from the Tail of a Fully Mature Unicorn"<<endl;
cout<<"    4) Single Dragon Heartstring from the Unruly Beast of Dragons breed)"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[22];
if (a[22]==2)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q24. What is the Name of the Broom Harry Potter got on his 13th Birthday?"<<endl<<endl;
cout<<"    1) Shooting Star"<<endl;
cout<<"    2) Nimbus 2000"<<endl;
cout<<"    3) Nimbus 2001"<<endl;
cout<<"    4) Firebolt"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[23];
if (a[23]==4)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<endl<<"Q25. What is the Name of the Child of Remus Lupin and Nymphadora Tonks?"<<endl<<endl;
cout<<"    1) Teddy Lupin"<<endl;
cout<<"    2) Andromeda Tonks"<<endl;
cout<<"    3) Hugo Tonks"<<endl;
cout<<"    4) Peter Lupin"<<endl;
cout<<endl<<"Enter Choice: ";
cin>>a[24];
if (a[24]==1)
{
    cout<<endl<<"Correct."<<endl;
    s++;
}
else
{
    cout<<endl<<"Incorrect."<<endl;
}
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"                    TEST COMPLETE."<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl<<" RESULTS"<<endl;
cout<<"---------"<<endl<<endl;
cout<<"Total Score: "<<s<<" out of 25."<<endl;
p=s*4;
cout<<"Percentage of Merit: "<<p<<"%."<<endl<<endl;
cout<<"Remarks:"<<endl<<endl;
if (p<=50)
{
    cout<<"TROLL. Don t Consider Yourself A Harry Potter Fan if You don t know THIS!!!";
}
else if ((p>50)&&(p<=60))
{
    cout<<"DREADFUL. You Need to Get Your BASICS Clear, My Friend!!";
}
else if ((p>60)&&(p<=70))
{
    cout<<"POOR. You Need To Work HARD, My Friend!";
}
else if ((p>70)&&(p<=80))
{
    cout<<"ACCEPTABLE. GOOD JOB! Keep Working Hard.";
}
else if ((p>80)&&(p<=90))
{
    cout<<"EXCEEDS EXPECTATIONS. Splendid Work. A LITTLE MORE and You ll go Places!!";
}
else if ((p>90)&&(p<=100))
{
    cout<<"OUTSTANDING! You Have Proved That You Are A WORTHY WIZARD!!!";
}
getch();
}
void sudoku()
{
clrscr();
cout<<"                                  SUDOKU"<<endl;
cout<<"                                 --------"<<endl<<endl;
int i,j,row,col,val,sumr=0,sumc=0;
int puzzle[9][9];
for(i=0;i<9;i++)
{
    for(j=0;j<9;j++)
    {
        puzzle[i][j] = 0;
    }
}
{
puzzle[0][0] = 4; puzzle[0][5] = 2; puzzle[0][7] = 9; puzzle[0][8] = 5;
puzzle[1][0] = 9; puzzle[1][1] = 5; puzzle[1][4] = 1; puzzle[1][8] = 2;
puzzle[2][4] = 9; puzzle[2][5] = 4;
puzzle[3][0] = 5; puzzle[3][2] = 1; puzzle[3][3] = 4; puzzle[3][5] = 8;
puzzle[4][1] = 4; puzzle[4][2] = 9; puzzle[4][6] = 3; puzzle[4][7] = 6;
puzzle[5][3] = 1; puzzle[5][5] = 9; puzzle[5][6] = 5; puzzle[5][7] = 8;
puzzle[6][3] = 6; puzzle[6][4] = 4;
puzzle[7][1] = 6; puzzle[7][4] = 2; puzzle[7][7] = 8; puzzle[7][8] = 3;
puzzle[8][0] = 7; puzzle[8][1] = 2; puzzle[8][3] = 8; puzzle[8][8] = 9;
}
board:
{
    cout<<"   1 2 3 4 5 6 7 8 9"<<endl<<endl<< "1  "<< puzzle[0][0]<< " " << puzzle[1][0]<< " " << puzzle[2][0]<< "|"<< puzzle[3][0]<< " " << puzzle[4][0]<< " " << puzzle[5][0]<< "|"<< puzzle[6][0]<< " " << puzzle[7][0]<< " " << puzzle[8][0]<<endl;

    cout<< "2  "<< puzzle[0][1]<< " " << puzzle[1][1]<< " " << puzzle[2][1]<< "|"<< puzzle[3][1]<< " " << puzzle[4][1]<< " " << puzzle[5][1]<< "|"<< puzzle[6][1]<< " " << puzzle[7][1]<< " " << puzzle[8][1]<<endl;
  
    cout<< "3  "<< puzzle[0][2]<< " " << puzzle[1][2]<< " " << puzzle[2][2]<< "|"<< puzzle[3][2]<< " " << puzzle[4][2]<< " " << puzzle[5][2]<< "|"<< puzzle[6][2]<< " " << puzzle[7][2]<< " " << puzzle[8][2]<<endl;
    
    cout<< "   -----+-----+-----"<<endl;

    cout<< "4  "<< puzzle[0][3]<< " " << puzzle[1][3]<< " " << puzzle[2][3]<< "|"<< puzzle[3][3]<< " " << puzzle[4][3]<< " " << puzzle[5][3]<< "|"<< puzzle[6][3]<< " " << puzzle[7][3]<< " " << puzzle[8][3]<<endl;

    cout<< "5  "<< puzzle[0][4]<< " " << puzzle[1][4]<< " " << puzzle[2][4]<< "|"<< puzzle[3][4]<< " " << puzzle[4][4]<< " " << puzzle[5][4]<< "|"<< puzzle[6][4]<< " " << puzzle[7][4]<< " " << puzzle[8][4]<<endl;

    cout<< "6  "<< puzzle[0][5]<< " " << puzzle[1][5]<< " " << puzzle[2][5]<< "|"<< puzzle[3][5]<< " " << puzzle[4][5]<< " " << puzzle[5][5]<< "|"<< puzzle[6][5]<< " " << puzzle[7][5]<< " " << puzzle[8][5]<<endl;

    cout<< "   -----+-----+-----" <<endl;

    cout<< "7  "<< puzzle[0][6]<< " " << puzzle[1][6]<< " " << puzzle[2][6]<< "|"<< puzzle[3][6]<< " " << puzzle[4][6]<< " " << puzzle[5][6]<< "|"<< puzzle[6][6]<< " " << puzzle[7][6]<< " " << puzzle[8][6]<<endl;

    cout<< "8  "<< puzzle[0][7]<< " " << puzzle[1][7]<< " " << puzzle[2][7]<< "|"<< puzzle[3][7]<< " " << puzzle[4][7]<< " " << puzzle[5][7]<< "|"<< puzzle[6][7]<< " " << puzzle[7][7]<< " " << puzzle[8][7]<<endl;

    cout<< "9  "<< puzzle[0][8]<< " " << puzzle[1][8]<< " " << puzzle[2][8]<< "|"<< puzzle[3][8]<< " " << puzzle[4][8]<< " " << puzzle[5][8]<< "|"<< puzzle[6][8]<< " " << puzzle[7][8]<< " " << puzzle[8][8];
};
        cout<<"\nEnter Coordinates: ";
        cout<<endl<<"Row: ";
        cin>>row;
        cout<<endl<<"Column: ";
        cin>>col;
        cout<<"\nEnter Value(from 1-9).Enter 0 to exit: ";
        cin>>val;
        if(val==0)
        {
            exit(0);
        }
        else
        {
        puzzle[col-1][row-1] = val;
        }
    
        for(i=0;i<9;i++)
        {
    for(j=0;j<9;j++)
    {
        sumr+=puzzle[i][j];
        sumc+= puzzle[j][i];
        }
        }
    if ((sumr==45)&&(sumc==45))
        {
cout<<"Congratulations, you have solved the puzzle!";
        exit(0);
        }
        else
        {  goto board;  }
getch();
}
