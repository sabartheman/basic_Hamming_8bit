% this data is setup as Little endian (MSB on right side)  This method
% encodes the input data bit stream (8 bits) into a 12 bit stream.  This
% method can be turned into combinational logic pretty easily which makes
% this method fast and simple.
% 
% The output data has the hamming codes embedded in the datastream. Which
% means the Hamming bits are at bit position (base1, because matlab) 1 2 4 8

function[out_encoded] = Hamming_encoding(data)

hammingCode = [0 0 0 0 0 0 0 0 0 0 0 0];


hammingCode(3) = data(1)
hammingCode(5) = data(2)
hammingCode(6) = data(3)
hammingCode(7) = data(4)
hammingCode(9) = data(5)
hammingCode(10) = data(6)
hammingCode(11) = data(7)
hammingCode(12) = data(8)

%first hamming code Parity bit
hammingCode(1) = mod((hammingCode(3) + hammingCode(5) + ...
            hammingCode(7) + hammingCode(9) + hammingCode(11)),2);

%second hamming code Parity bit 
hammingCode(2) = mod((hammingCode(3) + hammingCode(6) + ...
            hammingCode(7) + hammingCode(10) + hammingCode(11)),2);

%third hamming code Parity bit
hammingCode(4) = mod((hammingCode(5) + hammingCode(6) + ...
                        hammingCode(7) + hammingCode(12)),2);

%fourth hamming code Parity bit
hammingCode(8) = mod((hammingCode(9) + hammingCode(10) + ...
                        hammingCode(11) + hammingCode(12)),2);


out_encoded = hammingCode



