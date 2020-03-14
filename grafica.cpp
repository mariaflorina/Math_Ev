#include<iostream>
#include <cstring>
#include<graphics.h>
#include<winbgim.h>
#include "esential.h"
#include "verificare.h"

using namespace std;


void cursor00(char aux[100],long long &ver1,char aux1[100],long long &neg)
{
    POINT cursor;
    int x, y;

    while(!ver1)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(&cursor);
            x=cursor.x;
            y=cursor.y;
        if(((x>=50)&&(x<=90))&&((y>=50)&&(y<=90)))
            {
                cout<<"0";
                strcat(aux,"0");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=100)&&(y<=135)))
            {
                cout<<"1";
                strcat(aux,"1");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=145)&&(y<=180)))
            {
                cout<<"2";
                strcat(aux,"2");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=190)&&(y<=225)))
            {
                cout<<"3";
                strcat(aux,"3");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=235)&&(y<=270)))
            {
                cout<<"4";
                strcat(aux,"4");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=280)&&(y<=315)))
            {
                cout<<"5";
                strcat(aux,"5");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=325)&&(y<=360)))
            {
                cout<<"6";
                strcat(aux,"6");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=370)&&(y<=405)))
            {
                cout<<"7";
                strcat(aux,"7");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=415)&&(y<=450)))
            {
                cout<<"8";
                strcat(aux,"8");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=460)&&(y<=495)))
            {
                cout<<"9";
                strcat(aux,"9");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=505)&&(y<=540)))
            {
                if(aux[0]!='\0'&&aux[strlen(aux)-1]!='-')
                {
                    cout<<'.';
                    strcat(aux,".");
                }
                return ;
            }
        if (((x>=205)&&(x<=275))&&((y>=50)&&(y<=100)))
            {
                if(strlen(aux)==0)
                {
                    cout<<'-';
                    strcat(aux,"(-");
                    neg=1;
                }
                return ;
            }
        if (((x>=330)&&(x<=410))&&((y>=540)&&(y<=590)))
            {
                if(neg==1)
                    strcat(aux,")");
                ver1=1;
                cout<<'\n';
                return ;
            }
        if(((x>=740)&&(x<=790))&&((y>=350)&&(y<=500)))
            {
                aux[strlen(aux)-1]='\0';
                cout<<"\n\n"<<"Ultimul caracter a fost sters.";
                cout<<"\n\n"<<aux1<<'='<<aux;
                return ;
            }
            Sleep(50);
        }
        return ;
    }
}

void cursor0(char sir[100],char sir2[100], int &ver,int &ok,int &virg)
{
    POINT cursor;
    int x, y;
    while(!ver)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(&cursor);
            x=cursor.x;
            y=cursor.y;
        if(((x>=50)&&(x<=90))&&((y>=50)&&(y<=90)))
            {
                cout<<"0";
                strcat(sir,"0");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=100)&&(y<=135)))
            {
                cout<<"1";
                strcat(sir,"1");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=145)&&(y<=180)))
            {
                cout<<"2";
                strcat(sir,"2");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=190)&&(y<=225)))
            {
                cout<<"3";
                strcat(sir,"3");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=235)&&(y<=270)))
            {
                cout<<"4";
                strcat(sir,"4");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=280)&&(y<=315)))
            {
                cout<<"5";
                strcat(sir,"5");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=325)&&(y<=360)))
            {
                cout<<"6";
                strcat(sir,"6");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=370)&&(y<=405)))
            {
                cout<<"7";
                strcat(sir,"7");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=415)&&(y<=450)))
            {
                cout<<"8";
                strcat(sir,"8");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=460)&&(y<=495)))
            {
                cout<<"9";
                strcat(sir,"9");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=505)&&(y<=540)))
            {
                cout<<'.';
                strcat(sir,".");
                return ;
            }
        if(((x>=50)&&(x<=90))&&((y>=550)&&(y<=590)))
            {
                cout<<"x";
                strcat(sir,"x");
                return ;
            }
        if(((x>=110)&&(x<=185))&&((y>=50)&&(y<=100)))
            {
                cout<<'+';
                strcat(sir,"+");
                return ;
            }
        if (((x>=205)&&(x<=275))&&((y>=50)&&(y<=100)))
            {
                cout<<'-';
                strcat(sir,"-");
                return ;
            }
         if (((x>=295)&&(x<=365))&&((y>=50)&&(y<=100)))
                {
                   cout<<'*';
                   strcat(sir,"*");
                   return ;
                 }
         else if (((x>=385)&&(x<=455))&&((y>=50)&&(y<=100)))
                  {
                        cout<<'/';
                        strcat(sir,"/");
                        return ;
                  }
           else if (((x>=475)&&(x<=545))&&((y>=50)&&(y<=100)))
                    {
                        cout<<'^';
                        strcat(sir,"^");
                        return ;
                    }
            else if (((x>=565)&&(x<=635))&&((y>=50)&&(y<=100)))
                     {
                        cout<<'\\';
                        strcat(sir,"\\");
                        return ;
                     }
             else if (((x>=655)&&(x<=730))&&((y>=50)&&(y<=100)))
                    {
                        cout<<'%';
                        strcat(sir,"%");
                        return ;
                    }
            else if(((x>=110)&&(x<=210))&&((y>=150)&&(y<=200)))
                {
                    cout<<"abs";
                    strcat(sir,"abs");
                    return ;
                }
            else if(((x>=240)&&(x<=340))&&((y>=150)&&(y<=200)))
                {
                    cout<<"acos";
                    strcat(sir,"acos");
                    return ;
                }
             else if(((x>=370)&&(x<=470))&&((y>=150)&&(y<=200)))
                     {
                        cout<<"asin";
                        strcat(sir,"asin");
                        return ;
                      }
              else if(((x>=500)&&(x<=600))&&((y>=150)&&(y<=200)))
                    {
                      cout<<"atan";
                      strcat(sir,"atan");
                      return ;
                    }
                else if(((x>=630)&&(x<=730))&&((y>=150)&&(y<=200)))
                       {
                            cout<<"ceil";
                            strcat(sir,"ceil");
                            return ;
                       }
                else if(((x>=110)&&(x<=210))&&((y>=250)&&(y<=300)))
                    {
                       cout<<"cos";
                       strcat(sir,"cos");
                       return ;
                   }
                else if(((x>=240)&&(x<=340))&&((y>=250)&&(y<=300)))
                    {
                        cout<<"cosh";
                        strcat(sir,"cosh");
                        return ;
                    }
                else if(((x>=370)&&(x<=470))&&((y>=250)&&(y<=300)))
                    {
                        cout<<"exp";
                        strcat(sir,"exp");
                        return ;
                    }
                else if(((x>=500)&&(x<=600))&&((y>=250)&&(y<=300)))
                    {
                        cout<<"floor";
                        strcat(sir,"floor");
                        return ;
                    }
                else if(((x>=630)&&(x<=730))&&((y>=250)&&(y<=300)))
                    {
                        cout<<"ln";
                        strcat(sir,"ln");
                        return ;
                    }
                else if(((x>=110)&&(x<=210))&&((y>=350)&&(y<=400)))
                    {
                        cout<<"log10";
                        strcat(sir,"log10");
                        return ;
                    }
                else if(((x>=240)&&(x<=340))&&((y>=350)&&(y<=400)))
                    {
                        cout<<"round";
                        strcat(sir,"round");
                        return ;
                    }
                 else if(((x>=370)&&(x<=470))&&((y>=350)&&(y<=400)))
                    {
                          cout<<"sign";
                          strcat(sir,"sign");
                          return ;
                    }
                else if(((x>=500)&&(x<=600))&&((y>=350)&&(y<=400)))
                    {
                         cout<<"sin";
                         strcat(sir,"sin");
                         return ;
                    }
               else if(((x>=630)&&(x<=730))&&((y>=350)&&(y<=400)))
                    {
                         cout<<"sinh";
                         strcat(sir,"sinh");
                         return ;
                    }
                else if(((x>=110)&&(x<=210))&&((y>=450)&&(y<=500)))
                    {
                       cout<<"sqrt";
                       strcat(sir,"sqrt");
                       return ;
                    }
                else if(((x>=240)&&(x<=340))&&((y>=450)&&(y<=500)))
                    {
                         cout<<"tan";
                         strcat(sir,"tan");
                         return ;
                    }
                else if(((x>=370)&&(x<=470))&&((y>=450)&&(y<=500)))
                         {
                           cout<<"tanh";
                           strcat(sir,"tanh");
                           return ;
                         }
                else if(((x>=500)&&(x<=600))&&((y>=450)&&(y<=500)))
                        {
                            cout<<"truncate";
                            strcat(sir,"truncate");
                            return ;
                         }
               else if(((x>=630)&&(x<=730))&&((y>=450)&&(y<=500)))
                        {
                            cout<<"atan2";
                            strcat(sir,"atan2");
                            virg=1;
                            return ;
                        }
                else if(((x>=110)&&(x<=190))&&((y>=540)&&(y<=590)))
                        {
                            cout<<"max";
                            strcat(sir,"max");
                            virg=1;
                            return ;
                        }
                else if(((x>=230)&&(x<=310))&&((y>=540)&&(y<=590)))
                        {
                            cout<<'(';
                            strcat(sir,"(");
                            return ;
                         }
                 else if(((x>=330)&&(x<=410))&&((y>=540)&&(y<=590)))
                        {
                             Sleep(500);
                             ver=1;
                             verif_expr(sir,ok);
                             if(ok==1)
                             {
                                 cout<<"\n\n"<<"Introduceti valori pentru variabile:"<<'\n';
                                char aux[100],aux1[100],var[100][100];
                                long long lung_ini=strlen(sir),i,j,k=0,p=0,nr2,cont=0,s,n_var=0,ok=0,ver1=0,neg=0;
                                long double nr,nr1;
                                sir2[k]='\0';
                                for(i=0;i<=lung_ini-1;++i)
                                    if(isalpha(sir[i])&&isdigit(sir[i+1]))
                                        {
                                            if(i>=2&&i<=lung_ini-2&&sir[i+2]=='0'&&sir[i+1]=='1'&&sir[i]=='g'&&sir[i-1]=='o'&&sir[i-2]=='l')
                                                {
                                                    sir2[k++]=sir[i];
                                                    sir2[k]='\0';
                                                }
                                            else if(i>=3&&sir[i+1]=='2'&&sir[i]=='n'&&sir[i-1]=='a'&&sir[i-2]=='t'&&sir[i-3]=='a')
                                                {
                                                    sir2[k++]=sir[i];
                                                    sir2[k]='\0';
                                                }
                                            else
                                                {
                                                    ok=0;
                                                    p=0;
                                                    neg=0;
                                                    aux[p++]=sir[i];
                                                    j=i+1;
                                                    while(j<lung_ini&&isdigit(sir[j]))
                                                        aux[p++]=sir[j++];
                                                    aux[p]='\0';
                                                    for(s=1;!ok&&s<=n_var;++s)
                                                        if(strcmp(var[s],aux)==0)
                                                            ok=1;
                                                    //if(ok==0)
                                                        //{
                                                            ver1=0;
                                                            strcpy(var[++n_var],aux);
                                                            cout<<'\n'<<aux<<'=';
                                                            p=0;
                                                            aux[0]='\0';
                                                            while(!ver1)
                                                                {
                                                                    cursor00(aux,ver1,var[n_var],neg);
                                                                    Sleep(200);
                                                                    //if(GetAsyncKeyState(VK_RETURN))
                                                                            //ver1=1;
                                                                }
                                                            strcat(sir2,aux);
                                                            k=strlen(sir2);
                                                            sir2[k]='\0';
                                                            i=j-1;
                                                        //}
                                                }
                                        }
                                    else
                                        {
                                            sir2[k++]=sir[i];
                                            sir2[k]='\0';
                                        }
                                sir2[k]='\0';
                             }
                             return ;
                        }
                  else if(((x>=430)&&(x<=510))&&((y>=540)&&(y<=590)))
                        {
                            cout<<')';
                            strcat(sir,")");
                            return ;
                        }
                   else if(((x>=530)&&(x<=610))&&((y>=540)&&(y<=590)))
                          {
                              cout<<"min";
                              strcat(sir,"min");
                              virg=1;
                              return ;
                           }
                    else if (((x>=640)&&(x<=730))&&((y>=540)&&(y<=590)))
                        {
                            if(virg==1)
                            {
                                int lu=strlen(sir);
                                if(!(sir[lu-1]=='2'&&sir[lu-2]=='n'))
                                {
                                    if(sir[lu-1]!='n'&&sir[lu-1]!='x'&&sir[lu-1]!='(')
                                    {
                                        cout<<',';
                                        strcat(sir,",");
                                        virg=0;
                                    }
                                }
                            }
                            return ;
                        }
                    else if(((x>=740)&&(x<=790))&&((y>=350)&&(y<=500)))
                    {
                        sir[strlen(sir)-1]='\0';
                        cout<<"\n\n"<<"Ultimul caracter a fost sters.";
                        cout<<"\n\n"<<sir;
                        return ;
                    }
            Sleep(400);
        }
    }

}

void graf(char sir[100],char sir2[100],char sir3[100])
{
    sir[0]='\0';
    int ver=0,ok,neg=0;

   initwindow(800,600,"Math",-4,-20);
   setcolor(LIGHTBLUE);
   rectangle(10,10,790,590);

   setfillstyle(SOLID_FILL,LIGHTBLUE);
   floodfill(200,200,LIGHTBLUE);

   setcolor(LIGHTGRAY);
   rectangle(250,250,560,310);

   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(200,200,LIGHTGRAY);

   setcolor(BLACK);
   settextstyle(1,0,4);
   setbkcolor(LIGHTGRAY);
   outtextxy(175,45,"Mathematical Evaluator");

   settextstyle(1,0,2);
   setbkcolor(LIGHTBLUE);
   outtextxy(255,265, "Press ENTER to start");

   readimagefile("a.jpg",60,400,350,550);
   readimagefile("b.jpg",480,400,690,550);

   PlaySound(NULL, 0, 0);
   PlaySound(TEXT("papyrus.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC|SND_NOSTOP);
   while(1)
   {
      if(GetAsyncKeyState(VK_RETURN))
            break;
   }
  cleardevice();
  setcolor(LIGHTGRAY);
  rectangle(0,0,800,600);

  setfillstyle(SOLID_FILL,LIGHTGRAY);
  floodfill(200,200,LIGHTGRAY);

  setcolor(BLACK);
  settextstyle(1,0,3);
  setbkcolor(LIGHTBLUE);
  outtextxy(150,10, "CHOOSE YOUR FIGHTER:");

  cout<<"Apasati click stanga pe butoanele alaturate pentru a introduce expresia matematica."<<'\n';
  cout<<"Dupa ce a fost introdusa expresia apasati butonul ENT pentru a introduce valori variabilelor."<<'\n';
  cout<<"La final, apasati tasta ENT pentru a fi afisat rezultatul."<<"\n\n";
  cout<<"Introduceti expresia matematica:"<<"\n\n";

  setcolor(LIGHTBLUE);
  rectangle(50,50,90,90);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,55,"0");

  setcolor(LIGHTBLUE);
  rectangle(50,95,90,135);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,100,"1");

  setcolor(LIGHTBLUE);
  rectangle(50,140,90,180);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,145,"2");

  setcolor(LIGHTBLUE);
  rectangle(50,185,90,225);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,190,"3");

  setcolor(LIGHTBLUE);
  rectangle(50,230,90,270);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,235,"4");

  setcolor(LIGHTBLUE);
  rectangle(50,275,90,315);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,280,"5");

  setcolor(LIGHTBLUE);
  rectangle(50,320,90,360);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,325,"6");

  setcolor(LIGHTBLUE);
  rectangle(50,365,90,405);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,370,"7");

  setcolor(LIGHTBLUE);
  rectangle(50,410,90,450);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,415,"8");

  setcolor(LIGHTBLUE);
  rectangle(50,455,90,495);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,460,"9");

  setcolor(LIGHTBLUE);
  rectangle(50,500,90,540);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(65,505,".");

  setcolor(LIGHTBLUE);
  rectangle(50,545,90,590);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(60,550,"x");

  setcolor(LIGHTBLUE);
  rectangle(110,50,185,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(130,60,"+");

  setcolor(LIGHTBLUE);
  rectangle(205,50,275,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(230,60,"-");

  setcolor(LIGHTBLUE);
  rectangle(295,50,365,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(315,65,"*");

  setcolor(LIGHTBLUE);
  rectangle(385,50,455,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(410,60,"/");

  setcolor(LIGHTBLUE);
  rectangle(475,50,545,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(500,60,"^");

  setcolor(LIGHTBLUE);
  rectangle(565,50,635,100);

  setcolor(BLACK);
  settextstyle(1,0,4);
  setbkcolor(LIGHTGRAY);
  outtextxy(595,60,"\\");

  setcolor(LIGHTBLUE);
  rectangle(655,50,730,100);

  setcolor(BLACK);
  settextstyle(1,0,3);
  setbkcolor(LIGHTGRAY);
  outtextxy(675,60,"%");

  setcolor(LIGHTBLUE);
  rectangle(110,150,210,200);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(140,170,"abs");

  setcolor(LIGHTBLUE);
  rectangle(240,150,340,200);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(265,170,"acos");

  setcolor(LIGHTBLUE);
  rectangle(370,150,470,200);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(395,170,"asin");

  setcolor(LIGHTBLUE);
  rectangle(500,150,600,200);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(525,170,"atan");

  setcolor(LIGHTBLUE);
  rectangle(630,150,730,200);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(655,170,"ceil");

  setcolor(LIGHTBLUE);
  rectangle(110,250,210,300);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(140,270,"cos");

  setcolor(LIGHTBLUE);
  rectangle(240,250,340,300);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(265,270,"cosh");

  setcolor(LIGHTBLUE);
  rectangle(370,250,470,300);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(400,270,"exp");

  setcolor(LIGHTBLUE);
  rectangle(500,250,600,300);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(520,270,"floor");

  setcolor(LIGHTBLUE);
  rectangle(630,250,730,300);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(665,270,"ln");

  setcolor(LIGHTBLUE);
  rectangle(110,350,210,400);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(125,370,"log10");

  setcolor(LIGHTBLUE);
  rectangle(240,350,340,400);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(255,370,"round");

  setcolor(LIGHTBLUE);
  rectangle(370,350,470,400);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(392,370,"sign");

  setcolor(LIGHTBLUE);
  rectangle(500,350,600,400);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(530,370,"sin");

  setcolor(LIGHTBLUE);
  rectangle(630,350,730,400);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(652,370,"sinh");

  setcolor(LIGHTBLUE);
  rectangle(110,450,210,500);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(135,470,"sqrt");

  setcolor(LIGHTBLUE);
  rectangle(240,450,340,500);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(270,470,"tan");

  setcolor(LIGHTBLUE);
  rectangle(370,450,470,500);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(392,470,"tanh");

  setcolor(LIGHTBLUE);
  rectangle(500,450,600,500);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(503,470,"truncate");

  setcolor(LIGHTBLUE);
  rectangle(630,450,730,500);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(650,470,"atan2");

  setcolor(LIGHTBLUE);
  rectangle(110,540,200,590);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(130,560,"max");

  setcolor(LIGHTBLUE);
  rectangle(230,540,310,590);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(265,560,"(");

  setcolor(LIGHTBLUE);
  rectangle(330,540,410,590);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(340,560,"ENT");

  setcolor(LIGHTBLUE);
  rectangle(430,540,510,590);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(465,560,")");

  setcolor(LIGHTBLUE);
  rectangle(530,540,610,590);

  setcolor(BLACK);
  settextstyle(1,0,1);
  setbkcolor(LIGHTGRAY);
  outtextxy(550,560,"min");

  setcolor(LIGHTBLUE);
  rectangle(640,540,730,590);

  setcolor(BLACK);
  settextstyle(1,0,5);
  setbkcolor(LIGHTGRAY);
  outtextxy(680,545,",");

  setcolor(LIGHTBLUE);
  rectangle(740,350,790,500);

  setcolor(BLACK);
  settextstyle(1,0,3);
  setbkcolor(LIGHTGRAY);
  outtextxy(750,370,"U");
  outtextxy(750,400,"N");
  outtextxy(750,430,"D");
  outtextxy(750,460,"O");

  while(!ver)
  {
      cursor0(sir,sir2,ver,ok,neg);
      Sleep(400);
      if(ver)
        break;
  }
    cout<<'\n';
    if(ok==1)
    {
        cout<<"\n\nEXPRESIE CORECTA"<<'\n';
        transf_inf_post(sir2,sir3);
        calc_post(sir3);
        cleardevice();

        setcolor(LIGHTBLUE);
        rectangle(0,0,800,600);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(200,200,LIGHTGRAY);

        readimagefile("c.jpg",190,150,670,550);

        setcolor(BLACK);
        settextstyle(1,0,5);
        setbkcolor(LIGHTBLUE);
        outtextxy(190,45,"YOU MADE IT!");

        getch();
    }
    else
    {
        cleardevice();

        setcolor(LIGHTBLUE);
        rectangle(0,0,800,600);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(200,200,LIGHTGRAY);

        readimagefile("m.jpg",120,150,600,550);

        setcolor(BLACK);
        settextstyle(1,0,4);
        setbkcolor(LIGHTBLUE);
        outtextxy(40,45,"THINGS DIDN'T WORK OUT...");

        getch();
    }
}
