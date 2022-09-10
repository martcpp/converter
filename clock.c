void week()
{
        int h,m,s;

        printf("set:\n");
        scanf("%d %d %d", &h, &m, &s);


		if(h>12 || m>60 || s >60)
		{

			printf("error ");
			exit(0);
		}

		while(1)
		{
			s++;
			if(s > 59)
			{
				m++;
				s=0;

			}
			if(m>59)
			{
				h++;
				m=0;
			}
			if(h>12)
			{
			   h=1;
			}

    	printf("clock\n");
		printf("%02d:%02d:%02d", h, m, s);
		sleep(1);
		system("cls");

		}
}
