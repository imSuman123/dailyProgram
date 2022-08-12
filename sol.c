int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int q=n/5;
	    int c=q;
	    while(q>=5){
	        q= q/5;
	        c=c+q;
	    }
	    printf("%d\n",c);
	}