#include<stdio.h>

// void q1(int x){
// int i,j;
// int z=1;

// for(i=1;i<=x;i++){

//     for(j=1;j<=i;j++){

//         printf("%d ",(z+x+i));
//         z++;

//     }
//     printf("\n");
// }
// }

// void q2(int x){
// int z=1;
// for(int i=1;i<=x;i++){
//     for(int j=1;j<=i;j++){
//         printf("%3d",z++);
//     }
//     printf("\n");
// }
// }

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

// void smp1(int x){
//     int y,z=1;

//     for(int i=1;i<=x;i++){

//         int dif=x-1,val=i;
        
//         for(int j=1;j<=i;j++){

//             printf("%3d",val);
//             val+=dif--;

//         }
//     printf("\n");
// }
// }


int main(){
int x;
scanf("%d",&x);
// q1(x);
q3(x);
    return 0;
}
