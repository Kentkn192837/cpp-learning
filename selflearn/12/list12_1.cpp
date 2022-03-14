// 動的配列に対して要素の挿入・削除を行う
int main()
{
    int size = 1000;        // 要素数
    int *darray = new int[size];

    int new_size = 500;
    {
        int *tmp = new int[new_size];
        int copy_size = (size < new_size) ? size : new_size;
        for (int i = 0; i < copy_size; i++) {
            tmp[i] = darray[i];
        }
        delete[] darray;    // 旧領域を破棄
        darray = tmp;       // 新領域に差し替え
        size = new_size;    // 要素数を変更
    }
    delete[] darray;
}
