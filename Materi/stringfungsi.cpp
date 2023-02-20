#include <iostream>
#include <string>
#include <cstring>
using namespace std;
main()
/*{ //cin.gcount()
	char teks [50];
	
	cout<<"INPUT KATA : ";
	cin.getline (teks, sizeof(teks));
	cout<<"JUMLAH KARAKTER : "<<cin.gcount() - 1;
}*/
	
/*{ //cin.getline()
	char teks [50];
	
	cout<<"INPUT KATA, AKHIRI DENGAN '.': ";
	cin.getline (teks, sizeof(teks), '.');
	cout<<"KALIMAT YANG DIINPUTKAN : "<<teks;
}*/

/*{ //for copy
	char teks1[] = "PEMROGRAMAN";
	char teks2 [25];
	int i;
	
	for (i=0; teks1[i]; i++)
		teks2[i] = teks1[i];
	
	teks2[i] = '\0';
	cout<<teks1<<endl<<teks2;
}*/

/*{ //strcpy()
	char teks1[] = "PEMROGRAMAN";
	char teks2 [25];
	
	strcpy (teks2,teks1);
	cout<<teks1<<endl<<teks2;
}*/

/*{ //strlen()
	char teks1[] = "PEMROGRAMAN";
	char teks2 [25]= "";
	int panjang1, panjang2;
	
	panjang1 = strlen (teks1);
	panjang2 = strlen (teks2);
	
	cout<<"PANJANG TEKS 1 = "<<panjang1<<endl;
	cout<<"PANJANG TEKS 2 = "<<panjang2<<endl;
}*/

/*{ //strcat()
	char teks1[] = "PEMROGRAMAN ";
	char teks2[] = "TERSTRUKTUR";	
	char teks3[] = "SATU";
	
	strcat (teks1, teks2);
	strcat (teks3, " DUA, TIGA");
	
	cout<<"TEKS 1 : "<<teks1<<endl;
	cout<<"TEKS 3 : "<<teks3<<endl;
}*/

/*{ //strncat()
	char teks1[] = "PEMROGRAMAN ";
	char teks2[] = "TERSTRUKTUR";	
	
	strncat (teks1, teks2, 3);
	
	cout<<"TEKS 1 : "<<teks1<<endl;	
}*/

/*{ //STRCMP
	char teks1[25];
	char teks2[25];
	int	 hasil;
	
	cout<<"INPUTKAN KALIMAT 1 : ";
	cin.getline (teks1, sizeof(teks1));
	cout<<"INPUTKAN KALIMAT 2 : ";
	cin.getline (teks2, sizeof(teks2));
	
	hasil = strcmp(teks1,teks2);
	cout<<"HASIL PERBANDINGAN = "<<hasil;
}*/

{ //STRICMP
	int A, B, C;
	char teks1[] = "SAYA";
	char teks2[] = "saya";
	char teks3[] = "SAYAP";
	char teks4[] = "sama";
	
	A= stricmp(teks1, teks2);
	B= stricmp(teks2, teks3);
	C= stricmp(teks1, teks4);
	
	cout<<A<<endl<<B<<endl<<C;
}

/*{ //STRNCMP
	char teks1[] = "SAYA";
	char teks2[] = "SAYa";
	char teks3[] = "SAya";
	int A, B;
	
	A= strncmp(teks1, teks2, 2);
	B= strncmp(teks1, teks3, 4);
	
	cout<<"A = "<<A<<endl<<"B = "<<B;
}*/

/*{ //strlwr
	char teks1[] = "PEMROGRAMAN";
	
	strlwr(teks1);
	cout<<teks1;
} */

/*{ //sttrupr
	char teks[] = "pemrograman";
	
	strupr(teks);
	cout<<teks;
}*/

/*{ //strstr
	char teks[25];
	
	cout<<"INPUT KALIMAT : ";
	cin.getline(teks, sizeof(teks));
	if (strstr (teks, "aman"))
		cout<<"KATA DITEMUKAN DALAM KALIMAT";
}*/

/*{ //strrev
	char teks[25];
	
	cout<<"INPUT KALIMAT : ";
	cin.getline (teks, sizeof(teks));
	strrev(teks);
	cout<<"KALIMAT TERBALIK : "<<teks;
}*/
