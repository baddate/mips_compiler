delay:
	addi $t1, $Zero, 30000
	add $s1, $Zero, $t1
label0:
	addi $t2, $Zero, 0
	sub $t0, $t2, $s1
	bltz $t0, label1
	j label2
label1:
	addi $t3, $Zero, 1
	sub $t4, $s1, $t3
	add $s1, $Zero, $t4
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
	lw $fp, 0($sp)
	sw $ra,4($sp)
	lw $sp, 8($sp)
	jr $ra
main:
	sw $fp,0($sp)
	sw $ra,4($sp)
	sw $sp, 8($sp)
	addi $fp, $sp, 8
	addi $sp, $sp, 12
	addi $t1, $Zero, 0
	add $s1, $Zero, $t1
label3:
	addi $t2, $Zero, 1
	addi $t3, $Zero, 0
	bne $t2, $t3, label4
	j label5
label4:
	addi $t4, $Zero, 2
	add $t5, $s1, $t4
	add $s1, $Zero, $t5
	addi $t6, $Zero, -928
	sw $s1, -928($Zero)
	addi $t7, $Zero, 10
	sub $t0, $t7, $s1
	bltz $t0, label6
	j label7
label6:
	addi $t8, $Zero, 0
	add $s1, $Zero, $t8
label7:
	addi $sp, $sp, 4
	sw $fp,0($sp)
	sw $ra,4($sp)
	sw $sp, 8($sp)
	sw $s0, 12($sp)
	sw $s1, 16($sp)
	sw $s2, 20($sp)
	sw $s3, 24($sp)
	sw $s4, 28($sp)
	sw $s5, 32($sp)
	sw $s6, 36($sp)
	sw $s7, 40($sp)
	jal delay
	j label3
label5:
	addi $t9, $Zero, 0
	addi $t0, $Zero, 8192
	jr $t0
