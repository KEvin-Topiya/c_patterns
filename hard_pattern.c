#include<stdio.h>


void q1(int x){
int i,j;
int z=1;
for(i=1;i<=x;i++){
    for(j=1;j<=i;j++){
        printf("%d ",(z+x+i));
        z++;
    }
    printf("\n");
    }   
}


void q2(int x){
int z=1;
for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
        printf("%3d",z++);
    }
    printf("\n");
}
}

void q3(int x){
    /*
    1
    2   (2+7)=9
    3   (3+5)=8   (8+2)=10
    4   (4+3)=7   (7+4)=11   (11+3)=14
    5   (5+1)=6   (6+6)=12   (12+1)=13   (13+2)=15
    
    
    */
    int z=1;
        int n1=(x*2)-1;
    int t=(x/2+1);
    for(int i=1;i<=x;i++){

        int y=1,value=i;


            for(int j=i;j>=1;j--)
            {
                printf("%3d",value);
                if(y%2!=0)value+=n1;  
                if(y%2==0)value+=((j-1)*2);
                y++;
            }
        
       
        n1-=2;
        printf("\n");
    }
}


void q4(int x){
    /*
    it run to the input number for ex user enter 5 so till 5 row code run

    1
    2 8
    3 7 9
    4 6
    5 
    
    */
 int t=x/2;
 int n1=(x-1)*2;
  for(int i=1;i<=x;i++){

    int val=i,pre=1;
        int f=(x-i)*2;

    if(i<=t+1){
        int ln=i;
            for(int j=i;j>=1;j--)
            {
               ln--;
               printf("%3d",val);
               if(pre%2!=0)val+=f;
               if(pre%2==0)val+=(ln*2);
               pre++;
               f-=2;
            }
    }
    else
    {
            int ln=i;
            for(int j=(x-i)+1;j>=1;j--)
            {
               ln--;
               printf("%3d",val);
               if(pre%2!=0)val+=f;
               if(pre%2==0)val+=(ln*2);
               pre++;
               f-=2;
            }
    }
   
    n1-=2;
    f-=2;
    printf("\n");
    }
}

void q5(int t){

/*
same as Q4 but in this code go till t+(t-1)

input 3
1
2 8
3 7 9
4 6
5

*/

 int x=t+(t-1);
 int n1=(x-1)*2;
  for(int i=1;i<=x;i++){

    int val=i,pre=1;
        int f=(x-i)*2;

    if(i<=t){
        int ln=i;
            for(int j=i;j>=1;j--)
            {
               ln--;
               printf("%10d",val);
               if(pre%2!=0)val+=f;
               if(pre%2==0)val+=(ln*2);
               pre++;
               f-=2;
            }
    }
    else
    {
            int ln=i;
            for(int j=(x-i)+1;j>=1;j--)
            {
               ln--;
               printf("%10d",val);
               if(pre%2!=0)val+=f;
               if(pre%2==0)val+=(ln*2);
               pre++;
               f-=2;
            }
    }
   
    n1-=2;
    f-=2;
    printf("\n");
    }
}

void smp1(int x){
    /*
    1
    2 6
    3 7 10
    4 8 11 13
    5 9 12 14 15
    
    */
     int y,z=1;

    for(int i=1;i<=x;i++){

        int dif=x-1,val=i;
        
        for(int j=1;j<=i;j++){

            printf("%3d",val);
            val+=dif--;

        }
    printf("\n");
}
}

void q6(int x,int y){

}

int main(){
int x,y;
scanf("%d",&x);
scanf("%d",&y);
// q1(x);
// q3(x);
// q4(x);
smp1(x);
// q6(x,y);
    return 0;
}
