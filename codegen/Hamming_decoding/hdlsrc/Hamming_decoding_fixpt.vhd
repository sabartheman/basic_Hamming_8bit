-- -------------------------------------------------------------
-- 
-- File Name: /home/sky/Documents/MATLAB/Hamming/codegen/Hamming_decoding/hdlsrc/Hamming_decoding_fixpt.vhd
-- Created: 2019-03-29 14:32:43
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
-- Module: Hamming_decoding_fixpt
-- Source Path: Hamming_decoding_fixpt
-- Hierarchy Level: 0
-- 
-- -------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;
USE work.Hamming_decoding_fixpt_pkg.ALL;

ENTITY Hamming_decoding_fixpt IS
  PORT( input_encoded                     :   IN    std_logic_vector(0 TO 11);  -- ufix1 [12]
        output                            :   OUT   std_logic_vector(0 TO 11);  -- ufix1 [12]
        errorPosition                     :   OUT   std_logic  -- ufix1
        );
END Hamming_decoding_fixpt;


ARCHITECTURE rtl OF Hamming_decoding_fixpt IS

  -- Functions
  -- HDLCODER_TO_STDLOGIC 
  FUNCTION hdlcoder_to_stdlogic(arg: boolean) RETURN std_logic IS
  BEGIN
    IF arg THEN
      RETURN '1';
    ELSE
      RETURN '0';
    END IF;
  END FUNCTION;


BEGIN
  Hamming_decoding_fixpt_1_output : PROCESS (input_encoded)
    VARIABLE parityErrors : std_logic_vector(0 TO 3);
    VARIABLE errorBit : std_logic;
    VARIABLE add_temp : vector_of_signed32(0 TO 3);
    VARIABLE sub_cast : vector_of_unsigned3(0 TO 3);
    VARIABLE sub_cast_0 : vector_of_signed32(0 TO 3);
    VARIABLE sub_cast_1 : signed(31 DOWNTO 0);
    VARIABLE sub_cast_2 : signed(31 DOWNTO 0);
    VARIABLE t_0 : BOOLEAN;
  BEGIN
    --HDL code generation from MATLAB function: Hamming_decoding_fixpt
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    --                                                                          %
    --           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
    --                                                                          %
    --%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    --intializing vector for possible error positions
    parityErrors := (OTHERS => '0');
    --sets the first parity bit, if the sum of the checked values is even then
    --the result is 0, odd = 1
    IF input_encoded(0) /= ((((input_encoded(2) XOR input_encoded(4)) XOR input_encoded(6)) XOR input_encoded(8)) XOR input_encoded(10)) THEN 
      parityErrors(0) := '1';
    END IF;
    --sets the second parity bit
    IF input_encoded(1) /= ((((input_encoded(2) XOR input_encoded(5)) XOR input_encoded(6)) XOR input_encoded(9)) XOR input_encoded(10)) THEN 
      parityErrors(1) := '0';
    END IF;
    --sets the third parity bit
    IF input_encoded(3) /= (((input_encoded(4) XOR input_encoded(5)) XOR input_encoded(6)) XOR input_encoded(11)) THEN 
      parityErrors(2) := '0';
    END IF;
    --sets the fourth paritybit
    IF input_encoded(7) /= (((input_encoded(8) XOR input_encoded(9)) XOR input_encoded(10)) XOR input_encoded(11)) THEN 
      parityErrors(3) := '0';
    END IF;
    --finding how paritybits are wrong + 1
    errorBit := '0';

    FOR x IN 0 TO 3 LOOP
      add_temp(x) := to_signed(x + 1, 32);
      sub_cast(x) := unsigned(add_temp(x)(2 DOWNTO 0));
      sub_cast_0(x) := signed(resize(sub_cast(x), 32));
      errorBit := errorBit XOR parityErrors(to_integer(sub_cast_0(x) - 1));
    END LOOP;

    --corrects the 1 bit flip in the hamming code
    IF errorBit > '0' THEN 
      output <= input_encoded;
      sub_cast_1 := '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & errorBit;
      sub_cast_2 := '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & '0' & errorBit;
      t_0 :=  NOT (input_encoded(to_integer(sub_cast_2 - 1)) /= '0');
      output(to_integer(sub_cast_1 - 1)) <= hdlcoder_to_stdlogic(t_0);
    ELSE 
      output <= input_encoded;
    END IF;
    errorPosition <= errorBit;
  END PROCESS Hamming_decoding_fixpt_1_output;


END rtl;
