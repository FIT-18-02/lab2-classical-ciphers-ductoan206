# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Tìm hiểu và triển khai thuật toán mã hóa Caesar và Rail Fence, xử lý dữ liệu đầu vào và đọc file trong C++.

## 2. Cách làm
- Triển khai thuật toán Caesar và Rail Fence.
- Viết hàm kiểm tra tính hợp lệ của input.
- Tích hợp đọc file `data/input.txt`.

## 3. Kết quả chính
### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Mã hóa đúng |
| hello world | 5 | mjqqt btwqi | Mã hóa đúng |
| LORYH BRX | 3 | I LOVE YOU | Giải mã đúng |

### 3.2 Rail Fence Cipher
| Input | Rails | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV O OEYU | Mã hóa đúng |
| I LOVE YOU | 4 | I  EYLVOOU | Mã hóa đúng |
| IOEOLVYU | 2 | I LOVE YOU | Giải mã đúng |

### 3.3 Input validation / file input
- Trường hợp đầu vào không hợp lệ: Chương trình báo lỗi đúng.
- Kết quả đọc từ `data/input.txt`: Đọc và mã hóa thành công.

## 4. Kết luận
Bài lab đã giúp em nắm vững cách triển khai và hoạt động của hai thuật toán mã hóa cổ điển là Caesar và Rail Fence trong C++. Chương trình hoạt động đúng với các trường hợp kiểm thử, xử lý tốt dữ liệu đầu vào và đọc file. Qua đó, em hiểu rõ hơn về quy trình xây dựng một chương trình mã hóa cơ bản, đồng thời nhận thấy hạn chế của các phương pháp này và tầm quan trọng của các kỹ thuật bảo mật hiện đại.
