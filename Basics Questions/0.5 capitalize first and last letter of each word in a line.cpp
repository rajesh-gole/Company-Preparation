#include <stdio.h>
#include <string.h>
 
int main() 
{
  char str[100];
  
  printf("Enter a string:\n");
  gets(str);
  
  int length = strlen(str);
  
  for(int i=0;i<length;i++)
  {
      if((i==0 && str[i]!=' ')||(i==(length-1) && (str[i]!=' ')) )//Converting character at first and last index to uppercase.
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ')//Converting characters present before and after space to uppercase.
      {
          str[i-1]=toupper(str[i-1]);
          str[i+1]=toupper(str[i+1]);
          
      }
  }
  
  //Printing result.
  printf("String after capitalizing first and last letter of each word:\n%s", str);
 
  return 0;
}
