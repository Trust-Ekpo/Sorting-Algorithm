# include <iostream>

using namespace std;
//function definition for insertion
void insertionsort(int arr[])
{
	//Declaring variable
	int j,key;
	j=0;
	//creating an outer for loop
	for(int i=1; i<5; i++)
	{
		//Picking the element which will be used for comparison
		key=arr[i];
		//going one position to the left of the element we have picked 
		j=i-1;
		//creating another loop to use for comparison 
		//j>=0 because j cannot be less than 0 as it is the index position
		// arr[j]>key because we want to know if the key value is greater or less than the values to the left of it 
		while(j>=0 && arr[j]>key)
		{
			//shifting elements
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
}
//function definition for selection
void selectionsort(int arr[])
{
	//creating outer for loop
	for(int i=0; i<4; i++)
	{
		//Declaring variable min which points to the i value
		int min=i;
		//creating an inner for loop 
		for(int j=1+1; j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		
		if(min!=i)
		{
			//swapping
			int temp=arr[min];
			arr[min]= arr[i];
			arr[i]=temp;
		}
	}
}
void CocktailSort(int arr[])
{
	//Declaring variables 
	bool isSwapped;
	int start, end,i;
    isSwapped = true;
    start = 0;
    end = 4;


    while (isSwapped)
	{
		//making isswapped false because it might be true
		
        isSwapped = false;
		//looping from left to right
        for(i=start;i<end;i++)
        {
        	
            if(arr[i] > arr[i + 1])
            {
            	//swapping the values 
			    int temp=arr[i+1];
				arr[i+1]= arr[i];
				arr[i]=temp;
								
                isSwapped = true;
            }
        }
		//nothing moved hence array is sorted
        if (isSwapped == false)
        {
		    break;
		}
		
        isSwapped = false;

        end = end - 1;
		//looping from right to left
        for(i=end-1;i>=end;i--)
        {
            if (arr[i] > arr[i + 1])
            {
			 	int temp=arr[i+1];
				arr[i+1]= arr[i];
				arr[i]=temp;
								
                isSwapped = true;
            }
        }
             start = start + 1;
    }

   

}
void gettingvalues()
{
	//Declaring the variables 
	
	int myarray[5],q;
	bool loop=true;
	
	//Requesting data from user
	cout<<"Enter 5 integers in any order"<<endl;
	//loop to take in 5 numbers from user 
	for(int i=0;i<5;i++)
	{
		cin>>myarray[i];
	}
	//clearing screen 
	system("cls");

		//loop to display all the numbers inputted by the user before sorting
	cout<<"Before sorting"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarray[i]<<endl;
	}
	cout<<"What sorting algorithm do you want to use?\n1. Insertion sort\n2. Selection sort\n3. Cocktail sort"<<endl;
	cin>>q;
	switch(q)
	{
		case 1:
			//calling insertion function
			insertionsort(myarray);
			break;
		case 2:
			//calling insertion function
			selectionsort(myarray);
			break;
		case 3:
			//calling CocktailSort function
			CocktailSort(myarray);
			break;
		default:
			cout<<"\nYou have chosen a wrong option\nHere is your unsorted array\n"<<endl;
			break;
	
	}
		//loop to display all numbers after performing sorting
	cout<<"\nAfter sorting"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarray[i]<<endl;
	}
	
	int o;
	cout<<"\nDo you want to perform another test?\n1. Yes\n2. No"<<endl;
	cin>>o;
	if(o==1)
	{
		system("cls");
		gettingvalues();
	}
	else if(o==2)
	{
		cout<<"\nThank you for using Groups 3's Sorting algorithm program\nStay Safe"<<endl;
		
		
	}
	else
	{
		cout<<"Thank you for using Groups 3's Sorting algorithm program\nStay Safe"<<endl;
		
	}
	
}
int main()
{
	
	gettingvalues();
	
	

	return 0;
}





