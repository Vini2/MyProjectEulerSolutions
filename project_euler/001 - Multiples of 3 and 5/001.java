class A{

static int i = 0;

public static void main(String[] args){

for(int a=0; a<1000; a++){

if(a%3==0 | a%5==0){

i = i+a;

}
}


System.out.println(i);


}

}