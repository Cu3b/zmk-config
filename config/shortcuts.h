/*
*
* Copyright (c) 2022 Cu3b
* SPDX-License-Identifier: MIT
*
*/

#define CtlNBsp (LC(BSPC))        // Ctrl + Bspc, bspc word
#define CtlNDel (LC(DEL))         // Ctrl + Del, del word
#define TskView (LG(TAB))         // Task view
#define TaskMgr LC(LS(ESC))       // Task manager

#define ShwDstp (LG(D))           // Show desktop
#define ClsDstp (LG(LC(F4)))      // Close virtual desktop
#define NewDstp (LG(LC(D)))       // New virtual desktop
#define PrvDstp (LG(LC(LEFT)))    // Previous virtual desktop
#define NxtDstp (LG(LC(RIGHT)))    // Next virtual desktop

#define PrevTab (LC(PG_UP))       // Previous tab
#define NextTab (LC(PG_DN))       // Next tab
#define RestTab (LC(LS(T)))       // Restore tab
#define ClseTab (LC(W))           // Close tab

#define SC_Lock (LG(L))           // Lock windows
#define SC_Clse (LA(F4))          // Close window
#define SC_Snip (LG(LS(S)))       // Windows snipping tool

#define SC_Psth (LG(V))           // Paste with history
#define SC_Undo (LC(Z))           // Undo
#define SC_Cut  (LC(X))           // Cut
#define SC_Copy (LC(C))           // Copy
#define SC_Pste (LC(V))           // Paste
#define SC_SelA (LC(A))           // Select all
#define SC_Find (LC(F))           // Find
#define SC_Redo (LC(LS(Z)))       // Redo
#define SC_Save (LC(S))           // Save

#define FI_BRK  LC(PAUSE_BREAK)   // Break