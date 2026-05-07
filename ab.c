#include<stdio.h>
#include<string.h>

struct contact {
    char name[20];
    char phone[15];
} c[10];

int n=0;

int main() {
    int ch,i,pos;

    while(1) {
        printf("\n1.Insert\n2.View\n3.Delete\n4.Exit\n");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                printf("Enter name and phone: ");
                scanf("%s %s", c[n].name, c[n].phone);
                n++;
                break;

            case 2:
                for(i=0;i<n;i++)
                    printf("%s %s\n", c[i].name, c[i].phone);
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++)
                    c[i]=c[i+1];
                n--;
                break;

            case 4:
                return 0;
        }
    }
}
