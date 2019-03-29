function [output,errorPosition] = Hamming_decoding(input_encoded)

hammingCode = input_encoded;

%intializing vector for possible error positions
parityErrors = [0 0 0 0];

%sets the first parity bit, if the sum of the checked values is even then
%the result is 0, odd = 1
if(hammingCode(1) ~= xor(xor(xor(xor(hammingCode(3),hammingCode(5)),hammingCode(7)),hammingCode(9)),hammingCode(11)))         
    parityErrors(1) = 1;
end
    
%sets the second parity bit
if(hammingCode(2) ~= xor(xor(xor(xor(hammingCode(3),hammingCode(6)),hammingCode(7)),hammingCode(10)),hammingCode(11)))
    parityErrors(2) = 2; 
end 

%sets the third parity bit
if(hammingCode(4) ~= xor(xor(xor(hammingCode(5),hammingCode(6)),hammingCode(7)),hammingCode(12)))
    parityErrors(3) = 4;
end

%sets the fourth paritybit
if(hammingCode(8) ~= xor(xor(xor(hammingCode(9),hammingCode(10)),hammingCode(11)),hammingCode(12)))                     
    parityErrors(4) = 8;
end

%finding how paritybits are wrong + 1
[rows,columns] = size(parityErrors);

errorBit = 0;
for x = 1:columns
   errorBit = errorBit + parityErrors(x);
end

%corrects the 1 bit flip in the hamming code
if(errorBit > 0) 
    hammingCode(errorBit) = ~hammingCode(errorBit);
end
    
output = hammingCode
errorPosition = errorBit




