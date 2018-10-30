#include <stdio.h>
#include <math.h>


int main(void) {
	
	int i = 0;
	float time = 0;
	FILE *fp;
	fp = fopen( "mydata.m", "w" ); // Open file for writing
	if(fp){
		fprintf(fp, "mydata= [\n");
	
		for (i=0;i<200;i++) {
			time = i*0.01;
			
			fprintf(fp, "%.4f %.4f\n", time,(float)(3.5*sin(2*3.14*time)));
			i++;
		}
	
		fprintf(fp, "];\n");
		
		fclose(fp);
	}

}
