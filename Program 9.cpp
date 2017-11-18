#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
   int sayi1,sayi2;
    printf("Birinci sayiyi girin  :");
    scanf("%d",&sayi1);
    printf("Ýkinci sayiyi girin  :");
    scanf("%d",&sayi2);
    if(sayi1 > sayi2)
	{
    	printf("birinci sayi ikinci sayidan buyuktur");
	}
	else if(sayi2 > sayi1)
	{
		printf("ikinci sayi birinci sayidan buyuktur");

	}
	else
	{
		printf("Sayilar esittir.");
	}

	
    getch();
	
}
