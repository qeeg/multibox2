#pragma once

enum
{
    OP_2BYTE = (1ull << 0),

    OP_FPU = (1ull << 0),
    OP_I486 = (1ull << 1),
};

const cpu_t::opcode_info cpu_t::cpu_opcode_table[] = {
    {0x73, 0, 0, &cpu_t::jmp_nc_i8, false},
    {0x75, 0, 0, &cpu_t::jmp_nz_i8, false},
    {0x79, 0, 0, &cpu_t::jmp_ns_i8, false},
    {0x7b, 0, 0, &cpu_t::jmp_np_i8, false},
    {0x90, 0, 0, &cpu_t::nop, false},
    {0x9e, 0, 0, &cpu_t::sahf, false},
    {0x9f, 0, 0, &cpu_t::lahf, false},
    {0xb0, 0, 0, &cpu_t::mov_al_i8, false},
    {0xb1, 0, 0, &cpu_t::mov_cl_i8, false},
    {0xb2, 0, 0, &cpu_t::mov_dl_i8, false},
    {0xb3, 0, 0, &cpu_t::mov_bl_i8, false},
    {0xb4, 0, 0, &cpu_t::mov_ah_i8, false},
    {0xb5, 0, 0, &cpu_t::mov_ch_i8, false},
    {0xb6, 0, 0, &cpu_t::mov_dh_i8, false},
    {0xb7, 0, 0, &cpu_t::mov_bh_i8, false},
    {0xb8, 0, 0, &cpu_t::mov_ax_i16, false},
    {0xb9, 0, 0, &cpu_t::mov_cx_i16, false},
    {0xba, 0, 0, &cpu_t::mov_dx_i16, false},
    {0xbb, 0, 0, &cpu_t::mov_bx_i16, false},
    {0xbc, 0, 0, &cpu_t::mov_sp_i16, false},
    {0xbd, 0, 0, &cpu_t::mov_bp_i16, false},
    {0xbe, 0, 0, &cpu_t::mov_si_i16, false},
    {0xbf, 0, 0, &cpu_t::mov_di_i16, false},
    {0xe4, 0, 0, &cpu_t::in_al_i8, false},
    {0xe6, 0, 0, &cpu_t::out_al_i8, false},
    {0xe9, 0, 0, &cpu_t::jmp_rel16, false},
    {0xea, 0, 0, &cpu_t::jmp_abs16, false},
    {0xeb, 0, 0, &cpu_t::jmp_rel8, false},
    {0xfa, 0, 0, &cpu_t::cli, false},
    {0xfb, 0, 0, &cpu_t::sti, false},
    {0xfc, 0, 0, &cpu_t::cld, false},
};