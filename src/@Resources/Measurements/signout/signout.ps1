Add-Type -AssemblyName System.Windows.Forms

$result = [System.Windows.Forms.MessageBox]::Show("Do you want to sign out?", "SignOut Confirmation", [System.Windows.Forms.MessageBoxButtons]::YesNo, [System.Windows.Forms.MessageBoxIcon]::Question)

if ($result -eq [System.Windows.Forms.DialogResult]::Yes) {
    shutdown /l
} else {
}
