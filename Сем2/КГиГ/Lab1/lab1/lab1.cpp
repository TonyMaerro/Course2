﻿
// lab1.cpp: определяет поведение классов для приложения.
//

#include "pch.h"
#include "framework.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "lab1.h"
#include "MainFrm.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Clab1App

BEGIN_MESSAGE_MAP(Clab1App, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &Clab1App::OnAppAbout)
END_MESSAGE_MAP()


// Создание Clab1App

Clab1App::Clab1App() noexcept
{

	// поддержка диспетчера перезагрузки
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
#ifdef _MANAGED
	// Если приложение построено с поддержкой среды Common Language Runtime (/clr):
	//     1) Этот дополнительный параметр требуется для правильной поддержки работы диспетчера перезагрузки.
	//   2) В своем проекте для сборки необходимо добавить ссылку на System.Windows.Forms.
	System::Windows::Forms::Application::SetUnhandledExceptionMode(System::Windows::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: замените ниже строку идентификатора приложения строкой уникального идентификатора; рекомендуемый
	// формат для строки: ИмяКомпании.ИмяПродукта.СубПродукт.СведенияОВерсии
	SetAppID(_T("lab1.AppID.NoVersion"));

	// TODO: добавьте код создания,
	// Размещает весь важный код инициализации в InitInstance
}

// Единственный объект Clab1App

Clab1App theApp;


// Инициализация Clab1App

BOOL Clab1App::InitInstance()
{
	// InitCommonControlsEx() требуются для Windows XP, если манифест
	// приложения использует ComCtl32.dll версии 6 или более поздней версии для включения
	// стилей отображения.  В противном случае будет возникать сбой при создании любого окна.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Выберите этот параметр для включения всех общих классов управления, которые необходимо использовать
	// в вашем приложении.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	// Инициализация библиотек OLE
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();

	EnableTaskbarInteraction(FALSE);

	// Для использования элемента управления RichEdit требуется метод AfxInitRichEdit2()
	// AfxInitRichEdit2();

	// Стандартная инициализация
	// Если эти возможности не используются и необходимо уменьшить размер
	// конечного исполняемого файла, необходимо удалить из следующего
	// конкретные процедуры инициализации, которые не требуются
	// Измените раздел реестра, в котором хранятся параметры
	// TODO: следует изменить эту строку на что-нибудь подходящее,
	// например на название организации
	SetRegistryKey(_T("Локальные приложения, созданные с помощью мастера приложений"));


	// Чтобы создать главное окно, этот код создает новый объект окна
	// рамки, а затем задает его как объект основного окна приложения
	CFrameWnd* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// создайте и загрузите рамку с его ресурсами
	pFrame->LoadFrame(IDR_MAINFRAME,
		WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, nullptr,
		nullptr);


	// Разрешить использование расширенных символов в горячих клавишах меню
	CMFCToolBar::m_bExtCharTranslation = TRUE;




	// Одно и только одно окно было инициализировано, поэтому отобразите и обновите его
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}

int Clab1App::ExitInstance()
{
	//TODO: обработайте дополнительные ресурсы, которые могли быть добавлены
	AfxOleTerm(FALSE);

	return CWinApp::ExitInstance();
}

// Обработчики сообщений Clab1App


// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg() noexcept;

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMenu();
};

CAboutDlg::CAboutDlg() noexcept : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_COMMAND(25, &CAboutDlg::OnMenu)
END_MESSAGE_MAP()

// Команда приложения для запуска диалога
void Clab1App::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// Обработчики сообщений Clab1App





void CAboutDlg::OnMenu()
{
	// TODO: добавьте свой код обработчика команд
}
