 printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nYou have entered:\n");
    for (i = 0; i < 5; i++) {
        printf("\na[%d]=%d",i,a[i]);
    }
    for(i=0;i<5;i++)
        {
            if(a[i]%2==0)
            {
            printf("\n%d is even",a[i]);
            }
            else
            {
            printf("\n %d is odd",a[i]);
            }    
        }
        return 0;
    }
