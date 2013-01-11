
#include <stdio.h>

main(){
	int c;
	int tabs = 1;
	int size = 10000; //Memory Size
	
	//Initial lines
	printf("#include <stdio.h>\n");
	printf("main(){\n");
	
	//Setup Memory
	printf("\tint p=%d;\n",size/2);
	printf("\tint memory[%d];\n",size+1);
	printf("\tint max = %d;\n",size);
	
	printf("\tint i;\n");
	printf("\tfor(i=0;i<max;i++){\n");
	printf("\t\tmemory[i]=0;\n");
	printf("\t}\n");
	
	while((c=getchar())!=EOF){
		if(c==']') tabs--;
		int i;
		for(i=0;i<tabs;i++){
			putchar('\t');
		}
		switch(c){
			case '>':
				printf("if(p<max)p++;\n");
				break;
			case '<':
				printf("if(p>0)p--;\n"); 
				break;
			case '+':
				printf("memory[p]++;\n");
				break;
			case '-':
				printf("memory[p]--;\n");
				break;
			case '.':
				printf("putchar(memory[p]);\n");
				break;
			case '\'':
				printf("memory[p]=getchar();\n");
				break;
			case '[':
				printf("while(memory[p]!=0){\n");
				tabs++;
				break;
			case ']':
				printf("}\n");
				break;
			default:
				printf("\r");
				break;
		}
	}
	printf("}\n");
}
