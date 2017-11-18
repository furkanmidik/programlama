#include <stdio.h>
#include <conio.h>
main()
{
    int a=2,b=10,c=50;
    float f=1.05,g=25.5,h=0.1,yuzde;
    printf("\nTAB kullanilmadan yazilan tamsayilar : %d %d %d",a,b,c);
    printf("\nTAB kullanilarak yazilan tamsayilar : \t%d \t%d \t%d",a,b,c);
    
    printf("\nUc reel sayinin tek satirda yazilmasi : %f\t%f\t%f",f,g,h);
    printf("\nUc reel sayinin uc satirda yazilmasi : \n\t%f\n\t%f\n\t%f",f,g,h);
    
    yuzde=(220*25)/100.0;
    printf("\n220 un %%25 i %f dir",yuzde);
    printf("\n%f/%f isleminin sonucu=%f\n",g,f,g/f);
    printf("\n program sonunda beep sesi cikar...\a");
    getch();
    
	getch();
}
