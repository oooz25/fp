#include<stdio.h>

int main() {
    int pages[20], frame[3], time[3], n, i, j, fault=0, min, pos;

    printf("Enter number of pages: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&pages[i]);

    for(i=0;i<3;i++) {
        frame[i]=-1;
        time[i]=0;
    }

    for(i=0;i<n;i++) {
        int found=0;
        for(j=0;j<3;j++) {
            if(frame[j]==pages[i]) {
                found=1;
                time[j]=i;
            }
        }

        if(!found) {
            min=time[0], pos=0;
            for(j=1;j<3;j++)
                if(time[j]<min) {
                    min=time[j];
                    pos=j;
                }

            frame[pos]=pages[i];
            time[pos]=i;
            fault++;
        }
    }

    printf("Page Faults = %d", fault);
}
