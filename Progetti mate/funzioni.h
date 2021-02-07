int gui(float x1, float y1, float x2, float y2){
	bool state = true;
	x1 = (x1 * 10)+400;
	x2 = (x2 * 10)+400;
	y1 = (y1 * -10)+400;
	y2 = (y2 * -10)+400;
	setcolor(4);
	setlinestyle(0,0,3);
	line(x1,y1,x2,y2);
	setcolor(15);
	setlinestyle(0,0,0);
	return state;
} 

float retta(float y, float x, float c){
	bool state = true;
	int px,py,p2x,p2y;
	px=-15;
	py=px*x+c;
	p2x=15;
	p2y=p2x*x+c;
	gui(px,py,p2x,p2y);
	return state;
}

float parabola(float x2, float x, float c){
	float px,py,p2x,p2y,vx,vy,fx,fy;
		vx=(-1*x)/(2*x2);
		vy=(vx*vx)*x2+vx*x+c;
		fx=vx;
		fy=1/(4*x2)+vy;
		cout <<"Il vertice è ("<<vx<<", "<<vy<<")"<<endl;
		cout <<"Il fuoco è ("<<fx<<", "<<fy<<")"<<endl;
		px=-10.01;
		p2x=-10.02;
		p2y=(p2x*p2x)*x2+p2x*x+c;
	for (int i=0;i<2000;i++){
		py=(px*px)*x2+px*x+c;
		//p2y=(p2x*p2x)*x2+p2x*x+c;
	
		//cout << px << endl << p2y << endl;
		gui(px,py,p2x,p2y);
		p2x=px;
		p2y=py;
		px=px+0.02;
		//p2x=p2x+0.02;
	}
	p2x=-5;
	for (int i=0;i<10;i++){
		p2y=(p2x*p2x)*x2+p2x*x+c;
		cout <<"x="<< p2x <<"  y="<< p2y << endl;
		p2x=p2x+1;
	}
}

float dist2punti(float x1, float y1, float x2, float y2){
	float dist, a, b;
	a = (x1-x2);
	b = (y1-y2);
	a = a*a;
	b = b*b;
	dist = a + b; 
	dist = sqrt(dist);
	gui(x1,y1,x2,y2);
	return dist;
}
