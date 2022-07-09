/*
*
* Copyright (c) 2022 Cu3b
* SPDX-License-Identifier: MIT
*
*/

// Aliases for FI and SWE characters for corresponding KC-codes, windows environment.
// Letters:
#define FI_ARNG (LBRC)                   // Å
#define FI_ODIA (SEMI)                   // Ö
#define FI_ADIA (SQT)                    // Ä
// Symbols: 
#define FI_SECT (GRAVE)                  // §
#define FI_LABK (NON_US_BSLH)            // < (ISO)
#define FI_PLUS (MINUS)                  // +
#define FI_ACUT (EQUAL)                  // ´ (dead)
#define FI_QUOT (NON_US_HASH)            // ' (ISO)
#define FI_MINS (SLASH)                  // -
#define FI_DQUO (LS(N2))                 // "
#define FI_HASH (LS(N3))                 // #
#define FI_CURR (LS(N4))                 // ¤
#define FI_DIAE (RBRC)                   // ¨ (dead)
// Shifted symbols:
#define FI_HALF (LS(GRAVE))              // ½
#define FI_EXLM (LS(N1))                 // !
#define FI_PERC (LS(N5))                 // %
#define FI_AMPR (LS(N6))                 // &
#define FI_SLSH (LS(N7))                 // /
#define FI_LPRN (LS(N8))                 // (
#define FI_RPRN (LS(N9))                 // )
#define FI_EQL  (LS(N0))                 // =
#define FI_QUES (LS(MINUS))              // ?
#define FI_GRV  (LS(EQUAL))              // ` (dead)
#define FI_CIRC (LS(RBRC))               // ^ (dead)
#define FI_ASTR (LS(NON_US_HASH))        // *
#define FI_RABK (LS(NON_US_BSLH))        // >
#define FI_SCLN (LS(COMMA))              // ;
#define FI_COLN (LS(DOT))                // :
#define FI_UNDS (LS(SLASH))              // _
// AltGr symbols:
#define FI_AT   (RA(N2))                 // @
#define FI_PND  (RA(N3))                 // £
#define FI_DLR  (RA(N4))                 // $
#define FI_EURO (RA(N5))                 // €
#define FI_LCBR (RA(N7))                 // {
#define FI_LBRC (RA(N8))                 // [
#define FI_RBRC (RA(N9))                 // ]
#define FI_RCBR (RA(N0))                 // }
#define FI_BSLS (RA(MINUS))              // (backslash)
#define FI_TILD (RA(RBRC))               // ~ (dead)
#define FI_PIPE (RA(NON_US_BSLH))        // |
#define FI_MICR (RA(M))                  // µ
// Shortcuts:
#define FI_BRK  (LC(PAUSE_BREAK))        // break, ctrl + pause
#define NextTab (LC(PG_DN))              // Previous tab (win), ctrl + pgdn
#define PrevTab (LC(PG_UP))              // Previous tab (win), ctrl + pgup
#define RestTab (LC(LS(T)))              // Restore tab (Browser), ctrl + shift + T  toimiiko???
#define ClseTab (LC(W))                  // Close tab (Ctrl + W)
#define SC_Undo (LC(Z))
#define SC_Cut  (LC(X))
#define SC_Copy (LC(C))
#define SC_Pste (LC(V))
#define SC_SelA (LC(A))
#define SC_Find (LC(F))
#define SC_Rdo1 (LC(LS(Z)))
#define SC_Rdo2 (LC(Y))
#define SC_Save (LC(S))