Section 2: The Register File, ALU and the related MUX

**1. Register File**

Register:

i) rs1 
- Instruction [19:15]
- loads the data at memory address AD1 --> RD1 = ram_array[AD1]

ii) rs2
- Instruction [24:20]
- loads the data at memory address AD2 --> RD2 = ram_array[AD2]

Destination Register: rd
- Instruction [11:7]

Write enable: WE3
- Writes the data WD3 into the data at memory address AD3 (rd) --> ram_array[AD3] <= WD3

Output: a0
- ram_array[10], register x0 always gives constant value 0
- This can be seen in the RISC-V Registers table.
(https://user-images.githubusercontent.com/64958532/202964687-7191e1ef-003f-406d-9d02-c236d66fa918.png")

**2. ALU**

2 instructions: 

i) SUM 

   ALUCtrl[2:0] = [000]
   
   ALUout = ALUop1 + ALUop2 

   Since the sum function is performed by **addi**, it only adds RD1 and sign-extended ImmOp to the ALUout.
   
ii) EQ

Test the equality of both inputs, ALUop1 and ALUop2.

**3. MUX**

ALUsrc = 1 --> RD2

ALUsrc = 0 --> sign extended ImmOp

**Testbench**


