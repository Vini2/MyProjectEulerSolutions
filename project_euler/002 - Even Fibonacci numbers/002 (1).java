class A{

static int i = 0;

public static void main(String[] args){

int a = 1;
int b = 2;

while(a<=4000000 & b<=4000000){

a = a+b;
if(a%2==0){
i = i+a;}

b = a+b;
if(b%2==0){
i = i+b;}

}

System.out.println(i);


}

}

//Answer = 4613732