#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{ 
	// // printf("argc=%d\n",argc);
	// // for(int i=0; i<argc; i++){
	// // 	printf("%s\n",argv[i]);
	// // }
	// printf("%d\n",atoi("423"));
	// printf("%.2f",atof("3.5"));

	puts(argv[1]);
	//printf("");

	if(argv[2][0]=='+'){
		printf("%s + %s = %.2f",argv[1],argv[3],(atof(argv[1])+atof(argv[3])));
	}
	else if(argv[2][0]=='-'){
		printf("%s - %s = %.2f",argv[0],argv[2],(atof(argv[1])-atof(argv[3])));
	}
	else if(argv[2][0]=='x'){
		printf("%s x %s = %.2f",argv[0],argv[2],(atof(argv[1])*atof(argv[3])));
	}
	else if(argv[2][0]=='/'){
		printf("%s / %s = %.2f",argv[0],argv[2],(atof(argv[1])/atof(argv[3])));
	}
	else{
		printf("Incorrect Entry!");
	}
	



	return 0;
}
