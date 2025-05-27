onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib MICRO_opt

do {wave.do}

view wave
view structure
view signals

do {MICRO.udo}

run -all

quit -force
