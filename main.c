#include <stdio.h>
#include <string.h>

int main()
{
	char siki[100];
	char num_tmp[100];
	double nums[100];
	int i=0, nums_count=0, head_ptr=0, j=0, fptr=0;

	for(i=0;i<100;i++){
		siki[i] = '\0';
		nums[i] = ' ';
	}

	i = 0;
	while((siki[fptr++] = getchar()) != '\n'){
		printf("%d\n", siki[fptr-1]);	//d
		printf("siki~:%s\n", siki);	//d
		if(siki[fptr-1]==' ' || siki[fptr]=='\n'){
			siki[fptr-1] = '\0';
			strncpy(num_tmp, siki + head_ptr, fptr-1);

			printf("num_tmp:%s\n", num_tmp);//d

			head_ptr = fptr;
			// int a = atoi(num_tmp);//d
			// nums[0] = (double)a;//d
			nums[nums_count++] = (double)(atoi(num_tmp));//double	にできない
			
			// nums_count++;
			// printf("a:%1.1f\n", (double)a + 1.0);//d
			// printf("num_tmp:%d\n", atoi(num_tmp));//d
			// printf("nums[]:%1.1f\n", nums[0]);//d	
			siki[fptr-1] = ' ';
		}
	}
	if(siki[i-1] == ' '){
		printf("siki:%s\n", siki);
		while(nums[j] != ' '){
		printf("%1.1f\n", nums[j]);
		j++;
		}	
	}
	printf("footer:%d\n", i);

	return 0;
}
