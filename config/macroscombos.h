/*
*
* Copyright (c) 2022 Cu3b
* SPDX-License-Identifier: MIT
*
*/

/* Combos
 * .----------------------------------.                .----------------------------------.  .----------------------------------. .----------------------------------.
 * |   0  |   1  |   2  |  3   |   4  |                |  5   |   6  |   7  |   8  |   9  |  |   0  |   1  |   2  |  3   |   4  | |  5   |   6  |   7  |   8  |   9  |
 * |   ↓AltF4 ↓  -  ↓   +  ↓   |      |                |      |  ↓---"--↓--'--↓---Å---↓   |  |      |      |      |      |      | |      |  ↓----Windows lock-----↓  |
 * |      |     /   /  /   /   |      |                |      |      |   \   \     |      |  |      |      |      |      |      | |      |      |      |      |      |
 * |------+----/ / /--/ * /----|------|                |------+------+----\ \ \----+------|  |------+------+------+------+------| |------+------+------+------+------|
 * |      |   /   /  /   / 14  |  15  |                |  16  |  17  |  18 \   \   |  20  |  |  11  |  12  |  13  |  14  |  15  | |  16  |  17  |  18  |  19  |  20  |
 * |  11  |  12  |  13  |  ↓MyComp↓   |                |      |      |      |  19  |      |  |      |  ↓-Numpad toggle-↓ |      | |      |  ↓----Windows sleep----↓  |
 * |      |  \   \  \   \      |      |                |      |     /   /  /   /   |      |  |  ↓---------BASE---------↓ |      | |      |      |      |      |      |
 * |------+---\ [ \--\ ( \ ----+------|                |------+----/ ) /--/ ] /----+------|  |------+------+------+------+------| |------+------+------+------+------|
 * |      |    \   \  \   \    |      |                |      |   /   /  /   /     |      |  |  ↓---Windows restart---↓  |      | |      |  ↓--Windows Power off--↓  |
 * |      |  ↓-esc-↓--tab--↓-Calc-↓   |                |      |      |   ↓CpsWrd↓  |      |  |      |      |      |      |      | |      |      |      |      |      |
 * |  21  |  22  |  23  |  24  |  25  |                |  26  |  27  |  28  |  29  |  30  |  |  21  |  22  |  23  |  24  |  25  | |  26  |  27  |  28  |  29  |  30  |
 * '-------------+------+------+------+------.  .------+------+---------------------------'  '------+---------------------------' '------+---------------------------'
 *                             |  31  |  32  |  |  33  |  34  | 
 *                             |      |      |  |      |      |
 *                             '-------------'  '-------------' 
 * .----------------------------------.                .----------------------------------.
 * |   0  |   1  |   2  |  3   |   4  |                |  5   |   6  |   7  |   8  |   9  |
 * |      |      |      |      |      |                |      |      |      |      |      |
 * |      |   \   \   \   \    |      |                |      |      |      |      |      |
 * |------+----\ _ \---\ = \---+------|                |------+------+------+------+------|
 * |  11  |     \   \   \   \  |  15  |                |  16  |  17  |  18  |  19  |  20  |
 * |      |  12  |  13  |  14  |      |                |      |      |      |      |      |
 * |      |     /   /  /   /   |      |                |      |   \   \  \   \     |      |
 * |------+----/ < /--/ { /----+------+                |------+----\ } \--\ > \----+------|
 * |      |   /   /  /   /     |      |                |      |     \   \  \   \   |      |
 * |      |      |      |      |      |                |      |      |      |      |      |
 * |  21  |  22  |  23  |  24  |  25  |                |  26  |  27  |  28  |  29  |  30  |
 * '--------------------+------+------+------.  .------+------+------+------+------+------'
 *                             |  41  |  42  |  |  45  |  46  |
 *                             |      |      |  |      |      |
 *                             '-------------'  '-------------' */
// Macros:

/ { combos { compatible = "zmk,combos";
        combo_MINS { timeout-ms = <40>; key-positions = <1 2>; bindings = <&kp F_MINS>; };               // -
        combo_PLUS { timeout-ms = <40>; key-positions = <2 3>; bindings = <&kp F_PLUS>; };               // + 
        combo_ASTR { timeout-ms = <40>; key-positions = <3 13>; bindings = <&kp F_ASTR>; };              // *
        combo_FSLH { timeout-ms = <40>; key-positions = <2 12>; bindings = <&kp F_FSLH>; };              // / 
        combo_UNDS { timeout-ms = <40>; key-positions = <1 13>; bindings = <&kp F_UNDS>; };              // _
        combo_EQL { timeout-ms = <40>; key-positions = <2 14>; bindings = <&kp F_EQL>; };                // =
        combo_BSLH { timeout-ms = <40>; key-positions = <7 19>; bindings = <&kp F_BSLH>; };              // Backslash	
        combo_LPRN { timeout-ms = <40>; key-positions = <13 24>; bindings = <&kp F_LPRN>; };             // (
        combo_LBKT { timeout-ms = <40>; key-positions = <12 23>; bindings = <&kp F_LBKT>; };             // [
        combo_LBRC { timeout-ms = <40>; key-positions = <14 23>; bindings = <&kp F_LBRC>; };             // {
        combo_LABK { timeout-ms = <40>; key-positions = <13 22>; bindings = <&kp F_LABK>; };             // <
        combo_RPRN { timeout-ms = <40>; key-positions = <18 27>; bindings = <&kp F_RPRN>; };             // )
        combo_RBKT { timeout-ms = <40>; key-positions = <19 28>; bindings = <&kp F_RBKT>; };             // ]
        combo_RBRC { timeout-ms = <40>; key-positions = <17 28>; bindings = <&kp F_RBRC>; };             // }
        combo_RABK { timeout-ms = <40>; key-positions = <18 29>; bindings = <&kp F_RABK>; };             // >
//
        combo_ARNG { timeout-ms = <40>; key-positions = <8 9>; bindings = <&kp F_ARNG>; };               // Å
        combo_QUOTE { timeout-ms = <40>; key-positions = <7 8>; bindings = <&kp F_QUOT>; };              // '
        combo_DQUOTE { timeout-ms = <40>; key-positions = <6 7>; bindings = <&kp F_DQUO>; };             // "
//
        combo_TAB { timeout-ms = <40>; key-positions = <23 24>; bindings = <&kp TAB>; };                 // TAB
        combo_ENT { timeout-ms = <40>; key-positions = <22 23>; bindings = <&kp RET>; };                 // Enter
        combo_ESC { timeout-ms = <40>; key-positions = <31 44>; bindings = <&kp ESC>; };                 // Esc		
//
        combo_clswin { timeout-ms = <40>; key-positions = <0 1>; bindings = <&kp SC_Clse>; };            // Alt+F4
        combo_cpswrd { timeout-ms = <40>; key-positions = <28 29>; bindings = <&caps_word>; };           // &CapsWord
        combo_mycomp { timeout-ms= <40>; key-positions = <14 15>; bindings = <&kp C_AL_MY_COMPUTER>; };  // Open "This PC"
        combo_calc { timeout-ms = <40>; key-positions = <24 25>; bindings = <&kp C_AL_CALC>; };          // Open calculator
		combo_snip { timeout-ms = <40>; key-positions = <3 4>; bindings = <&kp SC_Snip>; };              // windows snipping tool
//
        combo_WinLock { timeout-ms = <80>; key-positions = <6 7 8 9>; bindings = <&kp SC_Lock>; };       // Lock windows
        combo_sleep { timeout-ms = <80>; key-positions = <17 18 19 20>; bindings = <&win_sleep>; };      // windows sleep
        combo_rst { timeout-ms = <80>; key-positions = <21 22 23 24>; bindings = <&win_rst>; };          // windows restart
        combo_power { timeout-ms = <80>; key-positions = <27 28 29 30>; bindings = <&win_pwr>; };        // windows power off
        combo_base { timeout-ms = <80>; key-positions = <11 12 13 14>; bindings = <&to BASE>; };         // base layer
//
        combo_NPAD { timeout-ms = <55>; key-positions = <35 36 37 38>; bindings = <&tog ARR>; };         // toggle arrow and numpad layer
    };
};

&lt { flavor = "tap-preferred"; tapping-term-ms = <TAPPING_TERM>; quick-tap-ms = <QUICK_TAP>; };
&mt { flavor = "tap-preferred"; tapping-term-ms = <TAPPING_TERM>; quick-tap-ms = <QUICK_TAP>; };
// &sk { release-after-ms = <TAPPING_TERM>; quick-release; /delete-property/ ignore-modifiers; };

/ { behaviors { ht: hold_tap { label = "hold_tap";
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <TAPPING_TERM>;
            quick-tap-ms = <QUICK_TAP>;
            global-quick-tap;
            bindings = <&kp>, <&kp>;
        };
    };