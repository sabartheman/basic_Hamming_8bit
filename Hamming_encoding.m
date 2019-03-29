function[out_encoded] = Hamming_encoding(data)

hammingCode = [0 0 0 0 0 0 0 0 0 0 0 0];


hammingCode(3) = data(1);
hammingCode(5) = data(2);
hammingCode(6) = data(3);
hammingCode(7) = data(4);
hammingCode(9) = data(5);
hammingCode(10) = data(6);
hammingCode(11) = data(7);
hammingCode(12) = data(8);

%first hamming code Parity bit
hammingCode(1) = xor(xor(xor(xor(hammingCode(3),hammingCode(5)),hammingCode(7)),hammingCode(9)),hammingCode(11));

%second hamming code Parity bit 
hammingCode(2) = xor(xor(xor(xor(hammingCode(3),hammingCode(6)),hammingCode(7)),hammingCode(10)),hammingCode(11));

%third hamming code Parity bit
hammingCode(4) = xor(xor(xor(hammingCode(5),hammingCode(6)),hammingCode(7)),hammingCode(12));

%fourth hamming code Parity bit
hammingCode(8) = xor(xor(xor(hammingCode(9),hammingCode(10)),hammingCode(11)),hammingCode(12));


out_encoded = hammingCode



