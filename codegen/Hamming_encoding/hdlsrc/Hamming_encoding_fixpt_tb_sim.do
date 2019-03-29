onbreak resume
onerror resume
vsim -novopt work.Hamming_encoding_fixpt_tb

add wave sim:/Hamming_encoding_fixpt_tb/u_Hamming_encoding_fixpt/data
add wave sim:/Hamming_encoding_fixpt_tb/u_Hamming_encoding_fixpt/out_encoded
add wave sim:/Hamming_encoding_fixpt_tb/out_encoded_ref
run -all
