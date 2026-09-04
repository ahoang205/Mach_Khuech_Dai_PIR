# 📡 Mạch Khuếch Đại Cảm Biến PIR 2 - EasyEDA Pro Edition (PIR Sensor Amplifier v2)

![Open Source Hardware](https://img.shields.io/badge/Open%20Source-Hardware-orange.svg)
![EDA Tool](https://img.shields.io/badge/EDA-EasyEDA%20Pro-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)

Dự án thiết kế bo mạch phần cứng **Mạch Khuếch Đại Cảm Biến PIR Phiên Bản 2** được thiết kế nguyên bản trên **EasyEDA Pro**, hỗ trợ xử lý lọc dải thông và khuếch đại tín hiệu phát hiện chuyển động hồng ngoại thụ động.

---

## 📸 Mô Hình 3D Bo Mạch PCB (3D PCB Top & Bottom View)

<p align="center">
  <img src="docs/pcb3d_mt.png" alt="PCB 3D Top View - Mặt Trước" width="48%"/>
  <img src="docs/pcb3d_ms.png" alt="PCB 3D Bottom View - Mặt Sau" width="48%"/>
</p>

<p align="center">
  <i>Mô phỏng 3D bo mạch PCB 2 lớp: Mặt Trước (Top View) & Mặt Sau (Bottom View)</i>
</p>

---

## ⚡ Tính Năng Nổi Bật (Key Features)

- **Thiết Kế Trên EasyEDA Pro:** Đầy đủ file dự án nguồn gốc .epro2 để mở và tùy chỉnh trực tiếp trên EasyEDA Pro.
- **Mô Hình 3D STEP Chuẩn Chuẩn Kỹ Thuật:** Xuất sẵn file 3D_PCB1_2026-09-04.step phục vụ thiết kế vỏ hộp 3D (SolidWorks, Fusion 360).
- **Bộ File Gia Công Đầy Đủ:** File nén Gerber 2026, bảng thống kê linh kiện BOM Excel và bản vẽ sơ đồ nguyên lý PDF chất lượng cao.

---

## 📊 Thông Số Kỹ Thuật (Specifications)

| Thông Số (Parameter) | Giá Trị (Value) | Ghi Chú (Notes) |
| :--- | :--- | :--- |
| **Công Cụ Thiết Kế** | EasyEDA Pro Edition | File .epro2 chính chủ |
| **Định Dạng Mô Hình 3D** | STEP (.step) | Chuẩn CAD 3D công nghiệp |
| **Bản Vẽ Sơ Đồ Nguyên Lý** | PDF Quality | Xuất nét rõ ràng |
| **File Đặt Làm Mạch** | Gerber ZIP 2026 | Đặt mạch PCB 2 lớp |

---

## 📂 Cấu Trúc Thư Mục Dự Án (Repository Structure)

```text
Mach_Khuech_Dai_PIR2/
├── hardware/                         # Toàn bộ thiết kế phần cứng EasyEDA Pro
│   ├── schematics/                   # File sơ đồ nguyên lý (PDF)
│   │   └── SCH_Schematic1_2026-09-04.pdf
│   ├── gerber/                       # File Gerber đặt làm PCB
│   │   └── Gerber_PCB1_2026-09-04.zip
│   ├── production/                   # Bảng thống kê linh kiện (BOM)
│   │   └── BOM_Board1_Schematic1_2026-09-04.xlsx
│   ├── easyeda_source/               # File dự án EasyEDA Pro gốc (.epro2)
│   │   └── ProPrj_mach_khuech_dai_tin_hieu_cam_bien_PIR_2026-09-04.epro2
│   └── 3d_model/                     # File 3D CAD (.step)
│       └── 3D_PCB1_2026-09-04.step
├── docs/                             # Ảnh 3D & Tài liệu minh họa
│   ├── pcb3d_mt.png                  # Ảnh 3D Mặt Trước PCB
│   └── pcb3d_ms.png                  # Ảnh 3D Mặt Sau PCB
├── .gitignore                        # Lọc file rác
├── LICENSE                           # Giấy phép bản quyền MIT License
└── README.md                         # Tài liệu giới thiệu dự án
```

---

## 📜 Giấy Phép (License)

Dự án được phân phối dưới giấy phép [MIT License](LICENSE).

---
*Authored by **Viet Hoang Luong**.*

