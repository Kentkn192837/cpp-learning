#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
ATOM InitApp(HINSTANCE);
BOOL InitInstance(HINSTANCE, int);

TCHAR szClassName[] = TEXT("template");

int WINAPI WinMain(HINSTANCE hCurInst, HINSTANCE hPrevInst, LPSTR lpsCmdLine, int nCmdShow)
{
    MSG msg;
    BOOL bRet;

    if (!InitApp(hCurInst))
        return FALSE;
    if (!InitInstance(hCurInst, nCmdShow))
        return FALSE;
    
    while ((bRet = GetMessage(&msg, NULL, 0, 0)) != 0) {
        if (bRet == -1) {
            break;
        } else {
            TranslateMessage(&msg);     // メッセージを変換
            DispatchMessage(&msg);      // メッセージを送出
        }
    }

    return (int)msg.wParam;
}

// ウィンドウクラスの登録
ATOM InitApp(HINSTANCE hInst)
{
    WNDCLASSEX wc;
    wc.cbSize = sizeof(WNDCLASSEX);         // 構造体のサイズ
    wc.style = CS_HREDRAW | CS_VREDRAW;     // クラスのスタイル
    wc.lpfnWndProc = WndProc;               // プロシージャ名
    wc.cbClsExtra = 0;                      // 補助メモリ
    wc.cbWndExtra = 0;                      // 補助メモリ
    wc.hInstance = hInst;
    wc.hIcon = (HICON)LoadImage(            // アイコン
        NULL, MAKEINTRESOURCE(IDI_APPLICATION),
        IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_SHARED);
    wc.hCursor = (HCURSOR)LoadImage(
        NULL, MAKEINTRESOURCE(IDC_ARROW),   // カーソル
        IMAGE_CURSOR, 0, 0, LR_DEFAULTSIZE | LR_SHARED);
    wc.hbrBackground =                      // 背景ブラシ
        (HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszMenuName = NULL;                 // メニュー名
    wc.lpszClassName = szClassName;
    wc.hIconSm = (HICON)LoadImage(
        NULL, MAKEINTRESOURCE(IDI_APPLICATION),
        IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_SHARED
    );

    return (RegisterClassEx(&wc));
}

// ウィンドウの生成
BOOL InitInstance(HINSTANCE hInst, int nCmdShow)
{
    HWND hWnd;
    hWnd = CreateWindow(szClassName,
            TEXT("Windowサンプルテスト"),       // ウィンドウ名
            WS_OVERLAPPEDWINDOW,               // ウィンドウスタイル
            CW_USEDEFAULT,                     // x位置
            CW_USEDEFAULT,                     // y位置
            CW_USEDEFAULT,                     // ウィンドウ幅
            CW_USEDEFAULT,                     // ウィンドウ高さ
            NULL,
            NULL,
            hInst,
            NULL                               // ウィンドウ作成データ
    );

    if (!hWnd)
        return FALSE;
    ShowWindow(hWnd, nCmdShow);     // ウィンドウの表示状態を設定
    UpdateWindow(hWnd);             // ウィンドウを更新
    return TRUE;
}

// ウィンドウプロシージャ
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return (DefWindowProc(hWnd, msg, wp, lp));
    }
    return 0;
}
