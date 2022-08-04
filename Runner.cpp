//Runner game
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int cnt=0,pos=0,i,j,k;
int randarray[10];
char mapplay[100],jumpmap[100];
void runner(int randarray[])
{
    usleep(150000);
    cout<<"\033[2J\033[1;1H";
    cout<<endl;
    for(k=0;k<100;k++)
    {
        if(k==randarray[0]||k==randarray[1]||k==randarray[2]||k==randarray[3]||k==randarray[4]||k==randarray[5]||k==randarray[6]||k==randarray[7]||k==randarray[8]||k==randarray[9])
            jumpmap[k]='0';
        else
            jumpmap[k]=' ';
    }
    cout<<endl;
    while(cnt<=100)
    {
        char press;
            for(i=0;i<100;i++)
            {
                if(i==randarray[0]||i==randarray[1]||i==randarray[2]||i==randarray[3]||i==randarray[4]||i==randarray[5]||i==randarray[6]||i==randarray[7]||i==randarray[8]||i==randarray[9])
                    mapplay[i]='|';
                else if(i==pos)
                    mapplay[i]='0';
                else 
                    mapplay[i]='_';
            }
        for(k=0;k<100;k++)
        {
            cout<<jumpmap[k];
        }
        cout<<endl;
        for(i=0;i<100;i++)
            cout<<mapplay[i];
        cout<<endl;
        pos++;
        cnt++;
        runner(randarray);
    }
}
int main()
{
    for(j=0;j<10;j++)
        randarray[j]=rand()%100;
    runner(randarray);
}