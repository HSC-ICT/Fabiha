-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Aug 21, 2021 at 12:20 PM
-- Server version: 10.4.19-MariaDB
-- PHP Version: 8.0.7

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `college`
--

-- --------------------------------------------------------

--
-- Table structure for table `student_details`
--

CREATE TABLE `student_details` (
  `Roll` int(11) NOT NULL,
  `Name` varchar(15) DEFAULT NULL,
  `Gender` varchar(15) DEFAULT NULL,
  `Age` int(11) DEFAULT NULL,
  `GPA` double(3,2) DEFAULT NULL,
  `City` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `student_details`
--

INSERT INTO `student_details` (`Roll`, `Name`, `Gender`, `Age`, `GPA`, `City`) VALUES
(101, 'Maruf', 'Male', 21, 4.52, 'Dhaka'),
(102, 'Arif', 'Male', 17, 4.56, 'Cumilla'),
(103, 'Mahabuba', 'Female', 18, 4.68, 'Sylhet'),
(104, 'Shimul', 'Male', 16, 4.57, 'Barishal'),
(105, 'Sharmin', 'Female', 18, 4.63, 'Rangpur'),
(106, 'Nayan', 'Male', 19, 4.89, 'Nowakhali'),
(107, 'Murad', 'Male', 20, 4.78, 'Chittagong'),
(108, 'Anika', 'Female', 21, 4.43, 'Sylhet');

-- --------------------------------------------------------

--
-- Table structure for table `Teacher`
--

CREATE TABLE `Teacher` (
  `ID` int(11) NOT NULL,
  `Name` varchar(15) NOT NULL,
  `Salary` double(10,2) DEFAULT NULL,
  `Department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `Teacher`
--

INSERT INTO `Teacher` (`ID`, `Name`, `Salary`, `Department`) VALUES
(1000, 'Moshiur Rahman', 74000.00, NULL),
(1001, 'Anisur Rahman', 84000.00, NULL),
(1002, 'Jonas', 78000.00, NULL),
(1004, 'Al Amin Nahid', 17000.00, NULL),
(1005, 'Abu Taleb', 62000.00, NULL),
(1006, 'Mahbub Alam', 20000.00, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `teacher`
--

CREATE TABLE `teacher` (
  `ID` int(11) NOT NULL,
  `Name` varchar(15) NOT NULL,
  `Salary` double(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `teacher`
--

INSERT INTO `teacher` (`ID`, `Name`, `Salary`) VALUES
(1000, 'Moshiur Rahman', 43000.00),
(1001, 'Sumit Saha', 44500.00),
(1002, 'Stack Overflow', 49000.00),
(1003, 'Dev Ed', 54000.00),
(1004, 'Al Amin Nahid', 43000.00),
(1005, 'Abu Taleb', 50000.00),
(1006, 'Maruf', 252424.00);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `student_details`
--
ALTER TABLE `student_details`
  ADD PRIMARY KEY (`Roll`);

--
-- Indexes for table `Teacher`
--
ALTER TABLE `Teacher`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `teacher`
--
ALTER TABLE `teacher`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Teacher`
--
ALTER TABLE `Teacher`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1007;

--
-- AUTO_INCREMENT for table `teacher`
--
ALTER TABLE `teacher`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1007;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
