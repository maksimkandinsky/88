#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void quicksort(int *p,int l,int r,int *sr,int *per){
int op,l1,r1,t, k;
l1 = l;
r1 = r;
k = (l+r)/2;
op = p[k];
while(l1<=r1){
   while(p[l1]< p[k]){
        *sr+=1;
        l1++;
        printf("%d\n",*sr);
    }
   while(p[r1]>p[k]){
        *sr+=1;
        r1--;
        printf("%d\n",*sr);
   }
   if(l1!=k){
    *sr+=1;
    printf("%d\n",*sr);
   }
   if(r1!=k){
    *sr+=1;
    printf("%d\n",*sr);
   }
   if(l1<= r1){
        if(l1<r1){
                if(l1==k){
                    k = r1;
                }else{
                if(r1==k){
                    k = l1;
                }
                }
    t = p[l1];
    p[l1]=p[r1];
    p[r1]=t;
    *per+=1;
    l1++;
    r1--;
   }else{
    l1++;
    r1--;
   }
}
}
printf("%d/\n",*sr);
   if(l<r1){
    quicksort(p,l,r1,sr,per);
   }
   if(r>l1){
    quicksort(p,l1,r,sr,per);
   }
}
int main()
{
    setlocale(LC_ALL,"Rus");
int i,n,sr,per;
int *pa;
sr =  0;
per = 0;
printf("Введите кол-во элементов,затем сами элементы\n");
scanf("%d",&n);
pa = malloc(n*(sizeof(int)));
for(i =0;i<n;i++){
    scanf("%d",&pa[i]);
}
quicksort(pa,0,n-1,&sr,&per);
for(i =0;i<n;i++){
    printf("%d ",pa[i]);
}
printf("сравнений:%d перестановок:%d",sr,per);
    return 0;
}
