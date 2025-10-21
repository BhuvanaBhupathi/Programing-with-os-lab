while(count<n){
bool found=false;
for(int i=0;i<n;i++){
if(!finish[i]){
int j; 
for(j=0;j<m;j++) if(need[i][j]>work[j]) break; 
if(j==m){ 
	for(int k=0;k<m;k++) work[k]+=alloc[i][k]; 
	safeSeq[count++]=i;
finish[i]=1;
found=true;
	} 
}
} 
		if(!found){ cout<<"System is not in a safe state\n"; return 0; } 
	} 
	cout<<"System is in a safe state.\nSafe sequence: "; 
	for(int i=0;i<n;i++) cout<<"P"<<safeSeq[i]<<" "; 
	cout<<endl; 
	return 0; 
}
