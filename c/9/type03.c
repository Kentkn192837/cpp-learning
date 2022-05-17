#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data {
    char name[32];
    char tel[32];
} MyDataType, *lpMyDataType;

int menu();
void meibo_input(lpMyDataType);
void meibo_output(lpMyDataType);

int main(void)
{
    int selectno, loopend = 0;

    MyDataType mydata[10];
    lpMyDataType lpMydata = mydata;

    memset(mydata, '\0', sizeof(MyDataType[10]));

    while (1) {
        selectno = menu();

        switch (selectno) {
            case 1:
                meibo_input(lpMydata);
                break;
            case 2:
                meibo_output(lpMydata);
                break;
            default:
                loopend = 1;
                break;
        }
        if (loopend)
            break;
    }
    return 0;
}

int menu()
{
    char ret[8];

    printf("****** MENU ******\n");
    printf("1: データ入力\n");
    printf("2: データ表示\n");
    printf("3: 終了\n");
    printf("******************\n");
    printf("---->");
    fgets(ret, sizeof(ret), stdin);
    return atoi(ret);
}

void meibo_input(lpMyDataType lpData)
{
    char strno[8];
    int no;
    char name[32];
    char tel[32];
    
    printf("何番のデータを入力しますか(0-9)--");
    fgets(strno, sizeof(strno), stdin);
    if (strno[0] < '0' || strno[0] > '9') {
        printf("入力が不正です\n");
        return;
    }
    strno[1] = '\0';
    no = atoi(strno);

    printf("氏名--");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    strcpy(lpData->name, name);

    printf("電話番号--");
    fgets(tel, sizeof(tel), stdin);
    tel[strlen(tel) - 1] = '\0';
    strcpy(lpData->tel, tel);
}

void meibo_output(lpMyDataType lpData)
{
    char strno[8];
    int no;

    printf("何番のデータを読み出しますか(0-9)--");
    fgets(strno, sizeof(strno), stdin);
    if (strno[0] < '0' || strno[0] > '9') {
        printf("入力が不正です\n");
        return;
    }
    strno[1] = '\0';
    no = atoi(strno);

    if (strcmp(lpData->name, "") == 0) {
        printf("データがありません\n");
        return;
    }
    printf("氏名-- %s\n", lpData->name);
    printf("電話番号-- %s\n", lpData->tel);
}
