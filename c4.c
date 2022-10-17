int main()
{
	int day;
	printf("Enter number of day:");
	scanf("%d",&day);
	switch(day)
	{
		case 1: printf("Monday ");
		case 2: printf("tuesday ");
		default:printf("funday ");
		case 3: printf("wednesday ");
	    case 4: printf("thursday ");
    }
}