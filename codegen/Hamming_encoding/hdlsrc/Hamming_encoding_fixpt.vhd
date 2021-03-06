-- -------------------------------------------------------------
-- 
-- File Name: /home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/hdlsrc/Hamming_encoding_fixpt.vhd
-- Created: 2019-04-03 17:16:23
-- 
-- Generated by MATLAB 9.5, MATLAB Coder 4.1 and HDL Coder 3.13
-- 
-- 
-- 
-- -------------------------------------------------------------
-- Rate and Clocking Details
-- -------------------------------------------------------------
-- Design base rate: 1
-- 
-- -------------------------------------------------------------


-- -------------------------------------------------------------
-- 
-- Module: Hamming_encoding_fixpt
-- Source Path: Hamming_encoding_fixpt
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY Hamming_encoding_fixpt IS
  PORT( data                              :   IN    std_logic_vector(0 TO 7);  -- ufix1 [8]
        out_encoded                       :   OUT   std_logic_vector(0 TO 11)  -- ufix1 [12]
        );
END Hamming_encoding_fixpt;


ARCHITECTURE rtl OF Hamming_encoding_fixpt IS

BEGIN
  Hamming_encoding_fixpt_1_output : PROCESS (data)
    VARIABLE hammingCode : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_0 : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_1 : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_2 : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_3 : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_4 : std_logic_vector(0 TO 11);
    VARIABLE hammingcode_5 : std_logic_vector(0 TO 11);
    VARIABLE iA : unsigned(7 DOWNTO 0);
    VARIABLE ia_0 : unsigned(7 DOWNTO 0);
    VARIABLE ia_1 : unsigned(7 DOWNTO 0);
    VARIABLE ia_2 : unsigned(7 DOWNTO 0);
    VARIABLE add_cast : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_0 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_1 : unsigned(2 DOWNTO 0);
    VARIABLE add_cast_2 : unsigned(3 DOWNTO 0);
    VARIABLE add_cast_3 : unsigned(4 DOWNTO 0);
    VARIABLE ia_3 : unsigned(7 DOWNTO 0);
    VARIABLE cast : signed(8 DOWNTO 0);
    VARIABLE mul_temp : signed(40 DOWNTO 0);
    VARIABLE sub_cast : signed(31 DOWNTO 0);
    VARIABLE sub_cast_0 : unsigned(7 DOWNTO 0);
    VARIABLE sub_temp : unsigned(7 DOWNTO 0);
    VARIABLE add_cast_4 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_5 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_6 : unsigned(2 DOWNTO 0);
    VARIABLE add_cast_7 : unsigned(3 DOWNTO 0);
    VARIABLE add_cast_8 : unsigned(4 DOWNTO 0);
    VARIABLE ia_4 : unsigned(7 DOWNTO 0);
    VARIABLE cast_0 : signed(8 DOWNTO 0);
    VARIABLE mul_temp_0 : signed(40 DOWNTO 0);
    VARIABLE sub_cast_1 : signed(31 DOWNTO 0);
    VARIABLE sub_cast_2 : unsigned(7 DOWNTO 0);
    VARIABLE sub_temp_0 : unsigned(7 DOWNTO 0);
    VARIABLE add_cast_9 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_10 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_11 : unsigned(2 DOWNTO 0);
    VARIABLE add_cast_12 : unsigned(3 DOWNTO 0);
    VARIABLE ia_5 : unsigned(7 DOWNTO 0);
    VARIABLE cast_1 : signed(8 DOWNTO 0);
    VARIABLE mul_temp_1 : signed(40 DOWNTO 0);
    VARIABLE sub_cast_3 : signed(31 DOWNTO 0);
    VARIABLE sub_cast_4 : unsigned(7 DOWNTO 0);
    VARIABLE sub_temp_1 : unsigned(7 DOWNTO 0);
    VARIABLE add_cast_13 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_14 : unsigned(1 DOWNTO 0);
    VARIABLE add_cast_15 : unsigned(2 DOWNTO 0);
    VARIABLE add_cast_16 : unsigned(3 DOWNTO 0);
    VARIABLE ia_6 : unsigned(7 DOWNTO 0);
    VARIABLE cast_2 : signed(8 DOWNTO 0);
    VARIABLE mul_temp_2 : signed(40 DOWNTO 0);
    VARIABLE sub_cast_5 : signed(31 DOWNTO 0);
    VARIABLE sub_cast_6 : unsigned(7 DOWNTO 0);
    VARIABLE sub_temp_2 : unsigned(7 DOWNTO 0);
  BEGIN
    --HDL code generation from MATLAB function: Hamming_encoding_fixpt
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    --                                                                          %
    --           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
    --                                                                          %
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    -- this data is setup as Little endian (MSB on right side)  This method
    -- encodes the input data bit stream (8 bits) into a 12 bit stream.  This
    -- method can be turned into combinational logic pretty easily which makes
    -- this method fast and simple.
    -- 
    -- The output data has the hamming codes embedded in the datastream. Which
    -- means the Hamming bits are at bit position (base1, because matlab) 1 2 4 8
    hammingCode := (OTHERS => '0');
    hammingCode(2) := data(0);
    hammingCode(4) := data(1);
    hammingcode_0 := hammingCode;
    hammingcode_0(5) := data(2);
    hammingcode_1 := hammingcode_0;
    hammingcode_1(6) := data(3);
    hammingcode_2 := hammingcode_1;
    hammingcode_2(8) := data(4);
    hammingcode_3 := hammingcode_2;
    hammingcode_3(9) := data(5);
    hammingcode_4 := hammingcode_3;
    hammingcode_4(10) := data(6);
    hammingcode_5 := hammingcode_4;
    hammingcode_5(11) := data(7);
    --first hamming code Parity bit
    add_cast := '0' & data(0);
    add_cast_0 := '0' & data(1);
    add_cast_1 := '0' & '0' & data(3);
    add_cast_2 := '0' & '0' & '0' & data(4);
    add_cast_3 := '0' & '0' & '0' & '0' & data(6);
    iA := resize(resize(resize(resize(add_cast + add_cast_0, 3) + add_cast_1, 4) + add_cast_2, 5) + add_cast_3, 8);
    out_encoded <= hammingcode_5;
    ia_3 := iA srl 1;
    cast := signed(resize(ia_3, 9));
    -- CSD Encoding (2) : 10; Cost (Adders) = 0
    mul_temp := resize(cast & '0', 41);
    sub_cast := mul_temp(31 DOWNTO 0);
    sub_cast_0 := unsigned(sub_cast(7 DOWNTO 0));
    sub_temp := iA - sub_cast_0;
    out_encoded(0) <= sub_temp(0);
    --second hamming code Parity bit 
    add_cast_4 := '0' & hammingcode_0(2);
    add_cast_5 := '0' & data(2);
    add_cast_6 := '0' & '0' & data(3);
    add_cast_7 := '0' & '0' & '0' & data(5);
    add_cast_8 := '0' & '0' & '0' & '0' & data(6);
    ia_0 := resize(resize(resize(resize(add_cast_4 + add_cast_5, 3) + add_cast_6, 4) + add_cast_7, 5) + add_cast_8, 8);
    ia_4 := ia_0 srl 1;
    cast_0 := signed(resize(ia_4, 9));
    -- CSD Encoding (2) : 10; Cost (Adders) = 0
    mul_temp_0 := resize(cast_0 & '0', 41);
    sub_cast_1 := mul_temp_0(31 DOWNTO 0);
    sub_cast_2 := unsigned(sub_cast_1(7 DOWNTO 0));
    sub_temp_0 := ia_0 - sub_cast_2;
    out_encoded(1) <= sub_temp_0(0);
    --third hamming code Parity bit
    add_cast_9 := '0' & hammingcode_1(4);
    add_cast_10 := '0' & hammingcode_1(5);
    add_cast_11 := '0' & '0' & data(3);
    add_cast_12 := '0' & '0' & '0' & data(7);
    ia_1 := resize(resize(resize(add_cast_9 + add_cast_10, 3) + add_cast_11, 4) + add_cast_12, 8);
    ia_5 := ia_1 srl 1;
    cast_1 := signed(resize(ia_5, 9));
    -- CSD Encoding (2) : 10; Cost (Adders) = 0
    mul_temp_1 := resize(cast_1 & '0', 41);
    sub_cast_3 := mul_temp_1(31 DOWNTO 0);
    sub_cast_4 := unsigned(sub_cast_3(7 DOWNTO 0));
    sub_temp_1 := ia_1 - sub_cast_4;
    out_encoded(3) <= sub_temp_1(0);
    --fourth hamming code Parity bit
    add_cast_13 := '0' & data(4);
    add_cast_14 := '0' & data(5);
    add_cast_15 := '0' & '0' & data(6);
    add_cast_16 := '0' & '0' & '0' & data(7);
    ia_2 := resize(resize(resize(add_cast_13 + add_cast_14, 3) + add_cast_15, 4) + add_cast_16, 8);
    ia_6 := ia_2 srl 1;
    cast_2 := signed(resize(ia_6, 9));
    -- CSD Encoding (2) : 10; Cost (Adders) = 0
    mul_temp_2 := resize(cast_2 & '0', 41);
    sub_cast_5 := mul_temp_2(31 DOWNTO 0);
    sub_cast_6 := unsigned(sub_cast_5(7 DOWNTO 0));
    sub_temp_2 := ia_2 - sub_cast_6;
    out_encoded(7) <= sub_temp_2(0);
  END PROCESS Hamming_encoding_fixpt_1_output;


END rtl;

