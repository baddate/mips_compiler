	addi $t1, $Zero, 1
	sw $t1, 7923($Zero)
	lw $t2, 7923($Zero)
delay:
	addi $t2, $Zero, 10
	sw $t2, 7923($Zero)
	lw $t3, 7923($Zero)
	addi $t3, $Zero, 30000
	sw $t3, 7923($Zero)
	lw $s2, 7923($Zero)
label0:
	addi $t4, $Zero, 0
	sub $t0, $t4, $s2
	blgz $t0, label1
	j label2
label1:
	addi $t5, $Zero, 1
	sub $s2, $t5, $t6
	sw $t6, 7923($Zero)
	lw $s2, 7923($Zero)
	j label0
label2:
test:
	addi $sp, $sp, -4
	sw $sp, $a0
	addi $t7, $Zero, 0
	sub $t0, $t7, $a0
	blgz $t0, label3
	j label4
label3:
	addi $t8, $Zero, 1
	sub $a0, $t8, $t9
	sw $t9, 7923($Zero)
	lw $a0, 7923($Zero)
	j label5
label4:
	addi $t9, $Zero, 1
	add $a0, $t9, $t1
	sw $t1, 7923($Zero)
	lw $a0, 7923($Zero)
label5:
main:
	sw $sp,0($sp)
	sw $fp, 8($sp)
	addi $sp, $sp, 8
	addi $fp, $sp, 12
	addi $t2, $Zero, 17
	sw $t2, 7923($Zero)
	lw $t3, 7923($Zero)
	addi $t3, $Zero, 0
	sw $t3, 7923($Zero)
	lw $t4, 7923($Zero)
label6:
	addi $t4, $Zero, 1
	addi $t5, $Zero, 0
	bne $t4, $t5, label7
	j label8
label7:
	addi $t6, $Zero, 1
	add $s3, $t6, $t7
	sw $t7, 7923($Zero)
	lw $s3, 7923($Zero)
	addi $sp, $sp, 4
	sw $s3, 4($sp)
	addi $sp, $sp, 4
	sw $sp,0($sp)
	sw $ra, 4($sp)
	sw $fp, 8($sp)
	jal test
	sw $t8, 7923($Zero)
	lw $s3, 7923($Zero)
	sw -1, 7923($Zero)
	lw $t9, 7923($Zero)
	sw $s3, temp20($Zero)
	sw -1, 7923($Zero)
	lw $t1, 7923($Zero)
	addi $t2, $Zero, 16
	slrv $t3, $s3, $t2
	sw $t3, temp21($Zero)
	addi $t4, $Zero, 10
	sub $t0, $t4, $s3
	blgz $t0, label9
	j label10
label9:
	addi $t5, $Zero, 0
	sw $t5, 7923($Zero)
	lw $s3, 7923($Zero)
label10:
	addi $sp, $sp, 4
	sw $sp,0($sp)
	sw $ra, 4($sp)
	sw $fp, 8($sp)
	jal delay
	j label6
label8:
	addi $t6, $Zero, 0
	lw $sp,0($sp)
	lw $ra, 4($sp)
	lw $fp, 8($sp)
	 j $ra