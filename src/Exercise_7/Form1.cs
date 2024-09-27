using System;
using System.Windows.Forms;

namespace Exercise_7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var firstNumber = int.Parse(txtFirstNumber.Text);
            var secondNumber = int.Parse(txtSecondNumber.Text);

            var sum = firstNumber + secondNumber;

            txtResult.Text = sum.ToString();
        }
    }
}
