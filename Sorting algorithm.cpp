

# include <iostream>
# include <chrono>

using namespace std;

void insertionsort(int arr[])
{
		//Declare variables 
	int j,key;
	j=0;
	
	
	//Sort the array 
	//Starting Timer
		
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
	cout<<"\nInsertion sort"<<endl;
}
void selectionsort(int arr[])
{
	//Declare variables 
	int temp;
	
	//Sort the array 
	for(int i=0; i<4; i++)
	{
		int min=i;
		for(int j=i+1; j<5; j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	cout<<"\nSelection sort"<<endl;
}

void cocktailsort(int arr[])
{
	//Declare variables 
	int temp;
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
			    temp=arr[i+1];
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
			 	temp=arr[i+1];
				arr[i+1]= arr[i];
				arr[i]=temp;
								
                isSwapped = true;
            }
        }
             start = start + 1;
    }
	cout<<"\nCocktail sort"<<endl;
}

int main()
{
	//Declaring Variables
	int myarray[5], soal, w=1, one;;

while(w==1){

		cout<<"What do you want to do?\n 1. Insertion Sort\n 2. Selection Sort\n 3. Cocktailsort\n 4. Compare the above algortihms\n 5. Exit"<<endl;
	cin>>soal;
	switch(soal)
	{
		case 1:
				
			//Populate the array
			cout<<"Enter 5 integers"<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>myarray[i];
			}
			//display unsorted array
			cout<<"Unsorted array"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<myarray[i]<<endl;
			}
			//call functions
			insertionsort(myarray);
				//display Sorted array
			cout<<"\nSorted Array"<<endl;
			for(int p=0; p<5; p++)
			{
				cout<<myarray[p]<<endl;
			}
			cout<<"press 1 to go back"<<endl;
			cin>>one;
			if(one==1){
			system("CLS");
			 continue;
			}else{
			break;
			}
		case 2:
				
			//Populate the array
			cout<<"Enter 5 integers"<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>myarray[i];
			}
			//display unsorted array
			cout<<"Unsorted array"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<myarray[i]<<endl;
			}
			//call functions
			selectionsort(myarray);
					//display Sorted array
			cout<<"\nSorted Array"<<endl;
			for(int p=0; p<5; p++)
			{
				cout<<myarray[p]<<endl;
			}
			cout<<"press 1 to go back"<<endl;
			cin>>one;
			if(one==1){
			system("CLS");
			 continue;
			}else{
			break;
			}
		case 3:
				
			//Populate the array
			cout<<"Enter 5 integers"<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>myarray[i];
			}
			//display unsorted array
			cout<<"Unsorted array"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<myarray[i]<<endl;
			}
			//call functions
			cocktailsort(myarray);
					//display Sorted array
			cout<<"\nSorted Array"<<endl;
			for(int p=0; p<5; p++)
			{
				cout<<myarray[p]<<endl;
			}
			cout<<"press 1 to go back"<<endl;
			cin>>one;
			if(one==1){
			system("CLS");
			 continue;
			}else{
			break;
			}
			
		case 4:
			cout<<"Enter 5 integers"<<endl;
			for(int i=0; i<5; i++)
			{
				cin>>myarray[i];
			}
			//display unsorted array
			cout<<"Unsorted array"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<myarray[i]<<endl;
			}
			{
			//Insertion
			//Starting Timer
			auto startinsertion=std::chrono::steady_clock::now();
			//calling function
			insertionsort(myarray);
			//Getting the end time
			auto endinsertion=std::chrono::steady_clock::now();
			//Getting the difference
			double elasped_insertion=double( std::chrono::duration_cast<std::chrono::nanoseconds> (endinsertion-startinsertion).count());
			//displaying elasped time for Insertion
			std::cout<<"Elasped Time for Insertion algorithm in seconds:" <<elasped_insertion/1000000000<<std::endl;
			}
			{
	
			//Selection
			//Starting Timer
			auto startselection=std::chrono::steady_clock::now();
			//calling function
			selectionsort(myarray);
			//Getting the end time
			auto endselection=std::chrono::steady_clock::now();
			//Getting the difference
			double elasped_selection=double( std::chrono::duration_cast<std::chrono::nanoseconds> (endselection-startselection).count());
			//Displaying elasped time for Selection
			std::cout<<"Elasped Time for Selection algorithm in seconds:" <<elasped_selection/1000000000<<std::endl;
			}
			{
			//Cocktail
				//Starting Timer
			auto startcocktail=std::chrono::steady_clock::now();
			//calling function
			cocktailsort(myarray);
			//Getting the end time
			auto endcocktail=std::chrono::steady_clock::now();
			//Getting the difference
			double elasped_cocktail= double( std::chrono::duration_cast<std::chrono::nanoseconds> (endcocktail-startcocktail).count());	
			//Displaying elasped time for Cocktail
			std::cout<<"Elasped Time for Cocktail algorithm in seconds:" <<elasped_cocktail/1000000000<<std::endl;
			}
			
					
					//display Sorted array
			cout<<"\nSorted Array"<<endl;
			for(int p=0; p<5; p++)
			{
				cout<<myarray[p]<<endl;
			}
			cout<<"press 1 to go back"<<endl;
			cin>>one;
			if(one==1){
			system("CLS");
			 continue;
			}else{
			break;
			}
		case 5:
			cout<<"Thank you for using Trust's sorthing algorithm\n Stay safe"<<endl;
			w=2;
			break;
		default:
			cout<<"You have not chosen a correct option"<<endl;
			break;
			
	}
}
	
	




	return 0;
}

