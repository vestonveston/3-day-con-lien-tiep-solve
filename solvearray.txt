Solve bài array
- Bài này sẽ sử dụng tổng tiền tố, hậu tố và tham lam.
- Gọi :
+ tt[i] là tổng các số từ 1 đến i.
+ matt[i] là dãy con liên tiếp có tổng lớn nhất từ 1 đến i.
+ ht[i] là tổng các số từ i đến n.
+ maht[i] là dãy con liên tiếp có tổng lớn nhất từ i đến n.
- Với mỗi phần từ tt[i] (1 < i < n) ta thấy tổng lớn nhất của 3 dãy con liên tiếp và dãy giữa có chứa phần tử Ai có cấu tạo: tt[i] + matt[j] - tt[j](0 < j < i)  + maht[i + 1].
--> Ta cần tìm matt[j] - tt[j] lớn nhất với 0 < j < i.
- Xong ròi ý tưởng khá đơn giản nhưng mà code sẽ phải chắc 1 chút :^.
//code for fun
//pgm 
