procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(59, 212);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(122, 47);
        self.button1.TabIndex := 0;
        self.button1.Text := 'да';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(229, 212);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(124, 47);
        self.button2.TabIndex := 1;
        self.button2.Text := 'нет';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(162, 41);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(76, 23);
        self.button3.TabIndex := 2;
        self.button3.Text := 'начать';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(59, 150);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(294, 20);
        self.textBox1.TabIndex := 5;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(124, 301);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(173, 20);
        self.textBox2.TabIndex := 6;
        self.textBox2.TextChanged += textBox2_TextChanged;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(408, 349);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
