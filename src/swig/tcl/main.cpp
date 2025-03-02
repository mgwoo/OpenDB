#include <tcl.h>

using namespace std;

extern "C" 
{
extern int Opendbtcl_Init(Tcl_Interp *interp);
}

int 
opendbTclAppInit(Tcl_Interp *interp) 
{
    if( Opendbtcl_Init(interp) == TCL_ERROR) {
        return TCL_ERROR; 
    }

    
    return TCL_OK;
}

int 
main(int argc, char *argv[]) 
{
    Tcl_Main(1, argv, opendbTclAppInit);
}