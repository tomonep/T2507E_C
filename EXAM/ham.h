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

int timSoNT(int a){
	if (a < 2) return 0;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0)
            return 0;
    }
    return 1;
}


