/*
*
* Copyright (c) 2022 Cu3b
* SPDX-License-Identifier: MIT
*
*/

// Combo map in kyria.keymap

/ {
    combos {
        compatible = "zmk,combos";
		// combos left 
		// row1
        combo_circ {
            timeout-ms = <40>;           // ^
            key-positions = <2 13>;
            bindings = <&kp F_CIRC>;
        };
        combo_tild {
            timeout-ms = <40>;           // ~
            key-positions = <13 26>;
            bindings = <&kp F_TILD>;
        };
        combo_mins {
            timeout-ms = <40>;           // -
            key-positions = <3 14>;
            bindings = <&kp F_MINS>;
        };
        combo_plus {
            timeout-ms = <40>;           // + 
            key-positions = <2 3>;
            bindings = <&kp F_PLUS>;
        };
        combo_astr {
            timeout-ms = <40>;           // *
            key-positions = <3 4>;
            bindings = <&kp F_ASTR>;
        };
        combo_fslh {
            timeout-ms = <40>;           // /
            key-positions = <4 15>;
            bindings = <&kp F_FSLH>;
        };
        combo_unds {
            timeout-ms = <40>;           // _
            key-positions = <2 15>;
            bindings = <&kp F_UNDS>;
        };
        combo_eql {
            timeout-ms = <40>;           // =
            key-positions = <3 16>;
            bindings = <&kp F_EQL>;
        };
        combo_BSLH {
            timeout-ms = <40>;           // Backslash
            key-positions = <7 20>;
            bindings = <&kp F_BSLH>;
        };
		
        combo_mycomp {
            timeout-ms= <40>;           // Open "This PC"
            key-positions = <16 17>;
            bindings = <&kp C_AL_MY_COMPUTER >;
        };
        combo_calc{
            timeout-ms = <40>;           // Open calculator
            key-positions = <28 29>;
            bindings = <&kp C_AL_CALC>;
        };
        combo_del {
            timeout-ms = <40>;
            key-positions = <14 15>;
            bindings = <&kp DEL>;
        };
        combo_esc {
            timeout-ms = <40>;
            key-positions = <15 16>;
            bindings = <&kp ESC>;
        };
        combo_LPRN {
            timeout-ms = <40>;           // (
            key-positions = <15 28>;
            bindings = <&kp F_LPRN>;
        };
        combo_LBKT {
            timeout-ms = <40>;           // [
            key-positions = <14 27>;
            bindings = <&kp F_LBKT>;
        };
        combo_LBRC {
            timeout-ms = <40>;           // {
            key-positions = <16 27>;
            bindings = <&kp F_LBRC>;
        };
        combo_LABK {
            timeout-ms = <40>;           // <
            key-positions = <15 26>;
            bindings = <&kp F_LABK>;
        };

        combo_RPRN {
            timeout-ms = <40>;           // )
            key-positions = <20 35>;
            bindings = <&kp F_RPRN>;
        };
        combo_RBKT {
            timeout-ms = <40>;           // ]
            key-positions = <21 36>;
            bindings = <&kp F_RBKT>;
        };
        combo_RBRC {
            timeout-ms = <40>;           // }
            key-positions = <19 36>;
            bindings = <&kp F_RBRC>;
        };
        combo_RABK {
            timeout-ms = <40>;           // >
            key-positions = <20 37>;
            bindings = <&kp F_RABK>;
        };

        combo_tab {
            timeout-ms = <40>;           // Tab
            key-positions = <13 14>;
            bindings = <&kp TAB>;
        };
        combo_scln {
            timeout-ms = <40>;           // ;
            key-positions = <26 27>;
            bindings = <&kp F_SCLN>;
        };
        combo_closewndw {
            timeout-ms = <40>;           // Alt+F4
            key-positions = <1 2>;
            bindings = <&kp SC_Clse>;
        };
        combo_exlm {
            timeout-ms = <40>;           // !
            key-positions = <27 28>;
            bindings = <&kp F_EXLM>;
        };

        combo_ques {
            timeout-ms = <40>;           // ?
            key-positions = <35 36>;
            bindings = <&kp F_QUES>;
        };

         combo_capsword {
            timeout-ms = <40>;           // &CapsWord
            key-positions = <9 22>;
            bindings = <&caps_word>;
        };
		// row2
        combo_arng {
            timeout-ms = <40>;           // Å
            key-positions = <21 22>;
            bindings = <&kp F_ARNG>;
        };
        combo_quote {
            timeout-ms = <40>;           // '
            key-positions = <20 21>;
            bindings = <&kp F_QUOT>;
        };
        combo_dquo {
            timeout-ms = <40>;           // "
            key-positions = <19 20>;
            bindings = <&kp F_DQUO>;
        };
        combo_coln {
            timeout-ms = <40>;           // :
            key-positions = <36 37>;
            bindings = <&kp F_COLN>;
        };
        combo_winlock {
            timeout-ms = <50>;           // LGUI+L
            key-positions = <31 44>;
            bindings = <&kp SC_Lock>;
        };

        combo_numpad{
            timeout-ms = <50>;           // Toggle numpad
            key-positions = <32 45>;
            bindings = <&tog PAD1>;
        };
        combo_bt{
            timeout-ms = <50>;           // BT layer, hold
            key-positions = <33 46>;
            bindings = <&mo BT>;
        };
    };
};