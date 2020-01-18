function login()
{
	var a=document.getElementById("n1").value;
	var b=document.getElementById("n2").value;
	//var email=document.login.em;
	//var pw=document.login.pass;
	if(valemail(a))
	{
	if(validpassword(5,12,b))
	{		
	}
	}
		function valemail(a)
		{
			var pat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
			if(a.match(pat))
			{
				//alert("email is correct");
				return true;
			}
			else
			{
				alert("enter Email address");
				a.focus();
				return false;
			}
		}
		function validpassword(mi,mx,pw)
		{
			var pw_len = pw.length;
			if(pw_len == 0 || pw_len <= mi || pw_len > mx )
			{
				alert("password should not be empty / length between "+mx+" to "+mi);
				pw.focus();
				return false;
			}
			else
			{
				alert("Login Succesfull click on Onboard Schemes for more details");
				return true;
			}
		}
}