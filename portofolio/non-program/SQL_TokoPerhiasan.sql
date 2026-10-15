-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 28 Sep 2026 pada 09.02
-- Versi server: 10.4.32-MariaDB
-- Versi PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `toko_perhiasan`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `pegawai`
--

CREATE TABLE `pegawai` (
  `id_pegawai` int(11) NOT NULL,
  `nama_pegawai` varchar(100) DEFAULT NULL,
  `no_telp_pegawai` varchar(20) DEFAULT NULL,
  `email_pegawai` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pegawai`
--

INSERT INTO `pegawai` (`id_pegawai`, `nama_pegawai`, `no_telp_pegawai`, `email_pegawai`) VALUES
(1, 'Andi Wijaya', '081234567890', 'andi@tokoemas.com'),
(2, 'Budi Santoso', '081234567891', 'budi@tokoemas.com'),
(3, 'Citra Dewi', '081234567892', 'citra@tokoemas.com'),
(4, 'Deni Kurniawan', '081234567893', 'deni@tokoemas.com'),
(5, 'Eka Putri', '081234567894', 'eka@tokoemas.com');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pelanggan`
--

CREATE TABLE `pelanggan` (
  `id_pelanggan` int(11) NOT NULL,
  `nama_pelanggan` varchar(100) DEFAULT NULL,
  `no_telp_pelanggan` varchar(20) DEFAULT NULL,
  `email_pelanggan` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pelanggan`
--

INSERT INTO `pelanggan` (`id_pelanggan`, `nama_pelanggan`, `no_telp_pelanggan`, `email_pelanggan`) VALUES
(101, 'Fajar Pratama', '085611112222', 'fajar@gmail.com'),
(102, 'Gita Gutawa', '085611112223', 'gita@gmail.com'),
(103, 'Hadi Nur', '085611112224', 'hadi@gmail.com'),
(104, 'Indah Sari', '085611112225', 'indah@gmail.com'),
(105, 'Joko Susilo', '085611112226', 'joko@gmail.com');

-- --------------------------------------------------------

--
-- Struktur dari tabel `pembayaran`
--

CREATE TABLE `pembayaran` (
  `id_pembayaran` int(11) NOT NULL,
  `id_pegawai` int(11) DEFAULT NULL,
  `id_pesanan` int(11) DEFAULT NULL,
  `waktu_pembayaran` datetime DEFAULT NULL,
  `status_pembayaran` varchar(50) DEFAULT NULL,
  `jenis_pembayaran` varchar(50) DEFAULT NULL,
  `total_pembayaran` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pembayaran`
--

INSERT INTO `pembayaran` (`id_pembayaran`, `id_pegawai`, `id_pesanan`, `waktu_pembayaran`, `status_pembayaran`, `jenis_pembayaran`, `total_pembayaran`) VALUES
(601, 1, 501, '2026-03-01 08:30:00', 'Lunas', 'Transfer Bank', 2500000),
(602, 2, 502, '2026-03-02 09:45:00', 'Lunas', 'Kartu Kredit', 4500000),
(603, 3, 503, '2026-03-03 10:30:00', 'DP', 'E-Wallet', 1000000),
(604, 4, 504, '2026-03-04 13:30:00', 'Lunas', 'Transfer Bank', 3200000),
(605, 5, 505, '2026-03-05 15:30:00', 'Lunas', 'Tunai', 5000000);

-- --------------------------------------------------------

--
-- Struktur dari tabel `pengiriman`
--

CREATE TABLE `pengiriman` (
  `id_pengiriman` int(11) NOT NULL,
  `jalur_pengiriman` varchar(50) DEFAULT NULL,
  `no_resi` varchar(50) DEFAULT NULL,
  `waktu_pengiriman` datetime DEFAULT NULL,
  `status_pengiriman` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pengiriman`
--

INSERT INTO `pengiriman` (`id_pengiriman`, `jalur_pengiriman`, `no_resi`, `waktu_pengiriman`, `status_pengiriman`) VALUES
(201, 'JNE YES', 'JNE123456781', '2026-03-01 09:00:00', 'Dikirim'),
(202, 'J&T Express', 'JT123456782', '2026-03-02 10:30:00', 'Selesai'),
(203, 'SiCepat BEST', 'SCP123456783', '2026-03-03 11:15:00', 'Proses Pengiriman'),
(204, 'Kurir Toko', 'KR123456784', '2026-03-04 14:00:00', 'Selesai'),
(205, 'Pos Indonesia', 'POS123456785', '2026-03-05 16:20:00', 'Dikirim');

-- --------------------------------------------------------

--
-- Struktur dari tabel `perhiasan`
--

CREATE TABLE `perhiasan` (
  `id_perhiasan` int(11) NOT NULL,
  `harga_perhiasan` int(11) DEFAULT NULL,
  `bahan_perhiasan` varchar(50) DEFAULT NULL,
  `stok_perhiasan` int(11) DEFAULT NULL,
  `kategori_perhiasan` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `perhiasan`
--

INSERT INTO `perhiasan` (`id_perhiasan`, `harga_perhiasan`, `bahan_perhiasan`, `stok_perhiasan`, `kategori_perhiasan`) VALUES
(301, 2500000, 'Emas Kuning', 10, 'Cincin'),
(302, 4500000, 'Emas Putih', 5, 'Kalung'),
(303, 1800000, 'Perak', 15, 'Gelang'),
(304, 3200000, 'Emas Rosegold', 8, 'Anting'),
(305, 5000000, 'Platina', 3, 'Liontin');

-- --------------------------------------------------------

--
-- Struktur dari tabel `perhiasan_custom`
--

CREATE TABLE `perhiasan_custom` (
  `id_custom` int(11) NOT NULL,
  `bentuk_custom` varchar(50) DEFAULT NULL,
  `bahan_custom` varchar(50) DEFAULT NULL,
  `jenis_perhiasan` varchar(50) DEFAULT NULL,
  `berat_custom` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `perhiasan_custom`
--

INSERT INTO `perhiasan_custom` (`id_custom`, `bentuk_custom`, `bahan_custom`, `jenis_perhiasan`, `berat_custom`) VALUES
(401, 'Hati dengan Inisial', 'Emas Putih 18K', 'Cincin', 3),
(402, 'Ukiran Nama', 'Emas Kuning 22K', 'Gelang', 10),
(403, 'Desain Solitaire Minimalis', 'Platina', 'Cincin Tunangan', 4),
(404, 'Bentuk Bintang', 'Emas Rosegold', 'Anting', 2),
(405, 'Ukiran Solitaire', 'Emas Kuning 18K', 'Liontin', 5);

-- --------------------------------------------------------

--
-- Struktur dari tabel `pesanan`
--

CREATE TABLE `pesanan` (
  `id_pesanan` int(11) NOT NULL,
  `id_pelanggan` int(11) DEFAULT NULL,
  `id_pengiriman` int(11) DEFAULT NULL,
  `id_sertifikat` int(11) DEFAULT NULL,
  `waktu_pesanan` datetime DEFAULT NULL,
  `status_pesanan` varchar(50) DEFAULT NULL,
  `catatan_tambahan` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `pesanan`
--

INSERT INTO `pesanan` (`id_pesanan`, `id_pelanggan`, `id_pengiriman`, `id_sertifikat`, `waktu_pesanan`, `status_pesanan`, `catatan_tambahan`) VALUES
(501, 101, 201, 701, '2026-03-01 08:00:00', 'Diproses', 'Bungkus kado ucapan selamat ulang tahun'),
(502, 102, 202, 702, '2026-03-02 09:30:00', 'Selesai', 'Pastikan garansi disertakan'),
(503, 103, 203, 703, '2026-03-03 10:00:00', 'Diproses', 'Harap konfirmasi sebelum dikirim'),
(504, 104, 204, 704, '2026-03-04 13:15:00', 'Selesai', 'Ukuran cincin disesuaikan no. 14'),
(505, 105, 205, 705, '2026-03-05 15:00:00', 'Diproses', 'Pengiriman berasuransi');

-- --------------------------------------------------------

--
-- Struktur dari tabel `sertifikat`
--

CREATE TABLE `sertifikat` (
  `id_sertifikat` int(11) NOT NULL,
  `id_pesanan` int(11) DEFAULT NULL,
  `garansi` varchar(100) DEFAULT NULL,
  `tanggal_uji` date DEFAULT NULL,
  `kadar_emas` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data untuk tabel `sertifikat`
--

INSERT INTO `sertifikat` (`id_sertifikat`, `id_pesanan`, `garansi`, `tanggal_uji`, `kadar_emas`) VALUES
(701, 501, '1 Tahun Toko', '2026-02-28', '75% (18K)'),
(702, 502, '2 Tahun Toko', '2026-03-01', '75% (18K)'),
(703, 503, '1 Tahun Toko', '2026-03-02', '92% (22K)'),
(704, 504, '6 Bulan Toko', '2026-03-03', '75% (18K)'),
(705, 505, '3 Tahun Toko', '2026-03-04', '99% (24K)');

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `pegawai`
--
ALTER TABLE `pegawai`
  ADD PRIMARY KEY (`id_pegawai`);

--
-- Indeks untuk tabel `pelanggan`
--
ALTER TABLE `pelanggan`
  ADD PRIMARY KEY (`id_pelanggan`);

--
-- Indeks untuk tabel `pembayaran`
--
ALTER TABLE `pembayaran`
  ADD PRIMARY KEY (`id_pembayaran`),
  ADD KEY `fk_pembayaran_pegawai` (`id_pegawai`),
  ADD KEY `fk_pembayaran_pesanan` (`id_pesanan`);

--
-- Indeks untuk tabel `pengiriman`
--
ALTER TABLE `pengiriman`
  ADD PRIMARY KEY (`id_pengiriman`);

--
-- Indeks untuk tabel `perhiasan`
--
ALTER TABLE `perhiasan`
  ADD PRIMARY KEY (`id_perhiasan`);

--
-- Indeks untuk tabel `perhiasan_custom`
--
ALTER TABLE `perhiasan_custom`
  ADD PRIMARY KEY (`id_custom`);

--
-- Indeks untuk tabel `pesanan`
--
ALTER TABLE `pesanan`
  ADD PRIMARY KEY (`id_pesanan`),
  ADD KEY `fk_pesanan_pelanggan` (`id_pelanggan`),
  ADD KEY `fk_pesanan_pengiriman` (`id_pengiriman`),
  ADD KEY `fk_pesanan_sertifikat` (`id_sertifikat`);

--
-- Indeks untuk tabel `sertifikat`
--
ALTER TABLE `sertifikat`
  ADD PRIMARY KEY (`id_sertifikat`),
  ADD KEY `fk_sertifikat_pesanan` (`id_pesanan`);

--
-- Ketidakleluasaan untuk tabel pelimpahan (Dumped Tables)
--

--
-- Ketidakleluasaan untuk tabel `pembayaran`
--
ALTER TABLE `pembayaran`
  ADD CONSTRAINT `fk_pembayaran_pegawai` FOREIGN KEY (`id_pegawai`) REFERENCES `pegawai` (`id_pegawai`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `fk_pembayaran_pesanan` FOREIGN KEY (`id_pesanan`) REFERENCES `pesanan` (`id_pesanan`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Ketidakleluasaan untuk tabel `pesanan`
--
ALTER TABLE `pesanan`
  ADD CONSTRAINT `fk_pesanan_pelanggan` FOREIGN KEY (`id_pelanggan`) REFERENCES `pelanggan` (`id_pelanggan`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `fk_pesanan_pengiriman` FOREIGN KEY (`id_pengiriman`) REFERENCES `pengiriman` (`id_pengiriman`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `fk_pesanan_sertifikat` FOREIGN KEY (`id_sertifikat`) REFERENCES `sertifikat` (`id_sertifikat`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Ketidakleluasaan untuk tabel `sertifikat`
--
ALTER TABLE `sertifikat`
  ADD CONSTRAINT `fk_sertifikat_pesanan` FOREIGN KEY (`id_pesanan`) REFERENCES `pesanan` (`id_pesanan`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
