module divisor #(parameter fin = 100000000, fout = 25000000)( clki, clko);
    input clki;
    output reg clko = 0;

    reg [21:0] count = 0;

    always @ (posedge clki) begin
            count = count + 1;
            if (count == 4) begin
                clko = ~clko;
                count = 0;
            end
        
    end
endmodule
