#include<stdio.h>

main(){
	int language,recharge,top_up,special;
	
	printf("Enter Your choice");
	scanf("%d",&language);
	
	switch(language){
		
		case 1:
			printf("press 1 for internet recharge\n");
			printf("press 2 for top_up recharge\n");
			printf("press 3 for special recharge\n");
			
			printf("Enter Your choice:");
			scanf("%d",&recharge);
			
		switch (recharge){
			case 1:
				printf("you have successfully done internet recharge");
				break;
			case 2:
				printf("you have successfully done top-up recharge");
				break;
			case 3:
				printf("you have successfully done special recharge");
				break;
				default:
                printf("Invalid choice.\n");

		}
		break;
		  case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &recharge);

            switch (recharge) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
			
			case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &recharge);

            switch (recharge) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");

	}
				
}
