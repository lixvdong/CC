#include <stdio.h>
char arr[1024];
int index=0;
int main(){

    printf("进入敏感字符管理系统\n");
    
    while(1){
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符\n");
        printf("3---显示敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");

        printf("请输入相应的功能编号\n");

        char code;
        scanf("%d",&code);

        
        if (code==1) {
                printf("请输入要添加的敏感字符\n");
                char m;
                scanf("%c",&m);
                scanf("%c",&m);
                arr[index]=m;
                index++;
                printf("添加成功，点击回车继续\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
        }
        if (code==2) {
            
            if (index==0) {
                printf("删除失败，点击回车继续\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else{
                index--;
                printf("删除成功，点击回车继续\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
        if (code==3) {
            
        }
        if (code==4) {
            
        }
        if (code==5) {
            
        }
        
    }
    

    return 0;

}