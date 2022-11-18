## PC + Instr Mem
- Input to this part:
    - clk
    - rst
    - PCsrc from control unit
    - ImmOp from sign extend
- Output of this part:
    - RD, the 32-bit instruction
- ADDRESS_WIDTH is set to 8 for testing purposes. If it were 32, then $2^{32}$ elements need to be created in the **.mem** file
- Simulation results:
 ![image](https://user-images.githubusercontent.com/58468284/202775519-1daa46b6-3444-4972-a34b-739d01dde015.png)
- Data in Instr Mem:
![image](https://user-images.githubusercontent.com/58468284/202775693-793167ac-1781-4e6c-b09c-241038bca914.png)
- In the testbench, if **PCsrc**=1, PC = PC+8. This is true in the simulation result:
A: 44->52 and the data changes accordingly
![image](https://user-images.githubusercontent.com/58468284/202775938-60c1e88c-0500-4d08-8bf0-05a5f28807af.png)
- If **rst**=1, then PC becomes 0
![image](https://user-images.githubusercontent.com/58468284/202776741-e71c6614-a8ea-4a98-ba5d-9ab6af015e7f.png)