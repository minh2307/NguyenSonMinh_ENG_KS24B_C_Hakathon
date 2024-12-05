#include <stdio.h>
#include <math.h>

int main(){
	int a[100],n,choice;
	int tong=0,count;
	int min_2,min_1;
	int temp;
	int key,j;
	int new_element,index,value;
	int k,b[100];
	do{
		printf(" \n           MENU     \n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra cac phan tu co trong mang\n");
		printf("3.Dem so luong so hoan hao co trong mang\n");
		printf("4.gia tri nho thu hai cua mang\n");
		printf("5.them phan tu vao mang\n");
		printf("6.xoa phan tu\n");
		printf("7.sap xe theo thu tu tang dan\n");
		printf("8.tim kiem phan tu\n");
		printf("9.\n");
		printf("10.\n");
		printf("11.thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
	switch(choice){
		
		case 1:
			printf("nhap so phan tu trong mang: ");
			scanf("%d",&n);
			for(int i=0; i<n; i++){
				printf("nhap gia tri phan tu thu %d: ",i+1);
				scanf("%d",&a[i]);
			}
			printf("\n");
			break;
		
		case 2:
			for(int i=0; i<n; i++){
				printf("a[%d]=%d, ",i,a[i]);
			}
			printf("\n");
			break;
			
		case 3:
			count=0;
			for(int i=0; i < n; i++){
				tong =0;
				for(int j = 1; j <= a[i]; j++){
       				if(a[i] % j == 0){
            			tong += j;  
						if(tong==a[i]){
    				      count++;  	
        				} 					      			
    				}
				}
			}
			printf("co %d so hoan hao trong mang",count);
			printf("\n");
			break;
			
		case 4:
			min_2=0;
			for (int i = 0; i < n; i++) {                      
			    if (a[i] < min_1) {                              
           			min_2 = min_1; 			
			        min_1 = a[i]; 
		     	} else if (a[i] > min_1 && a[i] < min_2) {      
			       	min_2 = a[i];
				}
			}
			if (min_2 == 0) {
        		printf("khong ton tai gia tri nho nhat thu hai.\n");
    		} else {
        		printf("gia tri nho nhat thu hai la: %d\n", min_2);
    		}
			break;
		
		case 5: 	
		 	printf("nhap phan tu muon chen: ");
    		scanf("%d",&new_element);

    		printf("nhap vi tri muon chen (0 den %d): ", n);
    		scanf("%d", &index);

			for (int i = n; i > index; i--) {
        		a[i] = a[i-1]; 
    		}
    			a[index] = new_element;
     			n++;
     		  printf("mang sau khhi chen:\n");
    		for (int i = 0; i < n; i++) {
        		printf("%d ", a[i]);
    		}
			break;
		case 6:
				printf("nhap phan tu muon xoa: ");
				scanf("%d",&k);
			for(int i = k; i < n - 1; i++){
        		a[i] = a[i + 1];
    		}
    		--n;
    			printf("Mang sau khi xoa : ");
    		for(int i = 0; i < n; i++){
        		printf("%d ", a[i]);
   		 	}
			break;
			
		case 7:
			for(int i=0; i < n ; i++){
				printf("%d ",a[i]);
			}
			printf("\n");
			for(int i=0; i < n-1; i++){
				for(int j=0; j < n-i-1; j++ ){
					if(a[j] > a[j+1]){
						temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
				}
			}
			for(int i=0; i < n ; i++){
				printf("%d ",a[i]);
			}
			
			break;
		case 8: 
		count=0;
			printf("nhap vao 1 so nguyen bat ky: ");
			scanf("%d",&value);
			for(int i=0; i < n;i++){
				if(a[i]==value){	
				b[count++]=i;
				}
			}
			if(count!=0){
			printf("vi tri cua phan tu trong mang la: ");
				for(int i=0; i < count; i++){
			printf("%d ",b[i]);
			}
		}else{
			printf("phan tu khong co trong mang");
		}
		case 9:
			
			break;
		
		case 10:
			
			break;
	}
	}while(choice!=11);



return 0;
}

