/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// ASCII CODE 
/* 
A-65 to Z-90
a-97 to z-122
0-48 to 9-57

enter-10
space-13
esc-27

*/

// '\0' is known as string delimeter or end of string or null character. 


int
Valid (char *A)
{
  int i;
  for (i = 0; A[i] != '\0'; i++)
    {
      if (!(A[i] >= 65 && A[i] <= 90) && !(A[i] >= 97 && A[i] <= 122)
	  && !(A[i] >= 48 && A[i] <= 57))
	{
	  return 0;
	}
    }
  return 1;
}

int
main ()
{

  /*
     //char A[4];
     scanf("%s",A);
     //or
     cin>>A;
     printf("%s",A);
     //Or
     //cout<<A<<endl;

   */
  //1) Finding Length of a string

  /*
     char A[10]="Khemchand";
     cout<<A<<endl;
     int i;
     for(i=0; A[i]!='\0'; i++)
     {

     }
     cout<<"Length of "<<A<<" is "<<i<<endl;
   */

  //2) Changing case of a string 

  /*
     char A[10]="KhemChand";
     cout<<"Before "<<A<<endl;
     int i;
     for(i=0; A[i]!='\0'; i++)
     {
     if(A[i]>=97 && A[i]<=122)
     {
     A[i]-=32;
     }
     }
     cout<<"Now "<<A<<endl;
   */

  //3) Counting Words and Vowels in a Sring 

  /*
     char A[]="KHEMCHAND";
     cout<<A<<endl;
     int i;
     int vcount=0;
     int ccount=0;
     for(i=0; A[i]!='\0'; i++)
     {
     if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
     {
     vcount++;
     }
     else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122))
     {
     ccount++;
     }
     }
     cout<<"Number of Vowels in string is "<<vcount<<endl;
     cout<<"Number of Consonent in string is "<<ccount<<endl;
   */


  //Word Counting*******
  /*
     char A[]="KHEMCHAND Matlani";
     cout<<A<<endl;
     int i;
     int spaces=0;

     for(i=0; A[i]!='\0'; i++)
     {
     if(!(A[i]>=65 && A[i]<=90)&&!(A[i]>=97 && A[i]<=122))
     {
     spaces++;
     }
     }
     cout<<"NO. of Words in String is "<<spaces+1<<endl;
   */
  //word Counting 2nd Method ****
  /*
     char A[]="KHEMCHAND Matlani Ji";
     cout<<A<<endl;
     int i;
     int spaces=0;

     for(i=0; A[i]!='\0'; i++)
     {
     if(A[i]==' ' )
     {
     spaces++;
     }
     }
     cout<<"NO. of Words in String is "<<spaces+1<<endl;
   */


  //4)Validating a String *****

  /*   
     char A[]="Anil321"; 
     //is it a password (password does not take special character)*****
     cout<<A<<endl;
     cout<<Valid(A)<<endl;
   */


  //5) Reverse a string *******

  //Method 1st******

  /*
     char A[]="Python";
     cout<<A<<endl;
     char B[7];
     int i,j;
     for(j=0; A[j]!='\0'; j++)
     {

     }
     j=j-1;
     for(i=0; A[i]!='\0'; i++,j--)
     {
     B[i]=A[j];
     }
     for(i=0; A[i]!='0'; i++)
     {
     A[i]=B[i];
     }
     cout<<A<<endl;
   */

  //Method 2nd*****

  /* 
     char A[]="Python";
     cout<<A<<endl;
     int i,j;
     for(j=0; A[j]!='\0'; j++)
     {

     }
     j=j-1;
     for(i=0; i<j; i++,j--)
     {
     char t;
     t=A[i];
     A[i]=A[j];
     A[j]=t;
     }
     cout<<A<<endl;
   */




  //6) Compiring string and Palindrme****


/*  
  char A[]="painterz";
  char B[]="paintera";
  int i,j;
  for(i=0,j=0; A[i]!='\0'&&B[j]!='\0'; i++,j++)
  {
      if(A[i]!=B[j])
      {
          break;
      }
  }
  if(A[i]==B[j])
  {
      cout<<"Equal"<<endl;
  }
  else if(A[i]<B[j])
  {
      cout<<"smaller"<<endl;
  }
  else
  {
      cout<<"Grater"<<endl;
  }

*/


// Palindrome -> If after reversing a string we get same then string is said to be Palindrome*****
/* 
steps 
1) Reverse 
2) compare
*/


//7) Finding Dublicate in a String *****


/*
char A[]="finding";
int H[26],i;
for(i=0; A[i]!='\0'; i++)
{
    H[A[i]-97]+=1;
    
}
for(i=0; i<26; i++)
{
    if(H[i]>1)
    {
        
        printf("%c",i+97);
    }
}
*/



//Method 3rd Bits Operation *****



/*
char A[]="finding";
cout<<A<<endl;
int i;
long int H,X=0;
for(i=0; A[i]!='\0'; i++)
{
    X=1;
    X=X<<(A[i]-97);
    if((X&H)>0)          //X&H this is Masking (to check whether bit is on or off)****
    {
        printf("%c Dublicate ",A[i]);
    }
    else
    {
        H=X|H;          //X|H this is merging (to make bit on)******
    }
}
*/



//8) Checkingg if Two Strings are Anagram(Distinct letters)*****

/*
char A[]="decimal";
char B[]="medicel";
int H[26]={0};
int i;
for(i=0; A[i]!='\0'; i++)
{
    H[A[i]-97]+=1;
}
for(i=0; B[i]!='\0'; i++)
{
    H[B[i]-97]-=1;
    if((H[B[i]-97])<0)
    {
        cout<<"Not Anagram"<<endl;
        break;
    }
}
if(B[i]=='\0')
{
cout<<"Anagram"<<endl;
}
*/


  return 0;
}

