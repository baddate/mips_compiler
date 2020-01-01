	addi $t1, $Zero, 1
	add $t1, $Zero, $s1
delay:
	addi $t2, $Zero, 10
	add $t2, $Zero, $s2
	addi $t3, $Zero, 30000
	add $t3, $Zero, $s2
label0:
	addi $t4, $Zero, 0
	sub $t4, $s2, $t0
	bltz $t0, label1
	j label2
label1:
	addi $t5, $Zero, 1
	sub $s2, $t5, $t6
	add $t6, $Zero, $s2
	j label0
label2:
	lw $s0, 8($sp)
	lw $s1, 12($sp)
	lw $s2, 16($sp)
	lw $s3, 20($sp)
	lw $s4, 24($sp)
	lw $s5, 28($sp)
	lw $s6, 32($sp)
	lw $s7, 36($sp)
	lw $fp,0($sp)
	lw $sp, 4($sp)
	jr $ra
test:
	addi $t0, $sp, -4
	lw $a0, 0($t0)
	addi $t7, $Zero, 0
	sub $t7, $a0, $t0
	bltz $t0, label3
	j label4
label3:
	addi $t8, $Zero, 1
	sub $a0, $t8, $t9
	add $t9, $Zero, $a0
	j label5
label4:
	addi $t9, $Zero, 1
	add $a0, $t9, $t1
	add $t1, $Zero, $a0
label5:
	lw $s0, 8($sp)
	lw $s1, 12($sp)
	lw $s2, 16($sp)
	lw $s3, 20($sp)
	lw $s4, 24($sp)
	lw $s5, 28($sp)
	lw $s6, 32($sp)
	lw $s7, 36($sp)
	lw $fp,0($sp)
	lw $sp, 4($sp)
	add $a0, $Zero, $v0
	jr $ra
main:
	sw $fp,0($sp)
	sw $sp, 8($sp)
	addi $fp, $sp, 8
	addi $sp, $sp, 12
	addi $t1, $Zero, 17
	add $t1, $Zero, $s1
	addi $t2, $Zero, 0
	add $t2, $Zero, $s2
label6:
	addi $t3, $Zero, 1
	addi $t4, $Zero, 0
	bne $t3, $t4, label7
	j label8
label7:
	addi $t5, $Zero, 1
	add $s2, $t5, $t6
	add $t6, $Zero, $s2
	addi $sp, $sp, 4
	sw $s2, 0($sp)
	sw $s0, 8($sp)
	sw $s1, 12($sp)
	sw $s2, 16($sp)
	sw $s3, 20($sp)
	sw $s4, 24($sp)
	sw $s5, 28($sp)
	sw $s6, 32($sp)
	sw $s7, 36($sp)
	addi $sp, $sp, 4
	sw $fp,0($sp)
	sw $sp, 4($sp)
	jal test
	addi $t7, $Zero, 2
	add $t8, $t7, $t9
	add $t9, $Zero, $s2
	addi $t1, $Zero, -928
	sw $s2, $t1($Zero)
	addi $t2, $Zero, -926
	addi $t3, $Zero, 16
	slrv $t4, $s2, $t3
	sw $t4, $t2($Zero)
	addi $t5, $Zero, 10
	sub $t5, $s2, $t0
	bltz $t0, label9
	j label10
label9:
	addi $t6, $Zero, 0
	add $t6, $Zero, $s2
label10:
	sw $s0, 8($sp)
	sw $s1, 12($sp)
	sw $s2, 16($sp)
	sw $s3, 20($sp)
	sw $s4, 24($sp)
	sw $s5, 28($sp)
	sw $s6, 32($sp)
	sw $s7, 36($sp)
	addi $sp, $sp, 4
	sw $fp,0($sp)
	sw $sp, 4($sp)
	jal delay
	j label6
label8:
	addi $t7, $Zero, 0
	addi $t0, $Zero, 8192
	jr $t0
