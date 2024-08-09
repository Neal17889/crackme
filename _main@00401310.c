
int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  int iVar1;
  size_t in_stack_ffffffc0;
  char local_1c [24];
  
  __alloca(in_stack_ffffffc0);
  ___main();
                    /* [BAD 2] _printf */
  _printf("IOLI Crackme Level 0x00\n");
                    /* [BAD 2] _printf */
  _printf("Password: ");
                    /* [BAD 0] _scanf */
  _scanf("%s",local_1c);
  iVar1 = _strcmp(local_1c,"250382");
  if (iVar1 == 0) {
                    /* [BAD 2] _printf */
    _printf("Password OK :)\n");
  }
  else {
                    /* [BAD 2] _printf */
    _printf("Invalid Password!\n");
  }
  return 0;
}

