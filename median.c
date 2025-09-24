#include<stdio.h>
void tri_bulle(float t[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(t[j]>t[j+1]){
				int temp=t[j+1];
				t[j+1]=t[j];
				t[j]=temp;
			}
		}
	}
}
int main(){
	printf("\t Programme pour determiner le median du tableau.\n\n");
	int n;
	//Taille du tableau	
	do{
		printf("Entrez la taille du tableau: ");
		scanf("%d",&n);
	}while(n<=0);		
    float tab[n];
    //Enregistrement du tableau
    for(int i=0;i<n;i++){
    	printf("\nEntrez la valeur %d du tableau: ",i+1);
    	scanf("%f",&tab[i]);
    }
    printf("\nVoici le contenu de votre tableau: \n\n");
    for(int i=0;i<n;i++){
    	printf("%.2f   ",tab[i]);
    }
    //tri du tableau(tri bulle)
    tri_bulle(tab,n);
    printf("\nVoici le contenu de votre tableau après le tri: \n\n");
    for(int i=0;i<n;i++){
    	printf("%.2f   ",tab[i]);
    }
    float m;
    if(n%2==1){
    	printf("\n\nMediane= %.2f\n",tab[n/2]);
    }else{
    	m=(tab[n/2-1]+tab[n/2])/2;
    	printf("\n\nMediane= %.2f\n",m);
    }		
    return 0;
}    
    				 
				
