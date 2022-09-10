

void days()

}

	int a, result, remd;

    red();
      puts("\t \t DAYS TO WEEK CONVETER\n");
      yellow();
	 printf("\t \t ENTER NUMBERS OF DAYS :");
	 red();
		scanf("%d", &a);
		result = a/7;
    remd = a%7;


	if(remd == 0)
	{
	  if (result != 1){
	  yellow();
	  printf("%d weeks", result);
	  }
	  else{
	  red();
	   printf("%d week", result);
	  }
		}
		else if (remd != 0)
		{
			if((remd == 1) && (result == 1)){
			blue();
			printf("%d week and %d day", result, remd);
			}
		else if((remd == 1) && (result != 1)){
		yellow();
			printf("%d weeks and %d day", result, remd);
		}
		else if((remd != 1) && (result == 1)){
			red();
			printf("%d week and %d days", result, remd);
		}
			else {
				blue();
				printf("%d weeks and %d days", result, remd);
			}

			reset();
			}
// return 1;
}
