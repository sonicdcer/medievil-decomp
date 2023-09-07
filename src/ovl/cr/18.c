#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#define STRINGIFY_(x) #x
#define STRINGIFY(x) STRINGIFY_(x)

#ifndef PERMUTER

#ifndef INCLUDE_ASM

#ifdef INCLUDE_ASM_NEW
#define INCLUDE_ASM(FOLDER, NAME)                                              \
    __asm__(".section .text\n"                                                 \
            "\t.align\t2\n"                                                    \
            "\t.globl\t" #NAME "\n"                                            \
            "\t.ent\t" #NAME "\n" #NAME ":\n"                                  \
            ".include \"asm/" VERSION "/" FOLDER "/" #NAME ".s\"\n"            \
            "\t.set reorder\n"                                                 \
            "\t.set at\n"                                                      \
            "\t.end\t" #NAME)
#else
#define INCLUDE_ASM(FOLDER, NAME)                                              \
    __asm__(".section .text\n"                                                 \
            "\t.align\t2\n"                                                    \
            "\t.globl\t" #NAME "\n"                                            \
            "\t.ent\t" #NAME "\n" #NAME ":\n"                                  \
            ".include \"" FOLDER "/" #NAME ".s\"\n"                            \
            "\t.set reorder\n"                                                 \
            "\t.set at\n"                                                      \
            "\t.end\t" #NAME);
#endif

#endif

// omit .global
#ifdef USE_INCLUDE_ASM
__asm__(".include \"macro.inc\"\n");
#endif

#else
#define INCLUDE_ASM(FOLDER, NAME)
#endif

#endif


INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010018);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010278);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010470);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010588);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010638);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_8001072C);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_8001078C);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_800107A0);

INCLUDE_ASM("asm/ovl/cr/nonmatchings/18", func_80010838);
