Add-Type -AssemblyName System.Windows.Forms

$result = [System.Windows.Forms.MessageBox]::Show("Do you want to shutdown the PC?", "Shutdown Confirmation", [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question)

if ($result -eq [System.Windows.Forms.DialogResult]::Yes) {
    Stop-Computer -Force
} else {
}
