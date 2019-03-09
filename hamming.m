%Hamming code: only able to repair one instance of a flipped bit

%data to parse through the hamming code method
%function [out1] = hamming(dataIn)
%random vector generate
%data = dataIn
 data = [1 0 0 1 1 0 1 0]

hammingCode = [0 0 0 0 0 0 0 0 0 0 0 0];


hammingCode(3) = data(1)
hammingCode(5) = data(2)
hammingCode(6) = data(3)
hammingCode(7) = data(4)
hammingCode(9) = data(5)
hammingCode(10) = data(6)
hammingCode(11) = data(7)
hammingCode(12) = data(8)


hammingCode

%first hamming code Parity bit
hammingCode(1) = mod((hammingCode(3) + hammingCode(5) + hammingCode(7) + hammingCode(9) + hammingCode(11)),2);

%second hamming code Parity bit 
hammingCode(2) = mod((hammingCode(3) + hammingCode(6) + hammingCode(7) + hammingCode(10) + hammingCode(11)),2);

%third hamming code Parity bit
hammingCode(4) = mod((hammingCode(5) + hammingCode(6) + hammingCode(7) + hammingCode(12)),2);

%fourth hamming code Parity bit
hammingCode(8) = mod((hammingCode(9) + hammingCode(10) + hammingCode(11) + hammingCode(12)),2);

%the bits for the hamming code are now setup.  If there is a discrepancy
%the parity bits are used to figure it 

%now the data is corrupt
hammingCode(6) = ~hammingCode(6);

%by using the traditional method to find what is wrong we check all of the
%parity bits in the hamming code to see which parity bits are wrong
parityErrors = [0 ];

%sets the first parity bit, if the sum of the checked values is even then
%the result is 0, odd = 1
if(hammingCode(1) ~= mod((hammingCode(3) + hammingCode(5) + hammingCode(7) + hammingCode(9) + hammingCode(11)),2));
    parityErrors = [parityErrors, 1];
end
    
%sets the second parity bit
if(hammingCode(2) ~= mod((hammingCode(3) + hammingCode(6) + hammingCode(7) + hammingCode(10) + hammingCode(11)),2));
    parityErrors = [parityErrors, 2]; 
end 

%sets the third parity bit
if(hammingCode(4) ~= mod((hammingCode(5) + hammingCode(6) + hammingCode(7) + hammingCode(12)),2));
    parityErrors = [parityErrors,4];
end

%sets the fourth paritybit
if(hammingCode(8) ~= mod((hammingCode(9) + hammingCode(10) + hammingCode(11) + hammingCode(12)),2));
    parityErrors = [parityErrors,8];
end

parityErrors

%finding how paritybits are wrong + 1
[rows,columns] = size(parityErrors);

errorPosition = 0;
for x = 1:columns
   errorPosition = errorPosition + parityErrors(x);
end

%should correct the 1 bit flip in the hamming code
hammingCode(errorPosition) = ~hammingCode(errorPosition);

out1 = hammingCode

%end
