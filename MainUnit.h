//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Mask.hpp>

const hunthou = 100000;

//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
        TButton *ButtonMenos;
        TButton *ButtonMas;
        TButton *ButtonCE;
        TMemo *MemoDisplay1;
        TMemo *MemoDisplay2;
        TMemo *MemoDisplay3;
        TButton *Button1;
        void __fastcall ButtonMasClick(TObject *Sender);
        void __fastcall ButtonCEClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall ButtonMenosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormMain(TComponent* Owner);
};

class tnodo{
public:
  int info;
  tnodo *izq, *der;

  tnodo();
};

class tnumero{
private:
  tnodo *cabeza;

public:
  tnumero();
  static void insertarder(tnodo *, int );
  static void insertarizq(tnodo *, int );
  static void borrar(tnodo *, int&);
  void borrartodo(void);
  void asignarcabeza(tnodo *);
  void asignarvalor(AnsiString);
  void obtvalor(char *);
  void cambiarsigno(void);
  void recorrernodos(void);
  static int  compabs(tnumero *, tnumero *);
  static tnodo *addiff(tnumero *, tnumero *);
  static tnodo *addsame(tnumero *, tnumero *);
  static tnodo *addint(tnumero *, tnumero *);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
