#include<stdio.h>

int main() {
    int pages[20], frame[3], n, i, j, k=0, fault=0, found;

    printf("Enter number of pages: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&pages[i]);

    for(i=0;i<3;i++)
        frame[i]=-1;

    for(i=0;i<n;i++) {
        found=0;
        for(j=0;j<3;j++)
            if(frame[j]==pages[i])
                found=1;

        if(!found) {
            frame[k]=pages[i];
            k=(k+1)%3;
            fault++;
        }
    }

    printf("Page Faults = %d", fault);
}
