-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
-- Date        : Thu Dec 19 00:05:21 2024
-- Host        : 05252zas running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ system_matrix_conv_0_0_sim_netlist.vhdl
-- Design      : system_matrix_conv_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0 is
  port (
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    P : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 3 downto 0 );
    p_0 : in STD_LOGIC_VECTOR ( 1 downto 0 );
    p_1 : in STD_LOGIC_VECTOR ( 3 downto 0 );
    p_2 : in STD_LOGIC;
    p_3 : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    a_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    b_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0 is
  signal \^e\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^p\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal \^sr\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal p_i_1_n_2 : STD_LOGIC;
  signal p_i_2_n_2 : STD_LOGIC;
  signal NLW_p_RnM_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_RnM_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_p_RnM_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_p_RnM_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_p_RnM_P_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 16 );
  signal NLW_p_RnM_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
begin
  E(0) <= \^e\(0);
  P(15 downto 0) <= \^p\(15 downto 0);
  SR(0) <= \^sr\(0);
p_RnM: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 0,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 0,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 0,
      BREG => 0,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 0,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29) => b_q0(7),
      A(28) => b_q0(7),
      A(27) => b_q0(7),
      A(26) => b_q0(7),
      A(25) => b_q0(7),
      A(24) => b_q0(7),
      A(23) => b_q0(7),
      A(22) => b_q0(7),
      A(21) => b_q0(7),
      A(20) => b_q0(7),
      A(19) => b_q0(7),
      A(18) => b_q0(7),
      A(17) => b_q0(7),
      A(16) => b_q0(7),
      A(15) => b_q0(7),
      A(14) => b_q0(7),
      A(13) => b_q0(7),
      A(12) => b_q0(7),
      A(11) => b_q0(7),
      A(10) => b_q0(7),
      A(9) => b_q0(7),
      A(8) => b_q0(7),
      A(7 downto 0) => b_q0(7 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_p_RnM_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => a_q0(7),
      B(16) => a_q0(7),
      B(15) => a_q0(7),
      B(14) => a_q0(7),
      B(13) => a_q0(7),
      B(12) => a_q0(7),
      B(11) => a_q0(7),
      B(10) => a_q0(7),
      B(9) => a_q0(7),
      B(8) => a_q0(7),
      B(7 downto 0) => a_q0(7 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_p_RnM_BCOUT_UNCONNECTED(17 downto 0),
      C(47 downto 16) => B"00000000000000000000000000000000",
      C(15 downto 0) => \^p\(15 downto 0),
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_p_RnM_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_p_RnM_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '0',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => '0',
      CEB2 => '0',
      CEC => \^e\(0),
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '0',
      CEP => p_i_1_n_2,
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_p_RnM_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 5) => B"01",
      OPMODE(4) => p_i_2_n_2,
      OPMODE(3) => '0',
      OPMODE(2) => Q(3),
      OPMODE(1) => '0',
      OPMODE(0) => Q(3),
      OVERFLOW => NLW_p_RnM_OVERFLOW_UNCONNECTED,
      P(47 downto 16) => NLW_p_RnM_P_UNCONNECTED(47 downto 16),
      P(15 downto 0) => \^p\(15 downto 0),
      PATTERNBDETECT => NLW_p_RnM_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_p_RnM_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47 downto 0) => NLW_p_RnM_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => \^sr\(0),
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_p_RnM_UNDERFLOW_UNCONNECTED
    );
p_i_1: unisim.vcomponents.LUT4
    generic map(
      INIT => X"BFAA"
    )
        port map (
      I0 => Q(3),
      I1 => p_0(0),
      I2 => p_0(1),
      I3 => Q(1),
      O => p_i_1_n_2
    );
p_i_2: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => Q(3),
      O => p_i_2_n_2
    );
\sum_reg_121[15]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000FFEF0000"
    )
        port map (
      I0 => p_1(2),
      I1 => p_1(1),
      I2 => p_1(3),
      I3 => p_1(0),
      I4 => Q(0),
      I5 => \^e\(0),
      O => \^sr\(0)
    );
\sum_reg_121[15]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => p_2,
      I1 => p_3,
      I2 => Q(2),
      O => \^e\(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb is
  port (
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    P : out STD_LOGIC_VECTOR ( 15 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \^p\ : in STD_LOGIC_VECTOR ( 1 downto 0 );
    p_0 : in STD_LOGIC_VECTOR ( 3 downto 0 );
    p_1 : in STD_LOGIC;
    p_2 : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    a_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    b_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb is
begin
matrix_conv_mac_mbkb_DSP48_0_U: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb_DSP48_0
     port map (
      E(0) => E(0),
      P(15 downto 0) => P(15 downto 0),
      Q(3 downto 0) => Q(3 downto 0),
      SR(0) => SR(0),
      a_q0(7 downto 0) => a_q0(7 downto 0),
      ap_clk => ap_clk,
      b_q0(7 downto 0) => b_q0(7 downto 0),
      p_0(1 downto 0) => \^p\(1 downto 0),
      p_1(3 downto 0) => p_0(3 downto 0),
      p_2 => p_1,
      p_3 => p_2
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    a_address0 : out STD_LOGIC_VECTOR ( 6 downto 0 );
    a_ce0 : out STD_LOGIC;
    a_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    b_address0 : out STD_LOGIC_VECTOR ( 3 downto 0 );
    b_ce0 : out STD_LOGIC;
    b_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    res_address0 : out STD_LOGIC_VECTOR ( 5 downto 0 );
    res_ce0 : out STD_LOGIC;
    res_we0 : out STD_LOGIC;
    res_d0 : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "6'b100000";
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv is
  signal \a_address0[2]_INST_0_i_1_n_2\ : STD_LOGIC;
  signal \a_address0[6]_INST_0_i_1_n_2\ : STD_LOGIC;
  signal \ap_CS_fsm[5]_i_1_n_2\ : STD_LOGIC;
  signal \ap_CS_fsm_reg_n_2_[0]\ : STD_LOGIC;
  signal ap_CS_fsm_state2 : STD_LOGIC;
  signal ap_CS_fsm_state3 : STD_LOGIC;
  signal ap_CS_fsm_state6 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal ap_NS_fsm1 : STD_LOGIC;
  signal ap_NS_fsm11_out : STD_LOGIC;
  signal \^ap_ready\ : STD_LOGIC;
  signal \^b_ce0\ : STD_LOGIC;
  signal i_1_fu_174_p2 : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal i_1_reg_361 : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal i_reg_97 : STD_LOGIC;
  signal j_1_fu_198_p2 : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal j_1_reg_374 : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal j_reg_109 : STD_LOGIC;
  signal \j_reg_109_reg_n_2_[3]\ : STD_LOGIC;
  signal m_1_reg_382 : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \m_1_reg_382[0]_i_1_n_2\ : STD_LOGIC;
  signal \m_1_reg_382[1]_i_1_n_2\ : STD_LOGIC;
  signal m_reg_134 : STD_LOGIC;
  signal n_1_reg_400 : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \n_1_reg_400[0]_i_1_n_2\ : STD_LOGIC;
  signal \n_1_reg_400[1]_i_1_n_2\ : STD_LOGIC;
  signal n_reg_1570 : STD_LOGIC;
  signal \n_reg_157[0]_i_1_n_2\ : STD_LOGIC;
  signal \n_reg_157[1]_i_1_n_2\ : STD_LOGIC;
  signal \n_reg_157_reg_n_2_[0]\ : STD_LOGIC;
  signal \n_reg_157_reg_n_2_[1]\ : STD_LOGIC;
  signal p_0_in : STD_LOGIC_VECTOR ( 5 downto 2 );
  signal p_shl_cast_fu_268_p1 : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \^res_address0\ : STD_LOGIC_VECTOR ( 5 downto 0 );
  signal \^res_ce0\ : STD_LOGIC;
  signal \^res_we0\ : STD_LOGIC;
  signal sum_1_reg_145_reg : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal tmp_10_cast_reg_366 : STD_LOGIC_VECTOR ( 5 downto 3 );
  signal \tmp_10_cast_reg_366[3]_i_1_n_2\ : STD_LOGIC;
  signal \tmp_10_cast_reg_366[4]_i_1_n_2\ : STD_LOGIC;
  signal \tmp_10_cast_reg_366[5]_i_1_n_2\ : STD_LOGIC;
  signal tmp_11_reg_387 : STD_LOGIC_VECTOR ( 6 downto 1 );
  signal tmp_13_reg_392 : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \tmp_13_reg_392[1]_i_1_n_2\ : STD_LOGIC;
  signal \tmp_13_reg_392[2]_i_1_n_2\ : STD_LOGIC;
  signal \tmp_13_reg_392[3]_i_1_n_2\ : STD_LOGIC;
  signal tmp_4_fu_220_p2 : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal tmp_9_cast_fu_314_p1 : STD_LOGIC_VECTOR ( 3 to 3 );
  signal tmp_fu_180_p3 : STD_LOGIC_VECTOR ( 6 downto 3 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \a_address0[0]_INST_0\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \a_address0[1]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \a_address0[2]_INST_0_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \a_address0[4]_INST_0\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \a_address0[5]_INST_0\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \ap_CS_fsm[1]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \ap_CS_fsm[3]_i_1\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \ap_CS_fsm[5]_i_1\ : label is "soft_lutpair0";
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[3]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[4]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[5]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of ap_ready_INST_0 : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \b_address0[1]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \b_address0[2]_INST_0\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \i_1_reg_361[1]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \i_1_reg_361[2]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \i_1_reg_361[3]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \j_1_reg_374[1]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \j_1_reg_374[2]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \j_1_reg_374[3]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \m_1_reg_382[0]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \m_1_reg_382[1]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \n_1_reg_400[0]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \n_1_reg_400[1]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \res_address0[4]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \res_address0[5]_INST_0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \tmp_11_reg_387[1]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \tmp_11_reg_387[2]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \tmp_11_reg_387[3]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \tmp_13_reg_392[1]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \tmp_13_reg_392[2]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \tmp_13_reg_392[3]_i_1\ : label is "soft_lutpair12";
begin
  a_ce0 <= \^b_ce0\;
  ap_done <= \^ap_ready\;
  ap_ready <= \^ap_ready\;
  b_ce0 <= \^b_ce0\;
  res_address0(5 downto 0) <= \^res_address0\(5 downto 0);
  res_ce0 <= \^res_ce0\;
  res_we0 <= \^res_we0\;
\a_address0[0]_INST_0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[0]\,
      I1 => \^res_address0\(0),
      O => a_address0(0)
    );
\a_address0[1]_INST_0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => tmp_11_reg_387(1),
      I1 => \n_reg_157_reg_n_2_[1]\,
      I2 => \^res_address0\(1),
      I3 => \^res_address0\(0),
      I4 => \n_reg_157_reg_n_2_[0]\,
      O => a_address0(1)
    );
\a_address0[2]_INST_0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7EE8811781177EE8"
    )
        port map (
      I0 => tmp_11_reg_387(1),
      I1 => \a_address0[2]_INST_0_i_1_n_2\,
      I2 => \n_reg_157_reg_n_2_[1]\,
      I3 => \^res_address0\(1),
      I4 => \^res_address0\(2),
      I5 => tmp_11_reg_387(2),
      O => a_address0(2)
    );
\a_address0[2]_INST_0_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^res_address0\(0),
      I1 => \n_reg_157_reg_n_2_[0]\,
      O => \a_address0[2]_INST_0_i_1_n_2\
    );
\a_address0[3]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => \a_address0[6]_INST_0_i_1_n_2\,
      I1 => tmp_9_cast_fu_314_p1(3),
      I2 => tmp_11_reg_387(3),
      O => a_address0(3)
    );
\a_address0[4]_INST_0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"17E8"
    )
        port map (
      I0 => \a_address0[6]_INST_0_i_1_n_2\,
      I1 => tmp_11_reg_387(3),
      I2 => tmp_9_cast_fu_314_p1(3),
      I3 => tmp_11_reg_387(4),
      O => a_address0(4)
    );
\a_address0[5]_INST_0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"17FFE800"
    )
        port map (
      I0 => tmp_9_cast_fu_314_p1(3),
      I1 => tmp_11_reg_387(3),
      I2 => \a_address0[6]_INST_0_i_1_n_2\,
      I3 => tmp_11_reg_387(4),
      I4 => tmp_11_reg_387(5),
      O => a_address0(5)
    );
\a_address0[6]_INST_0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"577FFFFFA8800000"
    )
        port map (
      I0 => tmp_11_reg_387(4),
      I1 => \a_address0[6]_INST_0_i_1_n_2\,
      I2 => tmp_11_reg_387(3),
      I3 => tmp_9_cast_fu_314_p1(3),
      I4 => tmp_11_reg_387(5),
      I5 => tmp_11_reg_387(6),
      O => a_address0(6)
    );
\a_address0[6]_INST_0_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"D77E4228566A0000"
    )
        port map (
      I0 => \^res_address0\(2),
      I1 => \^res_address0\(1),
      I2 => \n_reg_157_reg_n_2_[1]\,
      I3 => \a_address0[2]_INST_0_i_1_n_2\,
      I4 => tmp_11_reg_387(2),
      I5 => tmp_11_reg_387(1),
      O => \a_address0[6]_INST_0_i_1_n_2\
    );
\a_address0[6]_INST_0_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1777FFFFE8880000"
    )
        port map (
      I0 => \^res_address0\(1),
      I1 => \n_reg_157_reg_n_2_[1]\,
      I2 => \n_reg_157_reg_n_2_[0]\,
      I3 => \^res_address0\(0),
      I4 => \^res_address0\(2),
      I5 => \j_reg_109_reg_n_2_[3]\,
      O => tmp_9_cast_fu_314_p1(3)
    );
\ap_CS_fsm[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F222"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_2_[0]\,
      I1 => ap_start,
      I2 => \^ap_ready\,
      I3 => ap_CS_fsm_state2,
      O => ap_NS_fsm(0)
    );
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F888"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_2_[0]\,
      I1 => ap_start,
      I2 => ap_NS_fsm11_out,
      I3 => ap_CS_fsm_state3,
      O => ap_NS_fsm(1)
    );
\ap_CS_fsm[2]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F4444444"
    )
        port map (
      I0 => \^ap_ready\,
      I1 => ap_CS_fsm_state2,
      I2 => p_shl_cast_fu_268_p1(3),
      I3 => p_shl_cast_fu_268_p1(2),
      I4 => \^res_ce0\,
      O => ap_NS_fsm(2)
    );
\ap_CS_fsm[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F4444444"
    )
        port map (
      I0 => ap_NS_fsm11_out,
      I1 => ap_CS_fsm_state3,
      I2 => \n_reg_157_reg_n_2_[1]\,
      I3 => \n_reg_157_reg_n_2_[0]\,
      I4 => \^b_ce0\,
      O => ap_NS_fsm(3)
    );
\ap_CS_fsm[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF70"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(3),
      I1 => p_shl_cast_fu_268_p1(2),
      I2 => \^res_ce0\,
      I3 => ap_CS_fsm_state6,
      O => ap_NS_fsm(4)
    );
\ap_CS_fsm[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2A"
    )
        port map (
      I0 => \^b_ce0\,
      I1 => \n_reg_157_reg_n_2_[0]\,
      I2 => \n_reg_157_reg_n_2_[1]\,
      O => \ap_CS_fsm[5]_i_1_n_2\
    );
\ap_CS_fsm_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(0),
      Q => \ap_CS_fsm_reg_n_2_[0]\,
      S => ap_rst
    );
\ap_CS_fsm_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(1),
      Q => ap_CS_fsm_state2,
      R => ap_rst
    );
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(2),
      Q => ap_CS_fsm_state3,
      R => ap_rst
    );
\ap_CS_fsm_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(3),
      Q => \^res_ce0\,
      R => ap_rst
    );
\ap_CS_fsm_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(4),
      Q => \^b_ce0\,
      R => ap_rst
    );
\ap_CS_fsm_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => \ap_CS_fsm[5]_i_1_n_2\,
      Q => ap_CS_fsm_state6,
      R => ap_rst
    );
ap_idle_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_2_[0]\,
      I1 => ap_start,
      O => ap_idle
    );
ap_ready_INST_0: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00040000"
    )
        port map (
      I0 => tmp_fu_180_p3(3),
      I1 => tmp_fu_180_p3(6),
      I2 => tmp_fu_180_p3(4),
      I3 => tmp_fu_180_p3(5),
      I4 => ap_CS_fsm_state2,
      O => \^ap_ready\
    );
\b_address0[0]_INST_0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => tmp_13_reg_392(0),
      I1 => \n_reg_157_reg_n_2_[0]\,
      O => b_address0(0)
    );
\b_address0[1]_INST_0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8778"
    )
        port map (
      I0 => tmp_13_reg_392(0),
      I1 => \n_reg_157_reg_n_2_[0]\,
      I2 => \n_reg_157_reg_n_2_[1]\,
      I3 => tmp_13_reg_392(1),
      O => b_address0(1)
    );
\b_address0[2]_INST_0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"077FF880"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[0]\,
      I1 => tmp_13_reg_392(0),
      I2 => tmp_13_reg_392(1),
      I3 => \n_reg_157_reg_n_2_[1]\,
      I4 => tmp_13_reg_392(2),
      O => b_address0(2)
    );
\b_address0[3]_INST_0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1777FFFFE8880000"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[1]\,
      I1 => tmp_13_reg_392(1),
      I2 => tmp_13_reg_392(0),
      I3 => \n_reg_157_reg_n_2_[0]\,
      I4 => tmp_13_reg_392(2),
      I5 => tmp_13_reg_392(3),
      O => b_address0(3)
    );
\i_1_reg_361[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => tmp_fu_180_p3(3),
      O => i_1_fu_174_p2(0)
    );
\i_1_reg_361[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => tmp_fu_180_p3(3),
      I1 => tmp_fu_180_p3(4),
      O => i_1_fu_174_p2(1)
    );
\i_1_reg_361[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => tmp_fu_180_p3(3),
      I1 => tmp_fu_180_p3(4),
      I2 => tmp_fu_180_p3(5),
      O => i_1_fu_174_p2(2)
    );
\i_1_reg_361[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => tmp_fu_180_p3(4),
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(5),
      I3 => tmp_fu_180_p3(6),
      O => i_1_fu_174_p2(3)
    );
\i_1_reg_361_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state2,
      D => i_1_fu_174_p2(0),
      Q => i_1_reg_361(0),
      R => '0'
    );
\i_1_reg_361_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state2,
      D => i_1_fu_174_p2(1),
      Q => i_1_reg_361(1),
      R => '0'
    );
\i_1_reg_361_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state2,
      D => i_1_fu_174_p2(2),
      Q => i_1_reg_361(2),
      R => '0'
    );
\i_1_reg_361_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state2,
      D => i_1_fu_174_p2(3),
      Q => i_1_reg_361(3),
      R => '0'
    );
\i_reg_97[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"08"
    )
        port map (
      I0 => ap_start,
      I1 => \ap_CS_fsm_reg_n_2_[0]\,
      I2 => ap_NS_fsm11_out,
      O => i_reg_97
    );
\i_reg_97[3]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000020"
    )
        port map (
      I0 => ap_CS_fsm_state3,
      I1 => \^res_address0\(0),
      I2 => \j_reg_109_reg_n_2_[3]\,
      I3 => \^res_address0\(1),
      I4 => \^res_address0\(2),
      O => ap_NS_fsm11_out
    );
\i_reg_97_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm11_out,
      D => i_1_reg_361(0),
      Q => tmp_fu_180_p3(3),
      R => i_reg_97
    );
\i_reg_97_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm11_out,
      D => i_1_reg_361(1),
      Q => tmp_fu_180_p3(4),
      R => i_reg_97
    );
\i_reg_97_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm11_out,
      D => i_1_reg_361(2),
      Q => tmp_fu_180_p3(5),
      R => i_reg_97
    );
\i_reg_97_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm11_out,
      D => i_1_reg_361(3),
      Q => tmp_fu_180_p3(6),
      R => i_reg_97
    );
\j_1_reg_374[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^res_address0\(0),
      O => j_1_fu_198_p2(0)
    );
\j_1_reg_374[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \^res_address0\(0),
      I1 => \^res_address0\(1),
      O => j_1_fu_198_p2(1)
    );
\j_1_reg_374[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \^res_address0\(0),
      I1 => \^res_address0\(1),
      I2 => \^res_address0\(2),
      O => j_1_fu_198_p2(2)
    );
\j_1_reg_374[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => \^res_address0\(1),
      I1 => \^res_address0\(0),
      I2 => \^res_address0\(2),
      I3 => \j_reg_109_reg_n_2_[3]\,
      O => j_1_fu_198_p2(3)
    );
\j_1_reg_374_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => j_1_fu_198_p2(0),
      Q => j_1_reg_374(0),
      R => '0'
    );
\j_1_reg_374_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => j_1_fu_198_p2(1),
      Q => j_1_reg_374(1),
      R => '0'
    );
\j_1_reg_374_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => j_1_fu_198_p2(2),
      Q => j_1_reg_374(2),
      R => '0'
    );
\j_1_reg_374_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_CS_fsm_state3,
      D => j_1_fu_198_p2(3),
      Q => j_1_reg_374(3),
      R => '0'
    );
\j_reg_109[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000FFEF0000"
    )
        port map (
      I0 => tmp_fu_180_p3(5),
      I1 => tmp_fu_180_p3(4),
      I2 => tmp_fu_180_p3(6),
      I3 => tmp_fu_180_p3(3),
      I4 => ap_CS_fsm_state2,
      I5 => \^res_we0\,
      O => j_reg_109
    );
\j_reg_109_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^res_we0\,
      D => j_1_reg_374(0),
      Q => \^res_address0\(0),
      R => j_reg_109
    );
\j_reg_109_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^res_we0\,
      D => j_1_reg_374(1),
      Q => \^res_address0\(1),
      R => j_reg_109
    );
\j_reg_109_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^res_we0\,
      D => j_1_reg_374(2),
      Q => \^res_address0\(2),
      R => j_reg_109
    );
\j_reg_109_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => \^res_we0\,
      D => j_1_reg_374(3),
      Q => \j_reg_109_reg_n_2_[3]\,
      R => j_reg_109
    );
\m_1_reg_382[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => \^res_ce0\,
      I2 => m_1_reg_382(0),
      O => \m_1_reg_382[0]_i_1_n_2\
    );
\m_1_reg_382[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6F60"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => p_shl_cast_fu_268_p1(3),
      I2 => \^res_ce0\,
      I3 => m_1_reg_382(1),
      O => \m_1_reg_382[1]_i_1_n_2\
    );
\m_1_reg_382_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \m_1_reg_382[0]_i_1_n_2\,
      Q => m_1_reg_382(0),
      R => '0'
    );
\m_1_reg_382_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \m_1_reg_382[1]_i_1_n_2\,
      Q => m_1_reg_382(1),
      R => '0'
    );
\m_reg_134_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => m_1_reg_382(0),
      Q => p_shl_cast_fu_268_p1(2),
      R => m_reg_134
    );
\m_reg_134_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => m_1_reg_382(1),
      Q => p_shl_cast_fu_268_p1(3),
      R => m_reg_134
    );
matrix_conv_mac_mbkb_U1: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv_mac_mbkb
     port map (
      E(0) => ap_NS_fsm1,
      P(15 downto 0) => sum_1_reg_145_reg(15 downto 0),
      Q(3) => ap_CS_fsm_state6,
      Q(2) => \^b_ce0\,
      Q(1) => \^res_ce0\,
      Q(0) => ap_CS_fsm_state3,
      SR(0) => m_reg_134,
      a_q0(7 downto 0) => a_q0(7 downto 0),
      ap_clk => ap_clk,
      b_q0(7 downto 0) => b_q0(7 downto 0),
      \^p\(1 downto 0) => p_shl_cast_fu_268_p1(3 downto 2),
      p_0(3) => \j_reg_109_reg_n_2_[3]\,
      p_0(2 downto 0) => \^res_address0\(2 downto 0),
      p_1 => \n_reg_157_reg_n_2_[1]\,
      p_2 => \n_reg_157_reg_n_2_[0]\
    );
\n_1_reg_400[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[0]\,
      I1 => \^b_ce0\,
      I2 => n_1_reg_400(0),
      O => \n_1_reg_400[0]_i_1_n_2\
    );
\n_1_reg_400[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6F60"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[0]\,
      I1 => \n_reg_157_reg_n_2_[1]\,
      I2 => \^b_ce0\,
      I3 => n_1_reg_400(1),
      O => \n_1_reg_400[1]_i_1_n_2\
    );
\n_1_reg_400_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \n_1_reg_400[0]_i_1_n_2\,
      Q => n_1_reg_400(0),
      R => '0'
    );
\n_1_reg_400_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \n_1_reg_400[1]_i_1_n_2\,
      Q => n_1_reg_400(1),
      R => '0'
    );
\n_reg_157[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CACAC0CAC0CAC0CA"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[0]\,
      I1 => n_1_reg_400(0),
      I2 => ap_CS_fsm_state6,
      I3 => \^res_ce0\,
      I4 => p_shl_cast_fu_268_p1(3),
      I5 => p_shl_cast_fu_268_p1(2),
      O => \n_reg_157[0]_i_1_n_2\
    );
\n_reg_157[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CACAC0CAC0CAC0CA"
    )
        port map (
      I0 => \n_reg_157_reg_n_2_[1]\,
      I1 => n_1_reg_400(1),
      I2 => ap_CS_fsm_state6,
      I3 => \^res_ce0\,
      I4 => p_shl_cast_fu_268_p1(3),
      I5 => p_shl_cast_fu_268_p1(2),
      O => \n_reg_157[1]_i_1_n_2\
    );
\n_reg_157_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \n_reg_157[0]_i_1_n_2\,
      Q => \n_reg_157_reg_n_2_[0]\,
      R => '0'
    );
\n_reg_157_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \n_reg_157[1]_i_1_n_2\,
      Q => \n_reg_157_reg_n_2_[1]\,
      R => '0'
    );
\res_address0[3]_INST_0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => tmp_10_cast_reg_366(3),
      I1 => \j_reg_109_reg_n_2_[3]\,
      O => \^res_address0\(3)
    );
\res_address0[4]_INST_0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => tmp_10_cast_reg_366(3),
      I1 => \j_reg_109_reg_n_2_[3]\,
      I2 => tmp_10_cast_reg_366(4),
      O => \^res_address0\(4)
    );
\res_address0[5]_INST_0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => \j_reg_109_reg_n_2_[3]\,
      I1 => tmp_10_cast_reg_366(3),
      I2 => tmp_10_cast_reg_366(4),
      I3 => tmp_10_cast_reg_366(5),
      O => \^res_address0\(5)
    );
res_we0_INST_0: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(3),
      I1 => p_shl_cast_fu_268_p1(2),
      I2 => \^res_ce0\,
      O => \^res_we0\
    );
\sum_reg_121_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(0),
      Q => res_d0(0),
      R => m_reg_134
    );
\sum_reg_121_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(10),
      Q => res_d0(10),
      R => m_reg_134
    );
\sum_reg_121_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(11),
      Q => res_d0(11),
      R => m_reg_134
    );
\sum_reg_121_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(12),
      Q => res_d0(12),
      R => m_reg_134
    );
\sum_reg_121_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(13),
      Q => res_d0(13),
      R => m_reg_134
    );
\sum_reg_121_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(14),
      Q => res_d0(14),
      R => m_reg_134
    );
\sum_reg_121_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(15),
      Q => res_d0(15),
      R => m_reg_134
    );
\sum_reg_121_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(1),
      Q => res_d0(1),
      R => m_reg_134
    );
\sum_reg_121_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(2),
      Q => res_d0(2),
      R => m_reg_134
    );
\sum_reg_121_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(3),
      Q => res_d0(3),
      R => m_reg_134
    );
\sum_reg_121_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(4),
      Q => res_d0(4),
      R => m_reg_134
    );
\sum_reg_121_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(5),
      Q => res_d0(5),
      R => m_reg_134
    );
\sum_reg_121_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(6),
      Q => res_d0(6),
      R => m_reg_134
    );
\sum_reg_121_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(7),
      Q => res_d0(7),
      R => m_reg_134
    );
\sum_reg_121_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(8),
      Q => res_d0(8),
      R => m_reg_134
    );
\sum_reg_121_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_NS_fsm1,
      D => sum_1_reg_145_reg(9),
      Q => res_d0(9),
      R => m_reg_134
    );
\tmp_10_cast_reg_366[3]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DDDDDDFD88888888"
    )
        port map (
      I0 => ap_CS_fsm_state2,
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(6),
      I3 => tmp_fu_180_p3(4),
      I4 => tmp_fu_180_p3(5),
      I5 => tmp_10_cast_reg_366(3),
      O => \tmp_10_cast_reg_366[3]_i_1_n_2\
    );
\tmp_10_cast_reg_366[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF55FF75AA00AA00"
    )
        port map (
      I0 => ap_CS_fsm_state2,
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(6),
      I3 => tmp_fu_180_p3(4),
      I4 => tmp_fu_180_p3(5),
      I5 => tmp_10_cast_reg_366(4),
      O => \tmp_10_cast_reg_366[4]_i_1_n_2\
    );
\tmp_10_cast_reg_366[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF5575AAAA0000"
    )
        port map (
      I0 => ap_CS_fsm_state2,
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(6),
      I3 => tmp_fu_180_p3(4),
      I4 => tmp_fu_180_p3(5),
      I5 => tmp_10_cast_reg_366(5),
      O => \tmp_10_cast_reg_366[5]_i_1_n_2\
    );
\tmp_10_cast_reg_366_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_10_cast_reg_366[3]_i_1_n_2\,
      Q => tmp_10_cast_reg_366(3),
      R => '0'
    );
\tmp_10_cast_reg_366_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_10_cast_reg_366[4]_i_1_n_2\,
      Q => tmp_10_cast_reg_366(4),
      R => '0'
    );
\tmp_10_cast_reg_366_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => \tmp_10_cast_reg_366[5]_i_1_n_2\,
      Q => tmp_10_cast_reg_366(5),
      R => '0'
    );
\tmp_11_reg_387[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => tmp_fu_180_p3(3),
      O => tmp_4_fu_220_p2(0)
    );
\tmp_11_reg_387[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8778"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(4),
      I3 => p_shl_cast_fu_268_p1(3),
      O => tmp_4_fu_220_p2(1)
    );
\tmp_11_reg_387[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5695956A"
    )
        port map (
      I0 => tmp_fu_180_p3(5),
      I1 => tmp_fu_180_p3(4),
      I2 => p_shl_cast_fu_268_p1(3),
      I3 => tmp_fu_180_p3(3),
      I4 => p_shl_cast_fu_268_p1(2),
      O => p_0_in(2)
    );
\tmp_11_reg_387[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"86611887799EE778"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => tmp_fu_180_p3(3),
      I2 => tmp_fu_180_p3(4),
      I3 => p_shl_cast_fu_268_p1(3),
      I4 => tmp_fu_180_p3(5),
      I5 => tmp_fu_180_p3(6),
      O => p_0_in(3)
    );
\tmp_11_reg_387[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"533612241224366C"
    )
        port map (
      I0 => tmp_fu_180_p3(6),
      I1 => tmp_fu_180_p3(5),
      I2 => tmp_fu_180_p3(4),
      I3 => p_shl_cast_fu_268_p1(3),
      I4 => p_shl_cast_fu_268_p1(2),
      I5 => tmp_fu_180_p3(3),
      O => p_0_in(4)
    );
\tmp_11_reg_387[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"2A"
    )
        port map (
      I0 => \^res_ce0\,
      I1 => p_shl_cast_fu_268_p1(3),
      I2 => p_shl_cast_fu_268_p1(2),
      O => n_reg_1570
    );
\tmp_11_reg_387[6]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"444666626662222A"
    )
        port map (
      I0 => tmp_fu_180_p3(6),
      I1 => tmp_fu_180_p3(5),
      I2 => tmp_fu_180_p3(3),
      I3 => p_shl_cast_fu_268_p1(2),
      I4 => p_shl_cast_fu_268_p1(3),
      I5 => tmp_fu_180_p3(4),
      O => p_0_in(5)
    );
\tmp_11_reg_387_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => tmp_4_fu_220_p2(0),
      Q => tmp_11_reg_387(1),
      R => '0'
    );
\tmp_11_reg_387_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => tmp_4_fu_220_p2(1),
      Q => tmp_11_reg_387(2),
      R => '0'
    );
\tmp_11_reg_387_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => p_0_in(2),
      Q => tmp_11_reg_387(3),
      R => '0'
    );
\tmp_11_reg_387_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => p_0_in(3),
      Q => tmp_11_reg_387(4),
      R => '0'
    );
\tmp_11_reg_387_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => p_0_in(4),
      Q => tmp_11_reg_387(5),
      R => '0'
    );
\tmp_11_reg_387_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => p_0_in(5),
      Q => tmp_11_reg_387(6),
      R => '0'
    );
\tmp_13_reg_392[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => p_shl_cast_fu_268_p1(3),
      O => \tmp_13_reg_392[1]_i_1_n_2\
    );
\tmp_13_reg_392[2]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(3),
      I1 => p_shl_cast_fu_268_p1(2),
      O => \tmp_13_reg_392[2]_i_1_n_2\
    );
\tmp_13_reg_392[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => p_shl_cast_fu_268_p1(2),
      I1 => p_shl_cast_fu_268_p1(3),
      O => \tmp_13_reg_392[3]_i_1_n_2\
    );
\tmp_13_reg_392_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => p_shl_cast_fu_268_p1(2),
      Q => tmp_13_reg_392(0),
      R => '0'
    );
\tmp_13_reg_392_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => \tmp_13_reg_392[1]_i_1_n_2\,
      Q => tmp_13_reg_392(1),
      R => '0'
    );
\tmp_13_reg_392_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => \tmp_13_reg_392[2]_i_1_n_2\,
      Q => tmp_13_reg_392(2),
      R => '0'
    );
\tmp_13_reg_392_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => n_reg_1570,
      D => \tmp_13_reg_392[3]_i_1_n_2\,
      Q => tmp_13_reg_392(3),
      R => '0'
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    a_ce0 : out STD_LOGIC;
    b_ce0 : out STD_LOGIC;
    res_ce0 : out STD_LOGIC;
    res_we0 : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    a_address0 : out STD_LOGIC_VECTOR ( 6 downto 0 );
    a_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    b_address0 : out STD_LOGIC_VECTOR ( 3 downto 0 );
    b_q0 : in STD_LOGIC_VECTOR ( 7 downto 0 );
    res_address0 : out STD_LOGIC_VECTOR ( 5 downto 0 );
    res_d0 : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "system_matrix_conv_0_0,matrix_conv,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "matrix_conv,Vivado 2018.3";
  attribute hls_module : string;
  attribute hls_module of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of inst : label is "6'b000001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "6'b000010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "6'b000100";
  attribute ap_ST_fsm_state4 : string;
  attribute ap_ST_fsm_state4 of inst : label is "6'b001000";
  attribute ap_ST_fsm_state5 : string;
  attribute ap_ST_fsm_state5 of inst : label is "6'b010000";
  attribute ap_ST_fsm_state6 : string;
  attribute ap_ST_fsm_state6 of inst : label is "6'b100000";
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 ap_clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN system_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_done : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done";
  attribute X_INTERFACE_INFO of ap_idle : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle";
  attribute X_INTERFACE_INFO of ap_ready : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready";
  attribute X_INTERFACE_PARAMETER of ap_ready : signal is "XIL_INTERFACENAME ap_ctrl, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {start {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} done {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} idle {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}} ready {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of ap_rst : signal is "xilinx.com:signal:reset:1.0 ap_rst RST";
  attribute X_INTERFACE_PARAMETER of ap_rst : signal is "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_start : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start";
  attribute X_INTERFACE_INFO of a_address0 : signal is "xilinx.com:signal:data:1.0 a_address0 DATA";
  attribute X_INTERFACE_PARAMETER of a_address0 : signal is "XIL_INTERFACENAME a_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 7} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of a_q0 : signal is "xilinx.com:signal:data:1.0 a_q0 DATA";
  attribute X_INTERFACE_PARAMETER of a_q0 : signal is "XIL_INTERFACENAME a_q0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}";
  attribute X_INTERFACE_INFO of b_address0 : signal is "xilinx.com:signal:data:1.0 b_address0 DATA";
  attribute X_INTERFACE_PARAMETER of b_address0 : signal is "XIL_INTERFACENAME b_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 4} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of b_q0 : signal is "xilinx.com:signal:data:1.0 b_q0 DATA";
  attribute X_INTERFACE_PARAMETER of b_q0 : signal is "XIL_INTERFACENAME b_q0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}";
  attribute X_INTERFACE_INFO of res_address0 : signal is "xilinx.com:signal:data:1.0 res_address0 DATA";
  attribute X_INTERFACE_PARAMETER of res_address0 : signal is "XIL_INTERFACENAME res_address0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 6} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}";
  attribute X_INTERFACE_INFO of res_d0 : signal is "xilinx.com:signal:data:1.0 res_d0 DATA";
  attribute X_INTERFACE_PARAMETER of res_d0 : signal is "XIL_INTERFACENAME res_d0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {DATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 16} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}";
begin
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_matrix_conv
     port map (
      a_address0(6 downto 0) => a_address0(6 downto 0),
      a_ce0 => a_ce0,
      a_q0(7 downto 0) => a_q0(7 downto 0),
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_rst => ap_rst,
      ap_start => ap_start,
      b_address0(3 downto 0) => b_address0(3 downto 0),
      b_ce0 => b_ce0,
      b_q0(7 downto 0) => b_q0(7 downto 0),
      res_address0(5 downto 0) => res_address0(5 downto 0),
      res_ce0 => res_ce0,
      res_d0(15 downto 0) => res_d0(15 downto 0),
      res_we0 => res_we0
    );
end STRUCTURE;
