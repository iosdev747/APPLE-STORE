/*****************************************HEADER FILES*****************************************/
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
#include<fstream>
#include<dos.h>
using namespace std;							//FOR USING CIN AND COUT FUNCTIONS
/*****************************************************************************************************/


/*****************************************FUNCTION PROTOTYPES*****************************************/
void macbook();
void macbookair();
void macbookpro();
void imac();
void macpro();
void macmini();
void ipadpro();
void ipadair2();
void ipadmini4();
void ipadmini2();
void iphone7();
void iphone6s();
void iphonese();
void applewatchseries2();
void applewatchnikeplus();
void applewatchhermes();
void applewatchseries1();
void newuser();
void lock();
void chkuser();
void forget();
void gotoxy();
void window_mac_product(int);
void window_ipad_product(int);
void window_iphone_product(int);
void window_watch_product(int);
void window_mac();
void window_ipad();
void window_iphone();
void window_watch();
int mario();
void fmacbook();
void fmacbookair();
void fmacbookpro();
void fimac();
void fmacpro();
void fmacmini();
void fipadpro();
void fipadair2();
void fipadmini4();
void fipadmini2();
void fiphone7();
void fiphone6s();
void fiphonese();
void fapplewatchseries2();
void fapplewatchnikeplus();
void fapplewatchhermes();
void fapplewatchseries1();
void print();
void cart();
void welcome();
/************************************************************************************************************************************/


/*****************************************DECLARATION AND INITIALISATION OF GLOBAL VARIABLES*****************************************/
int choice2,choice3,choice4,choice5;
int item_quantity[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
/*      POSITION OF ARRAY item_quantity w.r.t. ITEMS
!   MacBook == 0
!   MacBook Air == 1
!   MacBook Pro == 2
!   iMac == 3
!   Mac Pro == 4
!   Mac mini == 5
!
!   iPad Pro == 6
!   iPad Air 2 == 7
!   iPad Mini 4 == 8
!   iPad Mini 2 == 9
!
!   iPhone 7 == 10
!   iPhone 6s == 11
!   iPhone SE == 12
!
!   Apple watch Series 2 == 13
!   Apple watch Nike+ == 14
!   Apple watch Hermes == 15
!   Apple watch Series 1 == 16
*/
/*************************************************************************************************************************************/


/****************************************FUNCTION DEFINATION OF GOTOXY() FUNCTION FOR DEV C++*****************************************/
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/**************************************************************************************************************************************/


// OPENING FILES
	ofstream bill("Purchase@Apple_Store@2016.memo",ios::trunc);
	fstream pass_file("apple.txt",ios::in);

	
//structure contains data variable of all respective products 
	struct mac
    {
       long price;
    };
    
	struct ipad
    {
       long price;
    };
    
	struct iphone
    {
       long price;
    };
    
	struct watch
    {
       long price;
    };
    
    
//Price entries of products goes here
  	watch ws2={1099};
   	watch wn={399};
   	watch wh={1499};
 	watch ws1={299};
  	iphone i7={969};
 	iphone i6s={749};
 	iphone ise={449};
    ipad ip={1129};
   	ipad ia2={629};
   	ipad im4={629};
   	ipad im2={399};
    mac mb={1599};
    mac mba={1549};
    mac mbp={4799};
    mac im={4628};
    mac mp={9577};
    mac mm={2177};
    
    
//contains password tools
	char passwd[25];
	int position=0;
	char inputpass[10];
	
	
/*************************contain item choices using if statement to call their respective functions********************************* 
**************************************int parameter is for identifier-choice for selection*******************************************/


//FOR MAC products
void window_mac_product(int)
{
	system("cls");
 
  if(choice2==1)
	{
			macbook();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[0]++;
		}
	}
	
  if(choice2==2)
	{
			macbookair();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[1]++;
		}
	}

  if(choice2==3)
	{
			macbookpro();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[2]++;
		}
	}

  if(choice2==4)
	{
			imac();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[3]++;
		}
	}

  if(choice2==5)
	{	
			macpro();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[4]++;
		}
	}

  if(choice2==6)
	{
			macmini();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[5]++;
		}
	}
	system("pause");
}


//FOR iPad products
void window_ipad_product(int)
{
	system("cls");
  
  if(choice3==1)
	{
			ipadpro();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[6]++;
		}
	}
	
  if(choice3==2)
	{
			ipadair2();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[7]++;
		}
	}
	
  if(choice3==3)
	{
			ipadmini4();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[8]++;
		}
	}
	
  if(choice3==4)
	{
			ipadmini2();
			cout<<"Add product to cart(y/n)"<<endl;    
		if(getch()=='y')
		{
			item_quantity[9]++;
		}
	}
	
	system("pause");
}


//FOR iPhone products
void window_iphone_product(int)
{
	system("cls");
  
  if(choice4==1)
	{
			iphone7();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[10]++;
		}
	}
	
  if(choice4==2)
	{		
			iphone6s();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[11]++;
		}
	}
	
  if(choice4==3)
	{	
			iphonese();
			cout<<"Add product to cart(y/n)"<<endl;    
		if(getch()=='y')
		{
			item_quantity[12]++;
		}
	}
	
	system("pause");
}


//FOR iWatch products
void window_watch_product(int)
{
	system("cls");
  
  if(choice5==1)
	{
			applewatchseries2();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[13]++;
		}
	}
	
  if(choice5==2)
	{
			applewatchnikeplus();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[14]++;
		}
	}
	
  if(choice5==3)
	{
			applewatchhermes();
			cout<<"Add product to cart(y/n)"<<endl;     
			if(getch()=='y')
		{
			item_quantity[15]++;
		}
	}
	
  if(choice5==4)
	{
			applewatchseries1();
			cout<<"Add product to cart(y/n)"<<endl;     
		if(getch()=='y')
		{
			item_quantity[16]++;
		}
	}
	
	system("pause");
}
/*************************************************************************************************/



//Macbook Information
void macbook()
{
	
	cout<<"12-inch MacBook - RoseGold"<<endl<<endl;
	cout<<"512 GB PCIe-based onboard flash storage"<<endl;
	cout<<"1.2GHz dual-core Intel Core m5 processor"<<endl;
	cout<<"Turbo Boost up to 2.7GHz"<<endl;
	cout<<"8GB memory"<<endl;
	cout<<"Intel HD Graphics 515"<<endl<<endl;
	cout<<"$"<<mb.price<<endl;

}



//macbook Pro Information
void macbookpro()
{
	
	cout<<"15-inch MacBook Pro - Space Gray"<<endl<<endl;
	cout<<"2.9GHz quad-core Intel Core i7 processor,"<<endl;
	cout<<"Turbo Boost up to 3.8GHz"<<endl;
	cout<<"16GB 2133MHz memory"<<endl;
	cout<<"2TB PCIe-based SSD"<<endl;
	cout<<"Radeon Pro 460 with 4GB memory"<<endl;
	cout<<"Backlit Keyboard (English) & User's Guide"<<endl;
	cout<<"Four Thunderbolt 3 ports"<<endl;
	cout<<"Touch Bar and Touch ID"<<endl;
	cout<<"Final Cut Pro X"<<endl;
	cout<<"Logic Pro X"<<endl<<endl;
	cout<<"$"<<mbp.price<<endl;

}



//macbook Air Information
void macbookair()
{
	
	cout<<"13-inch MacBook Air - Space Gray"<<endl<<endl;
	cout<<"512 GB PCIe-based Flash Storage"<<endl;
	cout<<"2.2GHz Dual-core Intel Core i7,"<<endl;
	cout<<"Turbo Boost up to 3.2GHz"<<endl;
	cout<<"8GB 1600MHz LPDDR3 SDRAM"<<endl;
	cout<<"Intel HD Graphics 6000"<<endl;
	cout<<"Backlit Keyboard (English) & User's Guide"<<endl<<endl;
	cout<<"$"<<mba.price<<endl;

}



//imac Information
void imac()
{

	cout<<"27-inch iMac with Retina 5K display"<<endl<<endl;
	cout<<"4.0GHz quad-core Intel Core i7,"<<endl;
	cout<<"Turbo Boost up to 4.2GHz"<<endl;
	cout<<"32GB 1867 MHz DDR3 SDRAM - four 8GB"<<endl;
	cout<<"1TB Flash Storage"<<endl;
	cout<<"AMD Radeon R9 M395X with 4GB video memory"<<endl;
	cout<<"Magic Mouse 2 + Magic Trackpad 2"<<endl;
	cout<<"Magic Keyboard (English) & User's Guide"<<endl;
	cout<<"Accessory Kit"<<endl;
	cout<<"Final Cut Pro X"<<endl;
	cout<<"Logic Pro X"<<endl<<endl;
	cout<<"$"<<im.price<<endl;

}



//mac pro Information
void macpro()
{
	
	cout<<"Mac Pro"<<endl<<endl;
	cout<<"2.7GHz 12-core with 3MB of L3 cache"<<endl;
	cout<<"64GB (4x16GB) of 1866MHz DDR3 ECC"<<endl;
	cout<<"1TB PCIe-based flash storage"<<endl;
	cout<<"Dual AMD FirePro D700 GPUs with 6GB of GDDR5 VRAM each"<<endl;
	cout<<"Magic Mouse 2"<<endl;
	cout<<"Magic Keyboard -US English"<<endl;
	cout<<"User's Guide (English)"<<endl;
	cout<<"Final Cut Pro X"<<endl;
	cout<<"Logic Pro X"<<endl<<endl;
	cout<<"$"<<mp.price<<endl;

}



//mac mini Information
void macmini()
{
	
	cout<<"Mac mini"<<endl<<endl;
	cout<<"3.0GHz Dual-Core Intel Core i7(Turbo Boost up to 3.5GHz"<<endl;
	cout<<"16GB 1600MHz LPDDR3 SDRAM"<<endl;
	cout<<"1TB PCIe-based Flash Storage"<<endl;
	cout<<"Intel Iris Graphics"<<endl;
	cout<<"Magic Keyboard -US English"<<endl;
	cout<<"User's Guide (English)"<<endl;
	cout<<"Magic Mouse 2"<<endl;
	cout<<"Accessory Kit"<<endl<<endl;
	cout<<"$"<<mm.price<<endl;

}



//iPad Pro Information
void ipadpro()
{
	
	cout<<"12.9-inch iPad Pro"<<endl<<endl;
	cout<<"Gold"<<endl;
	cout<<"256 GB storage"<<endl;
	cout<<"Wifi + Cellular"<<endl<<endl;
	cout<<"$"<<ip.price<<endl;

}



//iPad air 2 Information
void ipadair2()
{
	
	cout<<"9.7-inch iPad air 2"<<endl<<endl;
	cout<<"Space Gray"<<endl;
	cout<<"128 GB storage"<<endl;
	cout<<"Wifi + Cellular"<<endl<<endl;
	cout<<"$"<<ia2.price<<endl;

}



//iPad mini 4 Information
void ipadmini4()
{
	
	cout<<"7.9-inch iPad mini 4"<<endl<<endl;
	cout<<"Space Gray"<<endl;
	cout<<"128 GB storage"<<endl;
	cout<<"Wifi + Cellular"<<endl<<endl;
	cout<<"$"<<im4.price<<endl;

}



//iPad mini 2 Information
void ipadmini2()
{

	cout<<"7.9-inch iPad mini 2"<<endl<<endl;
	cout<<"Space Gray"<<endl;
	cout<<"32 GB storage"<<endl;
	cout<<"Wifi + Cellular"<<endl<<endl;
	cout<<"$"<<im2.price<<endl;

}



//iphone 7 Information
void iphone7()
{
	
	cout<<"5.5-inch iphone 7 Plus"<<endl<<endl;
	cout<<"Rose Gold"<<endl;
	cout<<"256 GB storage"<<endl<<endl;
	cout<<"$"<<i7.price<<endl;

}



//iphone 6s Information
void iphone6s()
{
	
	cout<<"4.7-inch iphone 6s"<<endl<<endl;
	cout<<"Rose Gold"<<endl;
	cout<<"128 GB storage"<<endl<<endl;
	cout<<"$"<<i6s.price<<endl;

}



//iphone se Information
void iphonese()
{

	cout<<"4-inch iphone SE"<<endl<<endl;
	cout<<"Rose Gold"<<endl;
	cout<<"64 GB storage"<<endl<<endl;
	cout<<"$"<<ise.price<<endl;

}



//watch series 2 Information
void applewatchseries2()
{

	cout<<"Apple Watch Series 2"<<endl<<endl;
	cout<<"42mm Case"<<endl;
	cout<<"Build-in GPS"<<endl;
	cout<<"Water resistant 50m"<<endl;
	cout<<"dual-core processor"<<endl;
	cout<<"watchOS 3"<<endl<<endl;
	cout<<"$"<<ws2.price<<endl;

}



//watch nike + Information
void applewatchnikeplus()
{

	cout<<"Apple Watch Nike +"<<endl<<endl;
	cout<<"42mm Case"<<endl;
	cout<<"Build-in GPS"<<endl;
	cout<<"Water resistant 50m"<<endl;
	cout<<"dual-core processor"<<endl;
	cout<<"watchOS 3"<<endl<<endl;
	cout<<"$"<<wn.price<<endl;

}



//watch Hermes Information
void applewatchhermes()
{

	cout<<"Apple Watch Herm‚s"<<endl<<endl;
	cout<<"38mm Case"<<endl;
	cout<<"Build-in GPS"<<endl;
	cout<<"Water resistant 50m"<<endl;
	cout<<"dual-core processor"<<endl;
	cout<<"watchOS 3"<<endl<<endl;
	cout<<"$"<<wh.price<<endl;

}



//watch seeries 1 Information
void applewatchseries1()
{

	cout<<"Apple Watch series1"<<endl<<endl;
	cout<<"38mm Case"<<endl;
	cout<<"Dual-core processor"<<endl;
	cout<<"watchOS 3"<<endl<<endl;
	cout<<"$"<<ws1.price<<endl;

}



/*****************************window of categories after main switch statement executed*********************/


//FOR DISPLAY OF iWatch items
void window_watch()
{
system("cls");

	gotoxy(0,2);
	cout<<"Apple watch:   1.Series 2";

	gotoxy(35,2);
	cout<<"2.Nike+";

	gotoxy(50,2);
	cout<<"3.Herm‚s";

	gotoxy(66,2);
	cout<<"4.Series 1\n";

	gotoxy(1,12);
	cout<<"Input->  ";

cin>>choice5;

   if(choice5!=1&&choice5!=2&&choice5!=3&&choice5!=4)
	{
		window_watch();
	}
	
   else
	{
		window_watch_product(choice5);
	}
}


//FOR DISPLAY OF iPad items
void window_ipad()
{
system("cls");

	gotoxy(2,2);
	cout<<"1. ipad Pro";
	
	gotoxy(20,2);
	cout<<"2. ipad Air 2";
	
	gotoxy(40,2);
	cout<<"3. ipad Mini 4";
	
	gotoxy(61,2);
	cout<<"4. ipad Mini 2\n";
	
	gotoxy(1,12);
	cout<<"Input->  ";

cin>>choice3;

   if(choice3!=1&&choice3!=2&&choice3!=3&&choice3!=4)
    {
		window_ipad();
	}
   else
	{
		window_ipad_product(choice3);
	}

}


//FOR DISPLAY OF iPhone items
void window_iphone()
{
system("cls");

	gotoxy(2,2);
	cout<<"1. iphone 7";
	
	gotoxy(30,2);
	cout<<"2. iphone 6s";
	
	gotoxy(62,2);
	cout<<"3. iphone SE\n";	

	gotoxy(1,12);
	cout<<"Input->  ";

cin>>choice4;

   if(choice4!=1&&choice4!=2&&choice4!=3)
	{
		window_iphone();
	}
   else
	{
		window_iphone_product(choice4);
	}

}


//FOR DISPLAY OF mac items
void window_mac()
{
system("cls");

	gotoxy(2,2);
	cout<<"1.MacBook";
	
	gotoxy(15,2);
	cout<<"2.MacBook Air";
	
	gotoxy(32,2);
	cout<<"3.MacBook Pro";
	
	gotoxy(48,2);
	cout<<"4.iMac";
	
	gotoxy(56,2);
	cout<<"5.Mac Pro";
	
	gotoxy(68,2);
	cout<<"6.Mac mini\n";
	
	gotoxy(1,12);
	cout<<"Input->  ";
								
cin>>choice2;

   if(choice2!=1&&choice2!=2&&choice2!=3&&choice2!=4&&choice2!=5&&choice2!=6)
	{
		window_mac();
	}
   else
	{
		window_mac_product(choice2);
	}
	
}



/*************************************FUNCTION LOCK TO LOCK THE PROGRAM************************************/
void lock()
{
	

	//******************************************SYNTAX I for array**************************************//
	//******************************************No use of file handling********************************//
	
/*	
		gets(inputpass);
		position=0;
	
		for(int j=0;j<strlen(pass);j++)
		{
			if(pass[position]==inputpass[position])
			{
				position++;
			}
	 	 		
			else
			{
				exit(0);
			}
		}
*/


	//**************************************SYNTAX II for data handling***********************************//
/*	
	while(!pass_file.eof())               // passfile is object of apple.txt that store password
	{
		position=0;
		gets(inputpass);
		pass_file>>passwd;
		if(strcmp(passwd,inputpass)==0)
		{
			position=1;
		}
		else
		exit(1);
	}
*/
	//**************************************SYNTAX III for data handling**********************************//
	//******************************************Supports Multi User***************************************//
	
chkuser();
}
/*****************************************END OF LOCK FUNCTION**************************************/


//*********************************************Welcome Song*****************************************//
    
	int mario()
    {
	/*
	Source:- Stackoverflow.com
	*/
        Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(500);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(900);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (523,100);Sleep(300);
        Beep (523,100);Sleep(100);
        Beep (523,100);Sleep(1100);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (311,300);Sleep(300);
        Beep (296,300);Sleep(300);
        Beep (262,300);Sleep(1300);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (330,100);Sleep(700);
        Beep (440,100);Sleep(300);
        Beep (392,100);Sleep(500);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        /*Intro*/
        Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (196,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (330,100);Sleep(125);
        Beep (392,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (660,100);Sleep(125);
        Beep (784,100);Sleep(575);
        Beep (660,100);Sleep(575);
        Beep (207,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (311,100);Sleep(125);
        Beep (415,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (622,100);Sleep(125);
        Beep (830,100);Sleep(575);
        Beep (622,100);Sleep(575);
        Beep (233,100);Sleep(125);
        Beep (294,100);Sleep(125);
        Beep (349,100);Sleep(125);
        Beep (466,100);Sleep(125);
        Beep (587,100);Sleep(125);
        Beep (698,100);Sleep(125);
        Beep (932,100);Sleep(575);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (1046,675);
       
        system ("pause");
        return 0;
    }


/*********************************FOR PRINTING ITEMS IN THE BILL************************************/
	

//macbook
	void fmacbook()
{
		bill<<"12-inch MacBook - RoseGold"<<endl<<endl;
		bill<<"512 GB PCIe-based onboard flash storage"<<endl;
		bill<<"1.2GHz dual-core Intel Core m5 processor"<<endl;
		bill<<"Turbo Boost up to 2.7GHz"<<endl;
		bill<<"8GB memory"<<endl;
		bill<<"Intel HD Graphics 515"<<endl<<endl;
		bill<<"$"<<mb.price<<endl;

}


//macbook Pro
	void fmacbookpro()
{
		bill<<"15-inch MacBook Pro - Space Gray"<<endl<<endl;
		bill<<"2.9GHz quad-core Intel Core i7 processor,"<<endl;
		bill<<"Turbo Boost up to 3.8GHz"<<endl;
		bill<<"16GB 2133MHz memory"<<endl;
		bill<<"2TB PCIe-based SSD"<<endl;
		bill<<"Radeon Pro 460 with 4GB memory"<<endl;
		bill<<"Backlit Keyboard (English) & User's Guide"<<endl;
		bill<<"Four Thunderbolt 3 ports"<<endl;
		bill<<"Touch Bar and Touch ID"<<endl;
		bill<<"Final Cut Pro X"<<endl;
		bill<<"Logic Pro X"<<endl<<endl;
		bill<<"$"<<mbp.price<<endl;
}


//macbook Air
	void fmacbookair()
{
		bill<<"13-inch MacBook Air - Space Gray"<<endl<<endl;
		bill<<"512 GB PCIe-based Flash Storage"<<endl;
		bill<<"2.2GHz Dual-core Intel Core i7,"<<endl;
		bill<<"Turbo Boost up to 3.2GHz"<<endl;
		bill<<"8GB 1600MHz LPDDR3 SDRAM"<<endl;
		bill<<"Intel HD Graphics 6000"<<endl;
		bill<<"Backlit Keyboard (English) & User's Guide"<<endl<<endl;
		bill<<"$"<<mba.price<<endl;
}


//imac
	void fimac()
{
		bill<<"27-inch iMac with Retina 5K display"<<endl<<endl;
		bill<<"4.0GHz quad-core Intel Core i7,"<<endl;
		bill<<"Turbo Boost up to 4.2GHz"<<endl;
		bill<<"32GB 1867 MHz DDR3 SDRAM - four 8GB"<<endl;
		bill<<"1TB Flash Storage"<<endl;
		bill<<"AMD Radeon R9 M395X with 4GB video memory"<<endl;
		bill<<"Magic Mouse 2 + Magic Trackpad 2"<<endl;
		bill<<"Magic Keyboard (English) & User's Guide"<<endl;
		bill<<"Accessory Kit"<<endl;
		bill<<"Final Cut Pro X"<<endl;
		bill<<"Logic Pro X"<<endl<<endl;
		bill<<"$"<<im.price<<endl;
}


//mac pro
	void fmacpro()
{
		bill<<"Mac Pro"<<endl<<endl;
		bill<<"2.7GHz 12-core with 3MB of L3 cache"<<endl;
		bill<<"64GB (4x16GB) of 1866MHz DDR3 ECC"<<endl;
		bill<<"1TB PCIe-based flash storage"<<endl;
		bill<<"Dual AMD FirePro D700 GPUs with 6GB of GDDR5 VRAM each"<<endl;
		bill<<"Magic Mouse 2"<<endl;
		bill<<"Magic Keyboard -US English"<<endl;
		bill<<"User's Guide (English)"<<endl;
		bill<<"Final Cut Pro X"<<endl;
		bill<<"Logic Pro X"<<endl<<endl;
		bill<<"$"<<mp.price<<endl;
}


//mac mini
	void fmacmini()
{
		bill<<"Mac mini"<<endl<<endl;
		bill<<"3.0GHz Dual-Core Intel Core i7(Turbo Boost up to 3.5GHz"<<endl;
		bill<<"16GB 1600MHz LPDDR3 SDRAM"<<endl;
		bill<<"1TB PCIe-based Flash Storage"<<endl;
		bill<<"Intel Iris Graphics"<<endl;
		bill<<"Magic Keyboard -US English"<<endl;
		bill<<"User's Guide (English)"<<endl;
		bill<<"Magic Mouse 2"<<endl;
		bill<<"Accessory Kit"<<endl<<endl;
		bill<<"$"<<mm.price<<endl;
}


//iPad Pro
	void fipadpro()
{
		bill<<"12.9-inch iPad Pro"<<endl<<endl;
		bill<<"Gold"<<endl;
		bill<<"256 GB storage"<<endl;
		bill<<"Wifi + Cellular"<<endl<<endl;
		bill<<"$"<<ip.price<<endl;
}


//iPad air 2
	void fipadair2()
{
		bill<<"9.7-inch iPad air 2"<<endl<<endl;
		bill<<"Space Gray"<<endl;
		bill<<"128 GB storage"<<endl;
		bill<<"Wifi + Cellular"<<endl<<endl;
		bill<<"$"<<ia2.price<<endl;
}


//iPad mini 4
	void fipadmini4()
{
		bill<<"7.9-inch iPad mini 4"<<endl<<endl;
		bill<<"Space Gray"<<endl;
		bill<<"128 GB storage"<<endl;
		bill<<"Wifi + Cellular"<<endl<<endl;
		bill<<"$"<<im4.price<<endl;
}


//iPad mini 2
	void fipadmini2()
{
		bill<<"7.9-inch iPad mini 2"<<endl<<endl;
		bill<<"Space Gray"<<endl;
		bill<<"32 GB storage"<<endl;
		bill<<"Wifi + Cellular"<<endl<<endl;
		bill<<"$"<<im2.price<<endl;
}


//iphone 7
	void fiphone7()
{
		bill<<"5.5-inch iphone 7 Plus"<<endl<<endl;
		bill<<"Rose Gold"<<endl;
		bill<<"256 GB storage"<<endl<<endl;
		bill<<"$"<<i7.price<<endl;
}


//iphone 6s
	void fiphone6s()
{
		bill<<"4.7-inch iphone 6s"<<endl<<endl;
		bill<<"Rose Gold"<<endl;
		bill<<"128 GB storage"<<endl<<endl;
		bill<<"$"<<i6s.price<<endl;
}


//iphone se
	void fiphonese()
{
		bill<<"4-inch iphone SE"<<endl<<endl;
		bill<<"Rose Gold"<<endl;
		bill<<"64 GB storage"<<endl<<endl;
		bill<<"$"<<ise.price<<endl;
}


//watch series 2
	void fapplewatchseries2()
{
		bill<<"Apple Watch Series 2"<<endl<<endl;
		bill<<"42mm Case"<<endl;
		bill<<"Build-in GPS"<<endl;
		bill<<"Water resistant 50m"<<endl;
		bill<<"dual-core processor"<<endl;
		bill<<"watchOS 3"<<endl<<endl;
		bill<<"$"<<ws2.price<<endl;
}


//watch nike +
	void fapplewatchnikeplus()
{
		bill<<"Apple Watch Nike +"<<endl<<endl;
		bill<<"42mm Case"<<endl;
		bill<<"Build-in GPS"<<endl;
		bill<<"Water resistant 50m"<<endl;
		bill<<"dual-core processor"<<endl;
		bill<<"watchOS 3"<<endl<<endl;
		bill<<"$"<<wn.price<<endl;
}


//watch Hermes
	void fapplewatchhermes()
{
		bill<<"Apple Watch Hermes EDITION WATCH"<<endl<<endl;
		bill<<"38mm Case"<<endl;
		bill<<"Build-in GPS"<<endl;
		bill<<"Water resistant 50m"<<endl;
		bill<<"dual-core processor"<<endl;
		bill<<"watchOS 3"<<endl<<endl;
		bill<<"$"<<wh.price<<endl;
}


//watch seeries 1
	void fapplewatchseries1()
{
		bill<<"Apple Watch series1"<<endl<<endl;
		bill<<"38mm Case"<<endl;
		bill<<"Dual-core processor"<<endl;
		bill<<"watchOS 3"<<endl<<endl;
		bill<<"$"<<ws1.price<<endl;
}
/****************************************END OF PRINTING IN BILL***********************************/


/**********************************************BILL PRINTER****************************************/

void print()
{

		bill<<"================================================================================\n";
		bill<<"--------------------------------------------------------------------------------\n\n";
		
for(int k=0;k<17;k++)
	{
		if(item_quantity[k]!=0)
		{			bill<<"\t\t\t\tQuantity: "<<item_quantity[k]<<endl;
			switch(k)
			{
				case 0 : fmacbook();
						 break;
				case 1 : fmacbookair();
						 break;
				case 2 : fmacbookpro();
						 break;
				case 3 : fimac();
						 break;
				case 4 : fmacpro();
						 break;
				case 5 : fmacmini();
						 break;
				case 6 : fipadpro();
						 break;
				case 7 : fipadair2();
						 break;
				case 8 : fipadmini4();
						 break;
				case 9 : fipadmini2();
						 break;
				case 10: fiphone7();
						 break;
				case 11: fiphone6s();
						 break;
				case 12: fiphonese();
						 break;
				case 13: fapplewatchseries2();
						 break;
				case 14: fapplewatchnikeplus();
						 break;
				case 15: fapplewatchhermes();
						 break;
				case 16: fapplewatchseries1();
						 break;
			}		
			bill<<"--------------------------------------------------------------------------------\n";
		}
	}
	bill<<"================================================================================\n";
	
}


//***********************************************CART FUNCTION****************************************//

void cart()
{
	
system("cls");	
cout<<"================================================================================\n";
cout<<"--------------------------------------------------------------------------------\n\n";

for(int k=0;k<17;k++)
	{
		if(item_quantity[k]!=0)
		{	cout<<"\t\t\t\tQuantity: "<<item_quantity[k]<<endl;
			switch(k)
			{
				case 0 : macbook();
						 break;
				case 1 : macbookair();
						 break;
				case 2 : macbookpro();
						 break;
				case 3 : imac();
						 break;
				case 4 : macpro();
						 break;
				case 5 : macmini();
						 break;
				case 6 : ipadpro();
						 break;
				case 7 : ipadair2();
						 break;
				case 8 : ipadmini4();
						 break;
				case 9 : ipadmini2();
						 break;
				case 10: iphone7();
						 break;
				case 11: iphone6s();
						 break;
				case 12: iphonese();
						 break;
				case 13: applewatchseries2();
						 break;
				case 14: applewatchnikeplus();
						 break;
				case 15: applewatchhermes();
						 break;
				case 16: applewatchseries1();
						 break;
			}
			cout<<"--------------------------------------------------------------------------------\n";
		}
	}
cout<<"================================================================================\n";
cout<<"Checkout (y/n)";


if(getch()=='y')
{
	print();
}

system("pause");
}


//*********************************************Create an account**************************************//

void newuser()
{
	system("cls");
	char username[20],userpass[20];
	gets(username);
	cout<<"\tEnter your Username:";
	gets(username);
	cout<<"\n\tEnter your New Password:";
	gets(userpass);
	strcat(username,".txt");
	fstream user(username,ios::out);
	user<<userpass;
	system("pause");
	user.close();
}


//***********************************************Login************************************************//
/*
check for username and password
*/

void chkuser()
{
	system("cls");
	char userentered[20],passentered[20],ch[20];
	cout<<"\tEnter Username: ";
	gets(userentered);
	cout<<"\n\tEnter Password: ";
	gets(passentered);
	strcat(userentered,".txt");
	ifstream m;
	m.open(userentered,ios::in);
	if(!m)
	{
		cout<<"INVALID USERNAME\n";
		system("pause");
		exit(0);
	}
	else
	while(!m.eof())
	{
		m>>ch;
		if(strcmp(ch,passentered)==0)
		{
			cout<<"success";
		}
		
		else	
		{	
			cout<<"INVALID PASSWORD\n"; 
			exit(0);
		}
	}
	
	m.close();
}


void forget()
{
	newuser();
}


void welcome()
{
	system("cls");
	
cout<<endl<<"   .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-. ";
cout<<endl<<" .'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `.";
cout<<endl<<"(    .     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .    )";
cout<<endl<<" `.   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   `._.'   .'";
cout<<endl<<"   )    )                                                       (    (";
cout<<endl<<" ,'   ,'    D.A.V.  Public  School,  Pratap  Vihar  Ghaziabad    `.   `.";
cout<<endl<<"(    (                                                             )    )";
cout<<endl<<" `.   `.                                                         .'   .' ";
cout<<endl<<"   )    )                                                       (    (";
cout<<endl<<" ,'   ,'                                                         `.   `.";
cout<<endl<<"(    (                Welcome  To  Apple  Store                    )    )";
cout<<endl<<" `.   `.                                                         .'   .' ";
cout<<endl<<"   )    )                                                       (    (";
cout<<endl<<" ,'   ,'                        Developers:                      `.   `.";
cout<<endl<<"(    (                                     Arsh Singh              )    )";
cout<<endl<<" `.   `.                                   Anshul Singh          .'   .' ";
cout<<endl<<"   )    )       _       _       _       _       _       _       (    (";
cout<<endl<<" ,'   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   `.";
cout<<endl<<"(    '  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `-'  _  `    )";
cout<<endl<<" `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .' `.   .'";
cout<<endl<<"   `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'";


		Sleep(700);
        Beep (196,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (330,100);Sleep(125);
        Beep (392,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (660,100);Sleep(125);
        Beep (784,100);Sleep(575);
        Beep (660,100);Sleep(575);
        Beep (207,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (311,100);Sleep(125);
        Beep (415,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (622,100);Sleep(125);
        Beep (830,100);Sleep(575);
        Beep (622,100);Sleep(575);
        Beep (233,100);Sleep(125);
        Beep (294,100);Sleep(125);
        Beep (349,100);Sleep(125);
        Beep (466,100);Sleep(125);
        Beep (587,100);Sleep(125);
        Beep (698,100);Sleep(125);
        Beep (932,100);Sleep(575);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (1046,675);
        
        system("cls");
        
}



/*////**********************************MAIN FUNCTION OF THE PROGRAM***************************************\\\\*/
int main()
{	

	welcome();
	
	system("cls");
	lock();										// if you pass the lock then only you'll be allowed to use the program  //
	
	int choice;
	
	begin:										// BEGIN  MARK		
	system("cls");

	window_main:								// window_main MARK
	
	gotoxy(2,2);
	cout<<"1. Mac";
	
	gotoxy(23,2);
	cout<<"2. iPad";
	
	gotoxy(43,2);
	cout<<"3. iPhone";
	
	gotoxy(62,2);
	cout<<"4. Watch\n";
	
	gotoxy(2,5);
	cout<<"5. Forget Password";
	
	gotoxy(23,5);
	cout<<"6. Welcome Song";
	
	gotoxy(43,5);
	cout<<"7. Sign up";
	
	gotoxy(62,5);
	cout<<"8. Cart\n";
	
	gotoxy(2,20);
	cout<<"Press 9 for exit";
	
	gotoxy(1,12);
	cout<<"Input->  ";
	
	cin>>choice;
switch(choice)
  {
     case 1 : window_mac();
	     break;
     case 2 : window_ipad();
	     break;
     case 3 : window_iphone();
	     break;
     case 4 : window_watch();
	     break;
	 case 5 : forget();
	 	 break;
	 case 6 : mario();
	 	 break;
	 case 7 : newuser();
	 	 break;
	 case 8 : cart();
		 break;
	 case 9 : goto exit;
     default:goto window_main;
	     break;
  }
  
goto begin;

exit:											// exit MARK
pass_file.close();
bill.close();
return 0;
}














