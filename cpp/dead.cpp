#include <cstdio>
using namespace std;
void kuraysdead(int num) {
 if(num<7) return;
 int num2 = num - 7;
 printf("%d %s %d %s",num," - 7 = ",num2,"\n");
 kuraysdead(num2);
}
int main() {
 printf("Я гуль!\n");
 kuraysdead(1000);
 return 0;
}
