module top_module (
    input wire clk,
    input wire rst_n,
    input wire [4:0] btns,
    output wire [3:0] gpio_out,
    output wire [7:0] led_out
);

    wire fclk_clk0;
    wire fclk_reset0_n;
    wire axi_gpio_0_gpio;
    wire axi_gpio_0_gpio_o;
    wire axi_gpio_0_gpio_t;
    wire proc_sys_reset_0_n;

    wire rsta_busy_0;
    wire blk_mem_gen_0_rsta_busy;
    wire btns_5bits;

    wire [31:0] mem_data;
    wire mem_addr;

    assign fclk_clk0 = clk;
    assign fclk_reset0_n = rst_n;

    assign gpio_out = btns[3:0];

    
endmodule
