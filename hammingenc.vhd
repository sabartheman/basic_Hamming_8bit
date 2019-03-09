library IEEE;
use ieee.std_logic_1164.all;

entity hammingenc is
  port(
        clk         :in   std_logic;
        reset       :in   std_logic;
        inputData   :in   std_logic_vector(7 downto 0);
        outputCode  :out  std_logic_vector(16 downto 0)
        validData   :out  std_logic
        );
end entity;

architecture Behavioral of hammingenc is

    --components

    --signals
    signal validSig,clkSig        :std_logic;
    signal dataSig         :std_logic_vector(7 downto 0);
    signal outputSig,validData       :std_logic_vector(16 downto 0);
    signal binary_add       :std_logic_vector(7 downto 0);

    signal firstBitAdd,secondBitAdd,thirdBitAdd,FourthBitAdd    : std_logic_vector(7 downto 0);

    --linking signals to actual ports
    dataSig <= inputData;
    outputCode <= outputSig;


    begin


        --making sure that the signal always observse the reset condition
        CLKEDGE :  process(clkSig,reset)
        begin
            if(reset = '1') then
                outputSig <= "0000000000000000";
                validSig <= '0';
            end if;

            if(rising_edge(clkSig) and reset = '0') then

                --only using the LSB to determine if odd or even. this is how to encode
                outputsig(0) <= firstBitAdd(7);
                outputsig(1) <= secondBitAdd(7);
                outputSig(3) <= thirdBitAdd(7);
                outputSig(7) <= FourthBitAdd(7);


                outputSig(2) <= dataSig(0);
                outputSig(4) <= dataSig(1);
                outputSig(5) <= dataSig(2);
                outputSig(6) <= dataSig(3);
                outputSig(8) <= dataSig(4);
                outputSig(9) <= dataSig(5);
                outputSig(10) <= dataSig(6);
                outputSig(11) <= dataSig(7);
            end if;
        end process;



        --have these processes only change values on the trigger
        PARITYBITGEN   :   process(clkSig)
        begin
            if(rising_edge(clkSig)) then
                firstBitAdd <= dataSig(0) + dataSig(1) + dataSig(3) + dataSig(4) + dataSig(6);
                secondBitAdd <= dataSig(0) + dataSig(2) + dataSig(3) + dataSig(5) + dataSig(6);
                thirdBitAdd <= dataSig(1) + dataSig(2) + dataSig(3) + dataSig(7);
                FourthBitAdd <= dataSig(4) + dataSig(5) + dataSig(6) + dataSig(7);

            end if;
        end process;

--        SECONDBIT   : process(clkSig)
--        begin
--            if(rising_edge(clkSig)) then
--                secondBitAdd <= dataSig(0) + dataSig(2) + dataSig(3) + dataSig(5) + dataSig(6);
--            end if;
--        end process;
--
--        THIRDBIT    : process(clksig)
--        begin
--            if(rising_edge(clkSig)) then
--                thirdBitAdd <= dataSig(1) + dataSig(2) + dataSig(3) + dataSig(7);
--            end if;
--        end process;
--
--        FourthBitAdd    : process(clkSig)
--        begin
--            if(rising_edge(clkSig)) then
--                FourthBitAdd <= dataSig(4) + dataSig(5) + dataSig(6) + dataSig(7);
--            end if;
--        end process;





end architecture;
