


int add(int x = 0, int y = 0, int z = 0){
   return x + y + z;
}



///
add(10, 20);   // 30
add(10, 20, 30);  //60

add(10);  //10


add();   //0


int add(int x, int y = 0, int z = 0); 

int add(int x, int y = 10);  //Yes
int add(int x, int y = 10, int z); //No
int add(int x = 12);  //Yes

int add(int x = 0, int y=34, int z=90, int w=76); //Yes


int func(char ch, int d, float f = 10.6f, double dd = 78); //Yes