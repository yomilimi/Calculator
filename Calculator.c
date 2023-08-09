#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Equal(int a, int b){
   if(a==b)
      return 1;
   else
      return 0;
}

int PlusOne(int a){
   return ++a;
}

int greaterthan(int x,int y){
  int or_x=x;
  int or_y=y;
  while(1){
    x=PlusOne(x);
    y=PlusOne(y);
    if(Equal(or_x,or_y)){
      return 0;
      break;
    }
    else if(Equal(x,or_y)){
      return 1;
      break;
    }
    else if(Equal(or_x,y)){
      return 0;
      break;
    }
    else{
      continue;
    }
  }
}

void Plus(int j, int k){
  int r,l,a;
  r=0;
  l=0;
  a=0;
  if(Equal(j,0)){
          printf("%d",k);
        }
        else if(Equal(k,0)){
          printf("%d",j);
        }
        else if(Equal(greaterthan(j,0),greaterthan(k,0))){
          if(greaterthan(j,0)){
          while(1){
            if(Equal(j,0))
                break;
            j=PlusOne(j);
            r=PlusOne(r);
          }
          while(1){
            if(Equal(k,0))
                break;
            k=PlusOne(k);
            l=PlusOne(l);
          }
          while(1){
            if(Equal(a,r))
              break;
            a=PlusOne(a);
            l=PlusOne(l);
          }
        printf("-%d",l);
    }
          else{
            while(1){
            if(Equal(a,j))
              break;
            a=PlusOne(a);
            k=PlusOne(k);
          }
        printf("%d",k);
            }
          }
      else{
        if(greaterthan(j,k)){
        while(1){
              if(Equal(a,k))
                break;
              j=PlusOne(j);
              a=PlusOne(a);
        }
         printf("%d",j);
        }
        else{
          while(1){
              if(Equal(a,j))
                break;
              k=PlusOne(k);
              a=PlusOne(a);
        }
         printf("%d",k);
        }
      }
}

void Minus(int j, int k){
  int a=0;
   if(Equal(j,k)){
           printf("0");
         }
         else if(greaterthan(j,k)){
           while(1){
             if(Equal(j,k))
               break;
             j=PlusOne(j);
             a=PlusOne(a);
           }
           printf("-%d",a);
         }
         else{
           while(1){
             if(Equal(j,k))
               break;
             k=PlusOne(k);
             a=PlusOne(a);
           }
           printf("%d",a);
         }
}

void MP(int j, int k){
  int r,l,a,b,c;
  r=0;
  l=0;
  a=0;
  b=0;
  c=0;
  if(Equal(j,0)){
           printf("0");
         }
         else if(Equal(k,0)){
           printf("0");
         }
         else if(Equal(greaterthan(j,0),greaterthan(k,0))){
           if(greaterthan(j,0)){
             while(1){
            if(Equal(j,0))
                break;
            j=PlusOne(j);
            r=PlusOne(r);
          }

          while(1){
            if(Equal(k,0))
                break;
            k=PlusOne(k);
            l=PlusOne(l);
          }
          while(1){
             if(Equal(a,r)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,l))
                 break;
             }
             a=PlusOne(a);
             c=PlusOne(c);
           }
           printf("%d",c);
           }
           else{
           while(1){
             if(Equal(a,j)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,k))
                 break;
             }
             a=PlusOne(a);
             c=PlusOne(c);
           }
           printf("%d",c);}

         }
       
         else{
           if(greaterthan(j,0)){
              while(1){
            if(Equal(j,0))
                break;
            j=PlusOne(j);
            r=PlusOne(r);
          }
          while(1){
             if(Equal(a,r)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,k))
                 break;
             }
             a=PlusOne(a);
             c=PlusOne(c);
           }
           printf("-%d",c);
           }
           else{
              while(1){
            if(Equal(k,0))
                break;
            k=PlusOne(k);
            l=PlusOne(l);
          }
          while(1){
             if(Equal(a,j)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,l))
                 break;
             }
             a=PlusOne(a);
             c=PlusOne(c);
           }
           printf("-%d",c);
           }
         }
}

void DV(int j, int k){
  int r,l,a,b,c,d;
  r=0;
  l=0;
  a=0;
  b=0;
  c=0;
  d=0;
   if(Equal(j,0)){
  printf("계산 불가");        
        }
  else if(Equal(k,0)){
    printf("계산 불가"); 
  }     
  else if(Equal(j,k)){
  int or_k=k;
    while(1){
      if(Equal(or_k,a)){
        a=0;
        c=PlusOne(c);
        if(greaterthan(j,k))
          break;
      }
      k=PlusOne(k);
      a=PlusOne(a);
    }
    printf("몫 %d\n",c);
    printf("나머지 0\n");
}
else if(Equal(greaterthan(j,0),greaterthan(k,0))){
  if(greaterthan(j,0)){
while(1){
if(Equal(j,0))
                break;
            j=PlusOne(j);
            r=PlusOne(r);
          }
          while(1){
            if(Equal(k,0))
                break;
            k=PlusOne(k);
            l=PlusOne(l);
          }
    if(greaterthan(r,l)){
      printf("몫 0");
    }
else{
  while(greaterthan(b,r)){
      if(Equal(a,l)){
        a=0;
        c=PlusOne(c);
      }
      else{
      a=PlusOne(a);
      b=PlusOne(b);}
    }
    a=0;
    b=0;
    int t=0;
   
   while(1){
             if(Equal(a,c)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,l))
                 break;
             }
             a=PlusOne(a);
             t=PlusOne(t);
           }
    while(1){
      if(Equal(t,r))
        break;
      d=PlusOne(d);
      t=PlusOne(t);
    }
    if(Equal(d,l)){printf("몫 %d 나머지 0",c+1);}
    else{printf("몫 %d 나머지 -%d",c,d);}
}    
  }//둘다 음수
  else{
    if(greaterthan(j,k)){
      printf("몫 0");
    }
else{
    while(greaterthan(b,j)){
      if(Equal(a,k)){
        a=0;
        c=PlusOne(c);
      }
      else{
      a=PlusOne(a);
      b=PlusOne(b);}
    }
    a=0;
    b=0;
    int t=0;
   
   while(1){
             if(Equal(a,c)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,k))
                 break;
             }
             a=PlusOne(a);
             t=PlusOne(t);
           }
    while(1){
      if(Equal(t,j))
        break;
      d=PlusOne(d);
      t=PlusOne(t);
    }
    if(Equal(d,k)){printf("몫 %d 나머지 0",c+1);}
    else{printf("몫 %d 나머지 %d",c,d);}}
  }
}
else{
  if(greaterthan(j,k)){
     while(1){
            if(Equal(j,0))
                break;
            j=PlusOne(j);
            r=PlusOne(r);
          }
    if(greaterthan(r,k)){
      printf("몫 0");
    }
else{    
     while(greaterthan(b,r)){
      if(Equal(a,k)){
        a=0;
        c=PlusOne(c);
      }
      else{
      a=PlusOne(a);
      b=PlusOne(b);}
    }
    a=0;
    b=0;
    int t=0;
   
   while(1){
             if(Equal(a,c)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,k))
                 break;
             }
             a=PlusOne(a);
             t=PlusOne(t);
           }
    while(1){
      if(Equal(t,r))
        break;
      d=PlusOne(d);
      t=PlusOne(t);
    }
    if(Equal(d,k)){printf("몫 -%d 나머지 0",c+1);}
    else{printf("몫 -%d 나머지 -%d",c,d);}
  }}
  else{
     while(1){
            if(Equal(k,0))
                break;
            k=PlusOne(k);
            l=PlusOne(l);
          }
    if(greaterthan(j,l)){
      printf("몫 0");
    }
    else{
      while(greaterthan(b,j)){
      if(Equal(a,l)){
        a=0;
        c=PlusOne(c);
      }
      else{
      a=PlusOne(a);
      b=PlusOne(b);}
    }
    a=0;
    b=0;
    int t=0;
   
   while(1){
             if(Equal(a,c)){
               a=0;
               b=PlusOne(b);
               if(Equal(b,l))
                 break;
             }
             a=PlusOne(a);
             t=PlusOne(t);
           }
    while(1){
      if(Equal(t,j))
        break;
      d=PlusOne(d);
      t=PlusOne(t);
    }
    if(Equal(d,l)){printf("몫 -%d 나머지 0",c+1);}
    else{printf("몫 -%d 나머지 %d",c,d);}
    }// j절대>k절대
 }}
}

int main(){
  printf("menu\n");
  printf("1: +\n");
  printf("2: -\n");
  printf("3: *\n");
  printf("4: /\n");
  printf("5 0 0: end\n");
  while(1){
    int op,j,k;
     scanf("%d %d %d",&op,&j,&k);
    if(Equal(1,op)){
      Plus(j,k);
    }
    else if(Equal(2,op)){
      Minus(j,k);
    }
    else if(Equal(3,op)){
      MP(j,k);
    }
    else if(Equal(4,op)){
      DV(j,k);
    }
    else if(Equal(5,op)){
     printf("종료");
      break;
    }
  }
}