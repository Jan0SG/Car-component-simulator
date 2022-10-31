#include<iostream>




using namespace std;

class motor{
	protected:
		int interruptor;
		int llave;
	
	public:
		motor(int i){
			setInterruptor(i);
		}
		void estadomotor(){
			if(interruptor==0){
				cout<<"\nEngine is off.";
			}
			if(interruptor==1){
				cout<<"\nEngine is on.";
			}
		}
		
		void arrancar(){
			cout<<"\nStarting engine...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nEngine is on!";
		}
		
		void apagar(){
			cout<<"\nShutting down engine...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nEngine is off!";
		}
		
	void setInterruptor(int i){interruptor = i;}
	int getInterruptor(){return interruptor;}
};

class rueda{
	protected:
		int i;
	public:
		void inflar(){
			cout<<"\nInflating tire...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nTire inflated!";
		}
		
		void desinflar(){
			cout<<"\nDeflating tire...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nTire deflated!";
		}
		
		void rueda1(){
			cout<<"\n\nTIRE 1";
			i=0; 
			do{	
				if(i==0){
				cout<<"\nTire is inflated.";
				cout<<"\n\nDo you want to deflate the tire?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>i;
				if(i<0 or i>1){
					cout<<"\n\nPlease choose one of the options.\n\n";
				}
					if(i==0){
						cout<<"The tire is still inflated.";
					}
					if(i==1){
						desinflar();
						i=0;
						if(i==0){
							cout<<"\nTire is deflated.";
							cout<<"\n\nDo you want to inflate the tire?";
							cout<<"\n0- No";
							cout<<"\n1- Yes";
							cout<<"\nYour choice: "; cin>>i;
							
							if(i==0){
								cout<<"The tire is still deflated";
							}
							if(i==1){
								inflar();
							}
						}
					}
				}	
			}while(i<0 or i>1);
		}
		
		void rueda2(){
			cout<<"\n\nTIRE 2";
			i=0; 
			do{	
				if(i==0){
				cout<<"\nTire is inflated.";
				cout<<"\n\nDo you want to deflate the tire?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>i;
				if(i<0 or i>1){
					cout<<"\n\nPlease choose one of the options.\n\n";
				}
					if(i==0){
						cout<<"The tire is still inflated.";
					}
					if(i==1){
						desinflar();
						i=0;
						if(i==0){
							cout<<"\nTire is deflated.";
							cout<<"\n\nDo you want to inflate the tire?";
							cout<<"\n0- No";
							cout<<"\n1- Yes";
							cout<<"\nYour choice: "; cin>>i;
							
							if(i==0){
								cout<<"The tire is still deflated";
							}
							if(i==1){
								inflar();
							}
						}
					}
				}	
			}while(i<0 or i>1);
		}
		
		void rueda3(){
			cout<<"\n\nTIRE 3";
			i=0; 
			do{	
				if(i==0){
				cout<<"\nTire is inflated.";
				cout<<"\n\nDo you want to deflate the tire?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>i;
				if(i<0 or i>1){
					cout<<"\n\nPlease choose one of the options.\n\n";
				}
					if(i==0){
						cout<<"The tire is still inflated.";
					}
					if(i==1){
						desinflar();
						i=0;
						if(i==0){
							cout<<"\nTire is deflated.";
							cout<<"\n\nDo you want to inflate the tire?";
							cout<<"\n0- No";
							cout<<"\n1- Yes";
							cout<<"\nYour choice: "; cin>>i;
							
							if(i==0){
								cout<<"The tire is still deflated";
							}
							if(i==1){
								inflar();
							}
						}
					}
				}	
			}while(i<0 or i>1);
		}
		
		void rueda4(){
			cout<<"\n\nTIRE 4";
			i=0; 
			do{	
				if(i==0){
				cout<<"\nTire is inflated.";
				cout<<"\n\nDo you want to deflate the tire?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>i;
				if(i<0 or i>1){
					cout<<"\n\nPlease choose one of the options.\n\n";
				}
					if(i==0){
						cout<<"The tire is still inflated.";
					}
					if(i==1){
						desinflar();
						i=0;
						if(i==0){
							cout<<"\nTire is deflated.";
							cout<<"\n\nDo you want to inflate the tire?";
							cout<<"\n0- No";
							cout<<"\n1- Yes";
							cout<<"\nYour choice: "; cin>>i;
							
							if(i==0){
								cout<<"The tire is still deflated";
							}
							if(i==1){
								inflar();
							}
						}
					}
				}	
			}while(i<0 or i>1);
		}
		
};

class ventana{
	public:
		void abrirventana(){
			cout<<"\nOpening window...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nWindow opened!";
		}
		
		void cerrarventana(){
			cout<<"\nClosing window...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nWindow closed!";
		}
		
};

class puerta: public ventana{
	protected:	
		int i, j;
	
	public:
	
		void abrirpuerta(){
			cout<<"\nOpening door...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nDoor opened!";
		}
		
		void cerrarpuerta(){
			cout<<"\nClosing door...";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\n.";
			cout<<"\nDoor closed!";
		}
		
		void puerta1(){
			cout<<"\n\nDOOR 1";
			i=0; j=0;
			do{
				if(i==0){
					cout<<"\nDoor is closed.";
					cout<<"\n\nDo you want to open the door?";
					cout<<"\n0- No";
					cout<<"\n1- Yes";
					cout<<"\nYour choice: "; cin>>i;
					if(i<0 or i>1){
						cout<<"\n\nPlease choose one of the options\n\n";
					}
				}
			}while(i<0 or i>1);
				if(i==0){
					cout<<"\nDoor is still closed";
					if(j==0){
						cout<<"\nWindow is closed.";
						cout<<"\n\nDo you want to open the window?";
						cout<<"\n0- No";
						cout<<"\n1- Yes";
						cout<<"\nYour choice: "; cin>>j;
					}
						if(j==0){
							cout<<"\nWindow is still closed.";
						}
						if(j==1){
							abrirventana();
							j=2;
						}
						if(j==2){
							if(j==2){
								cout<<"\nWindow is open.";
								cout<<"\n\nDo you want to close the window?";
								cout<<"\n0- No";
								cout<<"\n1- Yes";
								cout<<"\nYour choice: "; cin>>j;
							}
							if(j==0){
								cout<<"\nWindow is still open";
							}
							if(j==1){
							cerrarventana();
							}
						}
					j=0;
				}
				if(i==1){
					abrirpuerta();
					if(j==0){
						cout<<"\nWindow is closed.";
						cout<<"\n\nDo you want to open the window?";
						cout<<"\n0- No";
						cout<<"\n1- Yes";
						cout<<"\nYour choice: "; cin>>j;
					}
						if(j==0){
							cout<<"\nWindow is still closed.";
						}
						if(j==1){
							abrirventana();
							j=2;
						}
						if(j==2){
							if(j==2){
								cout<<"\nWindow is open.";
								cout<<"\n\nDo you want to close the window?";
								cout<<"\n0- No";
								cout<<"\n1- Yes";
								cout<<"\nYour choice: "; cin>>j;
							}
							if(j==0){
								cout<<"\nWindow is still open";
							}
							if(j==1){
							cerrarventana();
							}
						
					j=0;
				}
			}do{
				if(i==1){
					cout<<"\nDoor is open.";
					cout<<"\n\nDo you want to close the door?";
					cout<<"\n0- No";
					cout<<"\n1- Yes";
					cout<<"\nYour choice: "; cin>>i;
					if(i<0 or i>1){
						cout<<"\n\nPlease choose one of the options\n\n";
					}
				}if(i==0){
					cout<<"\nDoor is still open";
				}
				if(i==1){
					cerrarpuerta();
				}
			}while(i<0 or i>1);
		}
		void puerta2(){
			cout<<"\n\nDOOR 2";
			i=0; j=0;
			do{
				if(i==0){
					cout<<"\nDoor is closed.";
					cout<<"\n\nDo you want to open the door?";
					cout<<"\n0- No";
					cout<<"\n1- Yes";
					cout<<"\nYour choice: "; cin>>i;
					if(i<0 or i>1){
						cout<<"\n\nPlease choose one of the options\n\n";
					}
				}
			}while(i<0 or i>1);
				if(i==0){
					cout<<"\nDoor is still closed";
					if(j==0){
						cout<<"\nWindow is closed.";
						cout<<"\n\nDo you want to open the window?";
						cout<<"\n0- No";
						cout<<"\n1- Yes";
						cout<<"\nYour choice: "; cin>>j;
					}
						if(j==0){
							cout<<"\nWindow is still closed.";
						}
						if(j==1){
							abrirventana();
							j=2;
						}
						if(j==2){
							if(j==2){
								cout<<"\nWindow is open.";
								cout<<"\n\nDo you want to close the window?";
								cout<<"\n0- No";
								cout<<"\n1- Yes";
								cout<<"\nYour choice: "; cin>>j;
							}
							if(j==0){
								cout<<"\nWindow is still open";
							}
							if(j==1){
							cerrarventana();
							}
						}
					j=0;
				}
				if(i==1){
					abrirpuerta();
					if(j==0){
						cout<<"\nWindow is closed.";
						cout<<"\n\nDo you want to open the window?";
						cout<<"\n0- No";
						cout<<"\n1- Yes";
						cout<<"\nYour choice: "; cin>>j;
					}
						if(j==0){
							cout<<"\nWindow is still closed.";
						}
						if(j==1){
							abrirventana();
							j=2;
						}
						if(j==2){
							if(j==2){
								cout<<"\nWindow is open.";
								cout<<"\n\nDo you want to close the window?";
								cout<<"\n0- No";
								cout<<"\n1- Yes";
								cout<<"\nYour choice: "; cin>>j;
							}
							if(j==0){
								cout<<"\nWindow is still open";
							}
							if(j==1){
							cerrarventana();
							}
					j=0;
				}
			}do{
				if(i==1){
					cout<<"\nDoor is open.";
					cout<<"\n\nDo you want to close the door?";
					cout<<"\n0- No";
					cout<<"\n1- Yes";
					cout<<"\nYour choice: "; cin>>i;
					if(i<0 or i>1){
					cout<<"\n\nPlease choose one of the options\n\n";
				}
			}if(i==0){
				cout<<"\nDoor is still open";
			}
			if(i==1){
				cerrarpuerta();
			}
		}while(i<0 or i>1);
	}
};

class coche: public motor, public rueda, public puerta{
	private:
		int t;
		int check;
		int interruptor;
		
	public:
		coche(int i) : motor(i){
			setInterruptor(i);
		}

		void revisarcoche(){
			motor tsuru(t);
			cout<<"\nThe status of the engine will be shown next.";
			tsuru.estadomotor();
	
			do{	
				if(t==0){
				cout<<"\n\nDo you want to turn on the engine?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>t;
				if(t<0 or t>1){
					cout<<"\n\nPlease choose one of the options.\n\n";
				}
				if(t==0){
					cout<<"Engine is still off.";
					check = 1;
				}
				if(t==1){
					tsuru.arrancar();
					check = 0;
				}
			}
			}while(t<0 or t>1);
		
			do{
				if(t==1){
				cout<<"\n\nEngine is on.";
				cout<<"\n\nDo you want to turn off the engine?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>t;
				
				if(t==0){
					cout<<"\nEnginge is still on.";
					check = 0;
					
					}else if(t==1){
						tsuru.apagar();
						check = 1;
					}
				}
			}while(t<0 or t>1);
			rueda1();
			rueda2();
			rueda3();
			rueda4();
			
			cout<<endl;
			
			puerta1();
			puerta2();
		}
		
		void avanzar(){
			int freno, avance1, avance2;
			if(check==0){
				cout<<"\nMOVE FORWARD";
				cout<<"\n\nEngine is on.";
				cout<<"\n\nDo you want to move forward?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>avance1;
				if(avance1==0){
					cout<<"\n\nThe car stays in place.";
				}
				if(avance1==1){
				cout<<"\n\nThe car starts moving forward...";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\n\nDo you want to brake?";
				cout<<"\n0- No";
				cout<<"\n1- Yes";
				cout<<"\nYour choice: "; cin>>freno;
				if(freno==0){
					cout<<"\nThe car keeps moving forward.";
					return;
				}
				if(freno==1){
					frenar();
					cout<<"\n\nDo you want to brake?";
					cout<<"\n0- No";
					cout<<"\n1- Yes";
					cout<<"\nYour choice: "; cin>>avance2;
				}
				if(avance2==0){
					cout<<"\n\nThe car stays in place.";
				}
				if(avance2==1){
				cout<<"\n\nThe car starts moving forward...";
				
				}
			}
		}if(check==1){
			cout<<"\MOVE FORWARD";
			cout<<"\n\nYou can't move forward, engine is turned off.";
		}
	}
		
		void frenar(){

				cout<<"\nCar is braking...";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\n.";
				cout<<"\nThe car stopped!";
		}
	
};

int main(){
	int i = 0;
	
	coche bocho(i); 
	bocho.revisarcoche(); //Al habilitar este comentario, se puede hacer uso de la clase coche y utilizar sus 4 llantas, 2 puertas y su motor mas sus metodos internos.
	bocho.avanzar();

	motor rayo(i);
	cout<<"\nThe status of the engine will be shown next.";
	rayo.estadomotor();
	
	do{	
		if(i==0){
			cout<<"\n\nDo you want to turn on the engine?";
			cout<<"\n0- No";
			cout<<"\n1- Yes";
			cout<<"\nYour choice: "; cin>>i;
			if(i<0 or i>1){
				cout<<"\n\nPlease choose one of the options\n\n";
			}
			if(i==0){
				cout<<"\nEngine is still off.";
			}
			if(i==1){
				rayo.arrancar();
			}
		}
	}while(i<0 or i>1);
		
	do{
		if(i==1){
			cout<<"\n\nEngine is on.";
			cout<<"\n\nDo you want to turn off the engine?";
			cout<<"\n0- No";
			cout<<"\n1- Yes";
			cout<<"\nYour choice: "; cin>>i;
				
			if(i==0){
				cout<<"\nEngine is still on.";
			}else if(i==1){
				rayo.apagar();
			}
		}
	}while(i<0 or i>1);
	
	return 0;
}
