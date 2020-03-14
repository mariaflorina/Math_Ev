#include <iostream>
#include <cstring>
#include "esential.h"

using namespace std;

char op_s[]={'+','-','*','/','^','\\','%','<','>','='};

char mf_s[][10]={"abs","acos","asin","atan","ceil","cos","cosh","exp","floor","ln","log10","round","sign","sin","sinh","sqrt","tan","tanh","truncate"};
char mf_m[][10]={"max","min","atan2"};

int par_cor(char s[100])
{
    char st[100];
    int k=0,i,n=strlen(s),p;
    for(i=0;i<=n-1;++i)
        if(s[i]=='(')
        {
            st[k++]='(';
            p=i;
        }
        else if(s[i]==')')
        {
            if(k==0)
                return i;
            else if(st[k-1]=='(')
                --k;
        }
    if(k==0)
        return -1;
    return p;

}

/*int op_cor(char s[100])
{
    char aux[100];
    int i,n=strlen(s),p=-1,j,k=0,q;
    for(i=0;i<=n-1;++i)
        if(strchr(op_s,s[i]))
        {
            if(p==-1||p==1)
                p=0;
            else if(i>0&&strchr(op_s,s[i-1]))
                return i;
        }
        else if(isalpha(s[i]))
        {
            int ok=0;
            j=i;
            k=0;
            while(j<=n-1&&isalpha(s[j]))
                aux[k++]=s[j++];
            aux[k]='\0';
            if(strcmp(aux,"log")==0)
            {
                if(j<=n-2&&s[j]=='1'&&s[j+1]=='0')
                {
                    aux[k++]='1';
                    aux[k++]='0';
                    aux[k]='\0';
                    j=j+2;
                }
            }
            else if(strcmp(aux,"atan")==0)
            {
                if(j<=n-1&&s[j]=='2')
                {
                    aux[k++]='2';
                    aux[k]='\0';
                    j=j+1;
                }
            }
            q=j-1;
            for(j=0;!ok&&j<=18;++j)
                if(strcmp(mf_s[j],aux)==0)
                {
                    ok=1;
                    if(p==-1||p==0)
                        p=1;
                    else return i;
                }
            if(!ok)
            {
                for(j=0;!ok&&j<=2;++j)
                    if(strcmp(mf_m[j],aux)==0)
                    {
                        ok=1;
                        if(p==-1||p==0)
                            p=1;
                        else return i;
                    }
            }
            i=q;
        }
        else if(s[i]=='(')
                p=-1;
    return -1;
}*/

int urmator_gresit(char s[])
{
    int n=strlen(s),i;
    for(i=0;i<=n-2;++i)
        if(isdigit(s[i]))
        {
            if(isalpha(s[i+1]))
                return i+1;
            else if(s[i+1]=='(')
            {
                if(i>=4&&s[i]=='0'&&s[i-1]=='1'&&s[i-2]=='g')
                    continue;
                else if(i>=4&&s[i]=='2'&&s[i-1]=='n')
                    continue;
                else
                    return i+1;
            }

        }
    return -1;
}


int verif_ord(char s[100])
{
    char aux[100];
    int n=strlen(s),i,j,k,q;
    for(i=0;i<=n-1;++i)
        if(isalpha(s[i]))
        {
            int ok=0;
            j=i;
            k=0;
            while(j<=n-1&&isalpha(s[j]))
                aux[k++]=s[j++];
            aux[k]='\0';
            if(strcmp(aux,"log")==0)
            {
                if(j<=n-2&&s[j]=='1'&&s[j+1]=='0')
                {
                    aux[k++]='1';
                    aux[k++]='0';
                    aux[k]='\0';
                    j=j+2;
                }
            }
            else if(strcmp(aux,"atan")==0)
            {
                if(j<=n-1&&s[j]=='2')
                {
                    aux[k++]='2';
                    aux[k]='\0';
                    j=j+1;
                }
            }
            q=j-1;
            for(j=0;!ok&&j<=18;++j)
                if(strcmp(mf_s[j],aux)==0)
                {
                    ok=1;
                    if(s[q+1]!='(')
                        return q+1;
                    if(s[q+2]==')')
                        return q+2;
                }
            if(!ok)
            {
                for(j=0;!ok&&j<=2;++j)
                    if(strcmp(mf_m[j],aux)==0)
                    {
                        ok=1;
                        if(s[q+1]!='(')
                            return q+1;
                        if(s[q+2]==')')
                            return q+2;
                    }
                if(!ok)
                {
                    if(s[i]!='x')
                        return q;
                }
            }
            i=q;
        }
    return -1;
}

void verif_expr(char s[100],int &ok)
{
    int ver_par=par_cor(s),ver_op=-1,ver_urm=urmator_gresit(s),ver_o=verif_ord(s);
    ok=1;
    if(ver_par!=-1)
    {
        ok=0;
        cout<<"\n\nEXPRESIE GRESITA-PARANTEZARE GRESITA"<<'\n'<<"POZITIA:"<<ver_par<<'\n';
    }
    if(ver_op!=-1)
    {
        ok=0;
        cout<<"\n\nEXPRESIE GRESITA-OPERATORI SUCCESIVI INCORECTI"<<'\n'<<"POZITIA:"<<ver_op<<'\n';
    }
    if(ver_urm!=-1)
    {
        ok=0;
        cout<<"\n\nEXPRESIE GRESITA-DUPA UN NUMAR NU POATE URMA LITERA SAU ("<<'\n'<<"POZITIA:"<<ver_urm<<'\n';
    }
    if(ver_o!=-1)
    {
        ok=0;
        cout<<"\n\nEXPRESIE GRESITA-DUPA O FUNCTIE MATEMATICA TREBUIE SA URMEZE ( SI INAINTE DE ) SA CONTINA VALORI CORESPUNZATOARE"<<'\n'<<"POZITIA:"<<ver_o<<'\n';
    }
}
