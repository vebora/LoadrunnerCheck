Action()
{
	char* json_input = "{"
		"\"firstName\": \"John\","
		"\"lastName\": \"Smith\","
		"\"address\": {"
		"    \"streetAddress\":\"21 2nd Street\","
		"    \"city\":\"New York\","
		"    \"state\":\"NY\","
		"    \"postalCode\":\"10021\""
		"}"		
		"}";
	lr_save_string(json_input,"temp1");
	return 0;
}
