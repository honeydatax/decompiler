#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[]){
	int linel=0;
	char s[2080];
	char ss[2080];
	char *s1;
	char *s2;
	char f[2080];
	char ff[2080];
	char fff[2080];
	int nn=0;
	int n=0;
	FILE* f1;
	printf("\ec\e[44;36m\a\n\n");
	if(argc>1){
		sprintf(f,"%s.jav",argv[1]);
		sprintf(ff,"procyon \"%s\" > \"%s\"",argv[1],f);
		printf("working..... %s\n\n",f);
		system(ff);
		f1=fopen(f,"r");
		n=0;
		//while(n!=1){
			if(linel!=0){
				for(nn=0;nn<linel;nn++){
					fgets(fff,2070,f1);
				}
			}
			nn=0;
			while(feof(f1)!=1){
				fgets(fff,2070,f1);
				s1=strstr(fff,"import ");
					if (s1!=NULL){
						s1=s1+7;
						s2=strstr(fff,";");
						if (s2!=NULL)s2[0]=0;
						sprintf(ff,"procyon \"%s\" >> \"%s\"",s1,f);
						printf("working... %s\n",s1);
						system(ff);
					}
			}
		
		//}	
		fclose(f1);
	}
	return 0;
}
