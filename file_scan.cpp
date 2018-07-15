#include <stdio.h>
#include <stdlib.h>

int main(){
	int time, feet;
	FILE *myfile;
	myfile = fopen("sample.txt", "r");
	if(myfile == NULL)
		printf("Error opening the file");
	else{
		while(fscanf(myfile, "%i %i", &time, &feet) == 2){
			printf("%i %i\n",time, feet );
		}
	}
 fclose(myfile);
 return 0;
}