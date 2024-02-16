#include<stdio.h>
int fact(int n){
  
  static long int ans=1;
  
    if(n==0){
      return ans;
      }
    else{
      ans=n*fact(n-1);
      }    
  
}
int main(){
  
  int n; 
  
  printf("ENTER THE NUMBER: ");
  scanf("%d", &n);
  
  long int res= fact(n);
  
  printf("THE FACTORIAL OF %d IS: %d.", n, res);

return 0;

}  
