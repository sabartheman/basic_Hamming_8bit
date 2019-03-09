% This function is the decoding part to the Hamming_encoding function
% in the same folder.  If implemented in hardware this method for
% implementing hamming decoding needs to be done in stages.  Statemachines
% are a possible method to building a hamming decoder in hardware.
%

function [output,errorPosition] = Hamming_decoding(input_encoded)

hammingCode = input_encoded;



parityErrors = [0 ];

%sets the first parity bit, if the sum of the checked values is even then
%the result is 0, odd = 1
if(hammingCode(1) ~= mod((hammingCode(3) + hammingCode(5) + ...
                hammingCode(7) + hammingCode(9) + hammingCode(11)),2));
    parityErrors = [parityErrors, 1];
end
    
%sets the second parity bit
if(hammingCode(2) ~= mod((hammingCode(3) + hammingCode(6) + ...
                hammingCode(7) + hammingCode(10) + hammingCode(11)),2));
    parityErrors = [parityErrors, 2]; 
end 

%sets the third parity bit
if(hammingCode(4) ~= mod((hammingCode(5) + hammingCode(6) + ...
                            hammingCode(7) + hammingCode(12)),2));
    parityErrors = [parityErrors,4];
end

%sets the fourth paritybit
if(hammingCode(8) ~= mod((hammingCode(9) + hammingCode(10) + ...
                            hammingCode(11) + hammingCode(12)),2));
    parityErrors = [parityErrors,8];
end



%finding how paritybits are wrong + 1
[rows,columns] = size(parityErrors);


errorBit = 0;
for x = 1:columns
   errorBit = errorBit + parityErrors(x);
end

%should correct the 1 bit flip in the hamming code
hammingCode(errorBit) = ~hammingCode(errorBit);

output = hammingCode
errorPositions = parityErrors




