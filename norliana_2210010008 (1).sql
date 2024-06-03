-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 03, 2024 at 03:37 PM
-- Server version: 10.1.38-MariaDB
-- PHP Version: 5.6.40

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `norliana_2210010008`
--

-- --------------------------------------------------------

--
-- Table structure for table `barang1`
--

CREATE TABLE `barang1` (
  `id_barang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nama_barang` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `spesifikasi` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `harga_satuan` decimal(10,0) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `bukti_pembayaran`
--

CREATE TABLE `bukti_pembayaran` (
  `no_bukti` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `no_invoice` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_bukti` date NOT NULL,
  `keterangan` text CHARACTER SET utf8mb4 NOT NULL,
  `no_rek` varchar(20) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `bukti_timbangan`
--

CREATE TABLE `bukti_timbangan` (
  `no_bukti` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_masuk` date NOT NULL,
  `tgl_kirim` date NOT NULL,
  `no_polisi` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `no_bt` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_keluar` date NOT NULL,
  `berat_masuk` varchar(5) CHARACTER SET utf8mb4 NOT NULL,
  `berat_keluar` varchar(5) CHARACTER SET utf8mb4 NOT NULL,
  `no_gr` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `good_receipt`
--

CREATE TABLE `good_receipt` (
  `no_gr` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_masuk` date NOT NULL,
  `tgl_posting` date NOT NULL,
  `jumlah_order` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_gr` date NOT NULL,
  `keterangan` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `no_po` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangka pengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `gudang`
--

CREATE TABLE `gudang` (
  `id_gudang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `alamat_gudang` text CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `invoice1`
--

CREATE TABLE `invoice1` (
  `no_invoice` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `no_po` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_invoice` date NOT NULL,
  `discon` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `ppn` decimal(10,0) NOT NULL,
  `jum_bayar` decimal(10,0) NOT NULL,
  `id_karyawan` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangka_pengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `karyawan1`
--

CREATE TABLE `karyawan1` (
  `nik` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nama` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `alamat` text CHARACTER SET utf8mb4 NOT NULL,
  `telp` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `golongan` varchar(3) NOT NULL,
  `status` varchar(10) NOT NULL,
  `anak` int(3) NOT NULL,
  `masa` int(2) NOT NULL,
  `gaji` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `karyawan1`
--

INSERT INTO `karyawan1` (`nik`, `nama`, `alamat`, `telp`, `golongan`, `status`, `anak`, `masa`, `gaji`) VALUES
('22112', 'lia', 'bogor', '3525252', 'I', 'Belum Meni', 0, 2, 3500000),
('345353', 'lia', 'jakarta', '034353', 'II', 'Menikah', 2, 6, 4600000);

-- --------------------------------------------------------

--
-- Table structure for table `kenderaan`
--

CREATE TABLE `kenderaan` (
  `no_polisi` varchar(10) NOT NULL,
  `jenis` varchar(10) NOT NULL,
  `muatan` varchar(10) NOT NULL,
  `supir` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `klien`
--

CREATE TABLE `klien` (
  `id_klien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nama_klien` text CHARACTER SET utf8mb4 NOT NULL,
  `alamat` text CHARACTER SET utf8mb4 NOT NULL,
  `telp` varchar(13) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `mou_klien1`
--

CREATE TABLE `mou_klien1` (
  `no_mou` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_klien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_mou` date NOT NULL,
  `jangka_waktu` year(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `penawaran`
--

CREATE TABLE `penawaran` (
  `no_penawaran` varchar(10) CHARACTER SET utf8mb4 DEFAULT NULL,
  `id_barang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `status` varchar(200) CHARACTER SET utf8mb4 NOT NULL,
  `harga` decimal(10,0) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `purchase_order`
--

CREATE TABLE `purchase_order` (
  `no_po` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangka_pengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_klien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_po` date NOT NULL,
  `status_po` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `qty` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `harga` decimal(10,0) NOT NULL,
  `UoM` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_barang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_gudang` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `transaksi_penawaran`
--

CREATE TABLE `transaksi_penawaran` (
  `no_penawaran` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_barang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `id_klien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tgl_penawaran` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `barang1`
--
ALTER TABLE `barang1`
  ADD PRIMARY KEY (`id_barang`);

--
-- Indexes for table `bukti_pembayaran`
--
ALTER TABLE `bukti_pembayaran`
  ADD PRIMARY KEY (`no_bukti`);

--
-- Indexes for table `bukti_timbangan`
--
ALTER TABLE `bukti_timbangan`
  ADD PRIMARY KEY (`no_bukti`);

--
-- Indexes for table `good_receipt`
--
ALTER TABLE `good_receipt`
  ADD PRIMARY KEY (`no_gr`);

--
-- Indexes for table `gudang`
--
ALTER TABLE `gudang`
  ADD PRIMARY KEY (`id_gudang`);

--
-- Indexes for table `invoice1`
--
ALTER TABLE `invoice1`
  ADD PRIMARY KEY (`no_invoice`);

--
-- Indexes for table `karyawan1`
--
ALTER TABLE `karyawan1`
  ADD PRIMARY KEY (`nik`);

--
-- Indexes for table `kenderaan`
--
ALTER TABLE `kenderaan`
  ADD PRIMARY KEY (`no_polisi`);

--
-- Indexes for table `klien`
--
ALTER TABLE `klien`
  ADD PRIMARY KEY (`id_klien`);

--
-- Indexes for table `mou_klien1`
--
ALTER TABLE `mou_klien1`
  ADD PRIMARY KEY (`no_mou`);

--
-- Indexes for table `purchase_order`
--
ALTER TABLE `purchase_order`
  ADD PRIMARY KEY (`no_po`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
