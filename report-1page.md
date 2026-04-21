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
Trong bài lab này, em đã hiểu và triển khai thành công hai thuật toán mã hóa cơ bản là Caesar Cipher và Rail Fence Cipher bằng C++. Thông qua quá trình thực hiện, em nắm được cách thức hoạt động của từng thuật toán, bao gồm cách dịch chuyển ký tự trong Caesar và cách sắp xếp ký tự theo dạng “zigzag” trong Rail Fence.

Bên cạnh đó, em cũng đã xây dựng được chức năng kiểm tra tính hợp lệ của dữ liệu đầu vào, giúp chương trình hoạt động ổn định và tránh lỗi. Việc đọc dữ liệu từ file cũng được tích hợp thành công, giúp chương trình linh hoạt hơn trong xử lý dữ liệu thực tế.

Kết quả kiểm thử cho thấy chương trình hoạt động đúng với các trường hợp mã hóa và giải mã, đảm bảo tính chính xác của thuật toán.
