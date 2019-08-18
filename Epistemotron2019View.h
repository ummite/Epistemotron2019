
// Epistemotron2019View.h : interface of the CEpistemotron2019View class
//

#pragma once


class CEpistemotron2019View : public CView
{
protected: // create from serialization only
	CEpistemotron2019View() noexcept;
	DECLARE_DYNCREATE(CEpistemotron2019View)

// Attributes
public:
	CEpistemotron2019Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CEpistemotron2019View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Epistemotron2019View.cpp
inline CEpistemotron2019Doc* CEpistemotron2019View::GetDocument() const
   { return reinterpret_cast<CEpistemotron2019Doc*>(m_pDocument); }
#endif

