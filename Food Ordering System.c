//Moiz-Ul-Islam Cs181117 mainMenu-Breakfast-Brunch-Gst.
//Humza Rashid Qureshi Cs181109 Lunch-Dinner-Exit-againOrder. 
#include <stdio.h>			//header files
#include <ctype.h>

void bfast();		// prototype's
void brunch();
void lunch();
void dinner();
void mMenu(); 
void exit();

int num;		//global variable
float prize;
int amount;
float total;
char choice;
int gst = 13;
int again;

void main()
{
	mMenu();
}

 
void mMenu()  // main menu screen
{
	char choice = ' ' ; //local variable

  printf("                Welcome to Cafe Roccos.          \n ");
  printf("             +============================+          \n\n");
  printf("  && Please select the meal that you would like to purchase. && \n\n");
  printf("\t\t      [A] Breakfast\n");
  printf("\t\t      [B] Brunch\n");  
  printf("\t\t      [C] Lunch\n");
  printf("\t\t      [D] Dinner\n");
  printf("\t\t      [E] Exit\n\n");
  printf("Enter your choice here : ");
  scanf("%c", &choice);
  system("cls");
  
		{
		if (toupper(choice) == 'A' )
		  bfast();
		else 
			if (toupper(choice) == 'B')
				  brunch();
			else 
				if (toupper(choice) == 'C')
					  lunch();
				else 
					if (toupper(choice) == 'D')
						  dinner();
					else 
						  if (toupper(choice) == 'E')
							  exit();	
						  else 
							  if (toupper(choice) != 'A' , 'B' , 'C' , 'D' , 'E')
							  { 
								  mMenu();
							  }
		}
  

}
void bfast() //Breakfast Menu Screen 
{
  int choice = 0; //local variables
  int quantity = 0;
  int again = 0;
  
  fflush(stdin);
  printf("                Welcome to Cafe Roccos .          \n ");
  printf("             +============================+          \n\n");
  printf("                  $  Breakfast Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Butter Toast - Rs 100\n");
  printf("\t\t   [2] Egg Muffin - Rs 200\n");
  printf("\t\t   [3] Lasi - Rs 180\n");
  printf("\t\t   [4] Chai Paratha - Rs 110\n");
  printf("\t\t   [5] Halwa Puri - Rs 220\n");
  printf("\t\t   [6] Nihari and Naan - Rs 250\n");
  
  
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1) 
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  prize = 100 * quantity ;
	  gst = prize * 0.13;
	  total = gst + prize;
	   printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total); 
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast();
			 else 
				 if (again == 2 )
					mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
      }
	else 
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 200 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 3)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 180 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 4)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 110 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 5)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 220 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				bfast();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
			  if ( choice == 6 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  prize = 250 * quantity ;
			  gst = prize * 0.13;
			  total = gst + prize;
			  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total); 
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");
		
			  if (again == 1 )
				{
				bfast();
				 }
			  else 
				  if (again == 2 )
					{	
					mMenu();
					}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					 exit();
					}
			  }
			  else 
					if (choice != 1 , 2 , 3, 4, 5, 6 )
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						bfast();
						}
    }			
  }
 void brunch() //Brunch Menu Screen 
{
  int choice = 0; //local variables
  int quantity = 0;
  int again = 0;
  
  fflush(stdin);
  printf("                Welcome to Cafe Roccos .          \n ");
  printf("             +============================+          \n\n");
  printf("                  $  Brunch Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Mocktails - Rs 350\n");
  printf("\t\t   [2] Pan cake - Rs 200\n");
  printf("\t\t   [3] Muffins - Rs 250\n");
  printf("\t\t   [4] Waffles - Rs 350\n");
  printf("\t\t   [5] Banana Bread - Rs 200\n");
  printf("\t\t   [6] Cinnamon Rolls - Rs 250\n");
  
  
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1) 
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  prize = 350 * quantity ;
	  gst = prize * 0.13;
	  total = gst + prize;
	   printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total); 
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				brunch();
			 else 
				 if (again == 2 )
					mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
      }
	else 
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 200 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				brunch();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 3)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 250 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				brunch();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 4)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 350 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				brunch();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
		  if ( choice == 5)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 200 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				brunch();
			 else if (again == 2 )	
				mMenu();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}
		  }
		  else 
			  if ( choice == 6 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  prize = 250 * quantity ;
			  gst = prize * 0.13;
			  total = gst + prize;
			  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total); 
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   system("cls");
		
			  if (again == 1 )
				{
				brunch();
				 }
			  else 
				  if (again == 2 )
					{	
					mMenu();
					}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					 exit();
					}
			  }
			  else 
					if (choice != 1 , 2 , 3, 4, 5, 6 )
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						bfast();
						}
    }			
  }
 

void lunch() // Lunch Screen Menu
{
  int choice;  //local variables
  int quantity;
  int again;
  

  printf("                Welcome to Cafe Roccos.       \n ");
  printf("             +============================+          \n\n");
  printf("                   $  Lunch Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Fried Rice with Manchurian - Rs 400\n");
  printf("\t\t   [2] Haleem- Rs 250\n");
  printf("\t\t   [3] Daal- Rs 200\n");
  printf("\t\t   [4] Garlic Naan- Rs 50\n");
  printf("\t\t   [5] Kheer- Rs 150\n");
  printf("\t\t   [6] Fish Curry with Rice - Rs 500\n");
  
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1) 
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  prize = 400 * quantity ;
	  gst = prize * 0.13;
	  total = gst + prize;
	  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total); 
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
		}
      }
	else 
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 250 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else 
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
		}
		  }
		  else 
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  prize = 200 * quantity ;
			  gst = prize * 0.13;
			  total = gst + prize;
			  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
			   {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					lunch();
				else 
					if (again == 2 )
						mMenu();
				else
					if (again != 1 , 2)
					{	
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					 exit();
					}
	           }
			  }
			  else 
		  if ( choice == 4)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 50 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else 
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
		}
		  }
		  else 
		  if ( choice == 5)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 150 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else 
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
		}
		  }
		  else 
		  if ( choice == 6)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 500 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			lunch();
		else 
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
		}
		  }

				 else 
					 if (choice != 1 , 2 , 3, 4, 5, 6)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						lunch();
						}
	  }
				 
  
			
		
}





void dinner() // Dinner Menu Screen
{
  int choice;  //local variables
  int quantity;
  int again;
  

  printf("                Welcome to Cafe Roccos.        \n ");
  printf("             +============================+          \n\n");
  printf("                    $  Dinner Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Karhai(1kg) - Rs 1200\n");
  printf("\t\t   [2] Chicken Tikka(Leg) - Rs 550\n");
  printf("\t\t   [3] Chicken Steak - Rs 900\n");
  printf("\t\t   [4] Bihari Kabab - Rs 500\n");
  printf("\t\t   [5] BBQ Mutton Ribs - Rs 1500\n");
  printf("\t\t   [6] Prawn Kabab - Rs 720\n");
  printf("\t\t   [7] Reshmi Paneer Handi(1/2Kg) - Rs 1000\n");
  printf("\t\t   [8] Strawberry Cream Cake - Rs 180\n");
  printf("\t\t   [9] Kulfi - Rs 150\n");
  printf("\t\t   [10] Beverages(Can or Chai) - Rs 100\n");
  
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1) 
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  prize = 1200 * quantity ;
	  gst = prize * 0.13;
	  total = gst + prize;
	  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total); 
	    {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			dinner();
		else 
			if (again == 2 )
				mMenu();
		else
			if (again != 1 , 2)
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 exit();
			}
			
	    }
      }
	else 
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  prize = 550 * quantity ;
		  gst = prize * 0.13;
		  total = gst + prize;
		  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total);
		    {
			printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
			scanf("%d", &again);
			system("cls");
			if (again == 1 )
				dinner();
			else 
				if (again == 2 )
					mMenu();
			else
				if (again != 1 , 2)
				{	
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 exit();
				}		
	        }
		  }
		  else 
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  prize = 900 * quantity ;
			  gst = prize * 0.13;
			  total = gst + prize;
			  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
			    {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else 
					if (again == 2 )
						mMenu();
				else
					if (again != 1 , 2)
					{	
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					 exit();
					}
			
				 }
			  }
	{
	if (choice == 4) 
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  prize = 500 * quantity ;
			  gst = prize * 0.13;
			  total = gst + prize;
			  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total); 
			    {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				system("cls");
				if (again == 1 )
					dinner();
				else 
					if (again == 2 )
						mMenu();
				else
					if (again != 1 , 2)
					{	
					 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
					 exit();
					}
					
			    }
		      }
			else 
				  if ( choice == 5)
				  {
				  printf("Enter quantity : ");
				  scanf("%d", &quantity);
				  prize = 1500 * quantity ;
				  gst = prize * 0.13;
				  total = gst + prize;
				  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total);
				    {
					printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
					scanf("%d", &again);
					system("cls");
					if (again == 1 )
						dinner();
					else 
						if (again == 2 )
							mMenu();
					else
						if (again != 1 , 2)
						{	
						 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
						 exit();
						}		
			        }
				  }
				  else 
					  if ( choice == 6 )
					  {
					  printf("Enter quantity : ");
					  scanf("%d", &quantity);
					  prize = 720 * quantity ;
					  gst = prize * 0.13;
					  total = gst + prize;
					  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
					    {
						printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
						scanf("%d", &again);
						system("cls");
						if (again == 1 )
							dinner();
						else 
							if (again == 2 )
								mMenu();
						else
							if (again != 1 , 2)
							{	
							 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
							 exit();
							}
					
						 }
					  }
		 {
		if (choice == 7) 
				  {
				  printf("Enter quantity : ");
				  scanf("%d", &quantity);
				  prize = 1000 * quantity ;
				  gst = prize * 0.13;
				  total = gst + prize;
				  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total); 
				    {
					printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
					scanf("%d", &again);
					system("cls");
					if (again == 1 )
						dinner();
					else 
						if (again == 2 )
							mMenu();
					else
						if (again != 1 , 2)
						{	
						 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
						 exit();
						}
						
				    }
			      }
				else 
					  if ( choice == 8)
					  {
					  printf("Enter quantity : ");
					  scanf("%d", &quantity);
					  prize = 180 * quantity ;
					  gst = prize * 0.13;
					  total = gst + prize;
					  printf("Your total amount is Rs:%.2f , Please pay at the counter\n ", total);
					    {
						printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
						scanf("%d", &again);
						system("cls");
						if (again == 1 )
							dinner();
						else 
							if (again == 2 )
								mMenu();
						else
							if (again != 1 , 2)
							{	
							 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
							 exit();
							}		
				        }
					  }
					  else 
						  if ( choice == 9 )
						  {
						  printf("Enter quantity : ");
						  scanf("%d", &quantity);
						  prize = 150 * quantity ;
						  gst = prize * 0.13;
						  total = gst + prize;
						  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
						    {
							printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
							scanf("%d", &again);
							system("cls");
							if (again == 1 )
								dinner();
							else 
								if (again == 2 )
									mMenu();
							else
								if (again != 1 , 2)
								{	
								 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
								 exit();
								}
						
							 }
						  }

					  else 
						  if ( choice == 10 )
						  {
						  printf("Enter quantity : ");
						  scanf("%d", &quantity);
						  prize = 100 * quantity ;
						  gst = prize * 0.13;
						  total = gst + prize;
						  printf("Your total amount is Rs:%.2f , Please pay at the counter\n\n\n ", total);
						    {
							printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
							scanf("%d", &again);
							system("cls");
							if (again == 1 )
								dinner();
							else 
							if (again == 2 )
									mMenu();
							else
								if (again != 1 , 2)
								{	
								 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
								 exit();
								}
						
							 }
						  }


				 else 
					 if (choice != 1 , 2 , 3, 4, 5, 6, 7, 8, 9, 10)
						{
						fflush(stdin);
						system("cls");
						printf("\n\n\t\t   Invalid Choice Entered\n\n");
						dinner();
						}
				}		
		 }	
	}	 	
		
}

void exit()
{
  
  printf("                  Thank You Very Much          \n ");
  printf("             +============================+          \n\n");
  printf("               && Please come again. && \n\n");
}