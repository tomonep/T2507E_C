void inMang(int ary[], int size){
	for(int i=0; i<size; i++){
		printf("%d \t", ary[i]);
	}
}

void nhapMang(int ary[], int size){
	printf("\n");
	for(int i=0; i<size; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &ary[i]);
	}
}

int timMax(int ary[], int size){
	int max=0;
	for(int i=0;i<size;i++){
		if(max<ary[i]){
			max=ary[i];
		}
	}
	return max;
}

int timMin(int ary[], int size){
	int min=ary[0];
	for(int i=1;i<size;i++){
		if(min>ary[i]){
			min=ary[i];
		}
	}
	return min;
}

void sapXep(int ary[], int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(ary[j]>ary[j+1]){
				int temp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=temp; 
			}
		}
	}	
}

void daoNguoc(int a[], int size){
    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}



