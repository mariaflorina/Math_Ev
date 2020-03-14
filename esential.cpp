#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

#define PI 3.14159265

using namespace std;

char ops[]={'+','-','*','/','^','\\','%','='};
int nos[]={1,1,2,2,3,3,3,4};

char mfs[][10]={"abs","acos","asin","atan","ceil","cos","cosh","exp","floor","ln","log10","round","sign","sin","sinh","sqrt","tan","tanh","truncate"};
char mfm[][10]={"max","min","atan2"};

long double rezultat;


void transf_inf_post(char infix[100], char postfix[100])
{
    char st1[100][100],st2[100][100],aux[100],c;
    postfix[0]='\0';
    int n=strlen(infix),i,ns1=0,ns11=0,ns2=0,ns22=0,nr1=0,nr2=0,j,k=0;
    for(i=0;i<=n-1;++i)
        if(isdigit(infix[i]))
            {
                j=i;
                k=0;
                while(j<=n-1&&(isdigit(infix[j])))
                    aux[k++]=infix[j++];
                if(infix[j]=='.')
                    aux[k++]=infix[j++];
                while(j<=n-1&&(isdigit(infix[j])))
                    aux[k++]=infix[j++];
                aux[k]='\0';
                strcpy(st2[++ns2],aux);
                i=j-1;
            }
        else if(infix[i]!='('&&infix[i]!=')'&&infix[i]!=',')
        {
            if(isalpha(infix[i]))
                {
                    j=i;
                    k=0;
                    while(j<=n-1&&isalpha(infix[j]))
                        aux[k++]=infix[j++];
                    aux[k]='\0';
                    if(strcmp(aux,"log")==0)
                    {
                        if(j<=n-2&&infix[j]=='1'&&infix[j+1]=='0')
                        {
                            aux[k++]='1';
                            aux[k++]='0';
                            aux[k]='\0';
                            j=j+2;
                        }
                    }
                    else if(strcmp(aux,"atan")==0)
                    {
                        if(j<=n-1&&infix[j]=='2')
                        {
                            aux[k++]='2';
                            aux[k]='\0';
                            j=j+1;
                        }
                    }
                    i=j-1;
                }
            else
            {
                k=0;
                aux[k++]=infix[i];
                aux[k]='\0';
            }
            if(ns1==0)
                {
                    ++ns1;
                    strcpy(st1[ns1],aux);
                }
            else if(strcmp(st1[ns1],"(")==0)
                    strcpy(st1[++ns1],aux);
            else
            {
                if(strlen(st1[ns1])>1)
                    nr1=5;
                else
                {
                    c=st1[ns1][0];
                    nr1=nos[strchr(ops,c)-ops];
                }
                if(k>1)
                    nr2=5;
                else
                    nr2=nos[strchr(ops,infix[i])-ops];
                if(nr1<nr2)
                    strcpy(st1[++ns1],aux);
                else
                {
                    while(ns1>0&&nr1>=nr2&&strcmp(st1[ns1],")")&&strcmp(st1[ns1],"("))
                    {
                        strcpy(st2[++ns2],st1[ns1]);
                        --ns1;
                        if(ns1>=1&&strcmp(st1[ns1],")")&&strcmp(st1[ns1],"("))
                        {
                            if(strlen(st1[ns1])>1)
                                nr1=5;
                            else
                                {
                                    c=st1[ns1][0];
                                    nr1=nos[strchr(ops,c)-ops];
                                }
                        }
                    }
                    ++ns1;
                    strcpy(st1[ns1],aux);
                }
            }
        }
        else
            {
                if(infix[i]=='(')
                    {
                        if(i<n&&infix[i+1]=='-')
                        {
                            j=i+1;
                            k=0;
                            aux[k++]=infix[j++];
                            while(j<=n-1&&(isdigit(infix[j])))
                                aux[k++]=infix[j++];
                            if(infix[j]=='.')
                                aux[k++]=infix[j++];
                            while(j<=n-1&&(isdigit(infix[j])))
                                aux[k++]=infix[j++];
                            aux[k]='\0';
                            strcpy(st2[++ns2],aux);
                            i=j;
                        }
                        else
                        {
                            ++ns1;
                            ns11=0;
                            st1[ns1][ns11++]=infix[i];
                            st1[ns1][ns11]='\0';
                        }
                    }
                else if(infix[i]==')')
                {
                    while(ns1>0&&strcmp(st1[ns1],"("))
                    {
                        strcpy(st2[++ns2],st1[ns1]);
                        --ns1;
                    }
                    --ns1;
                }
            }
    for(i=1;i<=ns2;++i)
    {
        strcat(postfix,st2[i]);
        strcat(postfix," ");
    }
    for(i=ns1;i>=1;--i)
        {
            strcat(postfix,st1[i]);
            strcat(postfix," ");
        }
    postfix[strlen(postfix)]='\0';
}


long double math_funct_s(long double a, char c[])
{
    if(strcmp("abs",c)==0)
        return abs(a);
    if(strcmp("acos",c)==0)
        return (acos(a)*180.0/PI);
    if(strcmp("asin",c)==0)
        return (asin(a)*180.0/PI);
    if(strcmp("atan",c)==0)
        return (atan(a)*180.0/PI);
    if(strcmp("ceil",c)==0)
        return ceil(a);
    if(strcmp("cos",c)==0)
        return cos(a*PI/180);
    if(strcmp("cosh",c)==0)
        return cosh(a);
    if(strcmp("exp",c)==0)
        return exp(a);
    if(strcmp("floor",c)==0)
        return floor(a);
    if(strcmp("ln",c)==0)
        return log(a);
    if(strcmp("log10",c)==0)
        return log10(a);
    if(strcmp("round",c)==0)
        return round(a);
    if(strcmp("sign",c)==0)
        {
            if(a<0)
                return -1;
            if(a==0)
                return 0;
            if(a>0)
                return 1;
        }
    if(strcmp("sin",c)==0)
        return sin(a*PI/180);
    if(strcmp("sinh",c)==0)
        return sinh(a);
    if(strcmp("sqrt",c)==0)
        return sqrt(a);
    if(strcmp("tan",c)==0)
        return tan(a*PI/180);
    if(strcmp("tanh",c)==0)
        return tanh(a);
    if(strcmp("truncate",c)==0)
        return int(a);
}

long double math_funct_m(long double a, long double b, char c[])
{
    if(strcmp("max",c)==0)
        return max(a,b);
    if(strcmp("min",c)==0)
        return min(a,b);
    if(strcmp("atan2",c)==0)
        return atan2(a,b);
}

long double opi(long double a,long double b, char c)
{
    if(c=='+')
        return a+b;
    if(c=='-')
        return a-b;
    if(c=='*')
        return a*b;
    if(c=='/')
        return a/b;
    if(c=='^')
        return pow(a,b);
    if(c=='\\')
        return int(a/b);
    if(c=='%')
        {
            long long e=a,d=b;
            if(a==e&&b==d)
                return e%d;
        }

}

void calc_post(char postfix[100])
{
    char *t;
    long double numbi[100],nr,a,b;
    long long k=0,i,n,ok=0;
    strcat(postfix," ");
    t=strtok(postfix," ");
    while(t)
    {
        if(isdigit(t[0])||(t[0]=='-'&&isdigit(t[1])))
        {
            nr=atof(t);
            numbi[++k]=nr;
        }
        else
        {
            n=strlen(t);
            b=numbi[k];
            a=numbi[k-1];
            if(n==1)
                {
                    --k;
                    numbi[k]=opi(a,b,t[0]);
                }
            else
            {
                ok=0;
                for(i=0;i<=18&&!ok;++i)
                    if(strcmp(mfs[i],t)==0)
                        {
                            numbi[k]=math_funct_s(b,t);
                            ok=1;
                        }
                if(!ok)
                    for(i=0;i<=3&&!ok;++i)
                        if(strcmp(mfm[i],t)==0)
                    {
                        --k;
                        numbi[k]=math_funct_m(a,b,t);
                    }
            }
        }
        t=strtok(NULL," ");
    }
    rezultat=numbi[1];
    if(isinf(rezultat))
        cout<<"Rezultatul expresiei este "<<static_cast<unsigned char>(236)<<'.';
    else if(isnan(rezultat))
        cout<<"Rezultatul nu exista in multimea numerelor reale.";
    else cout<<"Rezultatul expresiei este "<<rezultat<<'.';
    cout<<"\n\n";
}
