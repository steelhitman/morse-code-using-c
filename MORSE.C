#include <stdio.h>
#include <windows.h>
//#include <dos.h>
void dit(){
  printf(".");
  Beep(500,500);

}
void dah(){
  printf("_");
  Beep(700,700);
}
void space(){
  printf(" -- ");
  Beep(800,800);
}

int main(void)
{
  char string[1000],ch;
  int len;
  printf("Enter The Message : \n");
  gets(string);
  //ch=string[len];
  strupr(string); // Not working

  for(len=0;string[len];len++){
    ch=string[len];

    if(ch==' '){
     space();
   }
    if(ch=='A'||ch=='a'){
      dit();
			dit();
      dah();
			dah();
    }else if(ch=='B'||ch=='b'){
      dah();
      dit();
			dah();
			dit();
    }else if(ch=='C'||ch=='c'){
      dah();
      dit();
			dit();
			dah();
    }else if(ch=='D'||ch=='d'){
      dah();
      dit();
			dit();
			dit();
    }else if(ch=='E'||ch=='e'){
      dah();
			dah();
			dah();
      dit();
    }else if(ch=='F'||ch=='f'){
      dit();
      dit();
			dit();
			dit();
    }else if(ch=='G'||ch=='g'){
      dah();
      dit();
			dit();
			dah();
    }else if(ch=='H'||ch=='h'){
      dah();
      dit();
			dit();
			dah();
    }else if(ch=='I'||ch=='i'){
      dah();
      dah();
    }else if(ch=='J'||ch=='j'){
      dit();
      dit();
    }else if(ch=='K'||ch=='k'){
      dah();
      dit();
			dah();
    }else if(ch=='L'||ch=='l'){
      dah();
      dit();
			dit();
    }else if(ch=='M'||ch=='m'){
      dah();
      dit();
    }else if(ch=='N'||ch=='n'){
      dah();
      dit();
			dah();
    }else if(ch=='O'||ch=='o'){
      dah();
      dit();
			dit();
    }else if(ch=='P'||ch=='p'){
      dah();
      dit();
			dah();
			dit();
    }else if(ch=='Q'||ch=='q'){
      dit();
			dah();
      dit();
    }else if(ch=='R'||ch=='r'){
			dit();
			dit();
      dah();
      dit();
    }else if(ch=='S'||ch=='s'){
      dah();
			dah();
      dit();
    }else if(ch=='T'||ch=='t'){
      dah();
			dah();
      dit();
    }else if(ch=='U'||ch=='u'){
			dit();
      dah();
      dit();
    }else if(ch=='V'||ch=='v'){
      dah();
      dit();
			dit();
    }else if(ch=='W'||ch=='w'){
      dah();
      dit();
			dah();
    }else if(ch=='X'||ch=='x'){
      dah();
      dit();
			dah();
    }else if(ch=='Y'||ch=='y'){
      dah();
			dah();
      dit();
    }else if(ch=='Z'||ch=='z'){
      dah();
			dah();
			dit();
      dit();
    }else if(ch=='0'){
      dah();
    }else if(ch=='1'){
      dit();
    }else if(ch=='2'){
      dit();
      dit();
    }else if(ch=='3'){
      dah();
      dah();
    }else if(ch=='4'){
      dah();
      dit();
			dah();
    }else if(ch=='5'){
      dah();
      dit();
    }else if(ch=='6'){
      dah();
      dit();
			dit();
    }else if(ch=='7'){
      dah();
    }else if(ch=='8'){
      dit();
    }else if(ch=='9'){
      dah();
      dit();
			dah();
    }

  }
    return 0;
}
