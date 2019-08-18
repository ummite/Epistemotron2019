
// Epistemotron2019View.cpp : implementation of the CEpistemotron2019View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Epistemotron2019.h"
#endif

#include "Epistemotron2019Doc.h"
#include "Epistemotron2019View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEpistemotron2019View

IMPLEMENT_DYNCREATE(CEpistemotron2019View, CView)

BEGIN_MESSAGE_MAP(CEpistemotron2019View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CEpistemotron2019View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CEpistemotron2019View construction/destruction

CEpistemotron2019View::CEpistemotron2019View() noexcept
{
	// TODO: add construction code here

}

CEpistemotron2019View::~CEpistemotron2019View()
{
}

BOOL CEpistemotron2019View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CEpistemotron2019View drawing

void CEpistemotron2019View::OnDraw(CDC* /*pDC*/)
{
	CEpistemotron2019Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CEpistemotron2019View printing


void CEpistemotron2019View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CEpistemotron2019View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEpistemotron2019View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEpistemotron2019View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CEpistemotron2019View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CEpistemotron2019View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CEpistemotron2019View diagnostics

#ifdef _DEBUG
void CEpistemotron2019View::AssertValid() const
{
	CView::AssertValid();
}

void CEpistemotron2019View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEpistemotron2019Doc* CEpistemotron2019View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEpistemotron2019Doc)));
	return (CEpistemotron2019Doc*)m_pDocument;
}
#endif //_DEBUG


// CEpistemotron2019View message handlers
