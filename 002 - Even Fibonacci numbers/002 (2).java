class A{

static int i = 0;

public static void main(String[] args){

int a = 1;
int b = 1;
int c;

while(b<4000000){

if(b%2==0){
i = i+b;}

c=a+b;
a=b;
b=c;

}

System.out.println(i);


}

}

