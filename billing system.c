int main()
{
    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int Sugar;
    int Tea;
    int Coffee;
    int Rice;
    int Wheat;

    int Pepsi;
    int Sprite;
    int Coke;
    int Mojitos;
    int Thums_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("___________________\n");
    printf("BILLING SYSTEM\n");
    printf("Customer DEtails\n");

    printf("Customer Name : ");
    scanf("%s",&name);
    printf("Customer Number : ");
    scanf("%d",&phone_number);
    printf("Customer Id : ");
    scanf("%d",&customer_id);

    printf("___________________\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( RS 10 ) : ");
    scanf("%d",&body_soap);
    printf("Hair Cream( RS 25) : ");
    scanf("%d",&hair_cream);
    printf("Body Spray(RS 50 ) : ");
    scanf("%d",&body_spray);
    printf("Hair Spray(RS 75) : ");
    scanf("%d",&hair_spray);

    printf("___________________\n");

    printf("GROCERIES\n\n");

    printf("Sugar(RS 100) : ");
    scanf("%d",&Sugar);
    printf("Tea(RS 15) : ");
    scanf("%d",&Tea);
    printf("Coffee(RS 50): ");
    scanf("%d",&Coffee);
    printf("Rice(RS 150): ");
    scanf("%d",&Rice);
    printf("Wheat(RS 160): ");
    scanf("%d",&Wheat);

    printf("___________________\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi(RS 30): ");
    scanf("%d",&Pepsi);
    printf("Sprite(RS 35): ");
    scanf("%d",&Sprite);
    printf("Coke(RS 30): ");
    scanf("%d",&Coke);
    printf("Mojitos(RS 25): ");
    scanf("%d",&Mojitos);
    printf("Thums_up(RS 35): ");
    scanf("%d",&Thums_up);

    printf("___________________\n");


    int boso;
    int hc;
    int hs;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 75 * body_spray;

    printf("Body Soap : ");
    scanf("%d RS\n",boso);
    printf("Hair_Cream :");
    scanf("%d RS\n",hc);
    printf("Hair_Spray :");
    scanf("%d RS\n",hs);
    printf("Body_Spray :");
    scanf("%d RS\n",bosp);

    printf("___________________\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100 * Sugar;
    t = 15 * Tea;
    c = 50 * Coffee;
    r = 150 * Rice;
    w = 160 * Wheat;

    printf("Sugar : ");
    scanf("%d RS\n",s);
    printf("Tea : ");
    scanf("%d RS\n",t);
    printf("Coffee : ");
    scanf("%d RS\n",c);
    printf("Rice : ");
    scanf("%d RS\n",r);
    printf("Wheat : ");
    scanf("%d RS\n",w);

    printf("___________________\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30 * Pepsi;
    spr = 35 * Sprite;
    cok = 30 * Coke;
    moj = 25 * Mojitos;
    thu = 35 * Thums_up;

    printf("Pepsi : ");
    scanf("%d RS\n",pep);
    printf("Sprite : ");
    scanf("%d RS\n",spr);
    printf("Coke : ");
    scanf("%d RS\n",cok);
    printf("mojitos : ");
    scanf("%d RS\n",moj);
    printf("Thums_up : ");
    scanf("%d RS\n",thu);

    printf("___________________\n");

    total = cosmetics_total + grocery_total + beverage_total;

    printf("Total Amount : ");
    printf("%d RS\n", total);

    printf("___________________\n");

    printf("____________________________________________________________________\n");

    printf("SUPER MARKET\n\n");
    printf("Customer Name : ");
    scanf("%d",&name);
    printf("Customer Phone Number : ");
    scanf("%d",phone_number);
    printf("Customer Id : ");
    scanf("%d",customer_id);
    

    printf("Product Name                    Quantity           price\n\n");
    printf("Body Soap                       %d                 %d\n",body_soap,boso);
    printf("Hair Cream                      %d                 %d\n",hair_cream,hc);
    printf("Body Spray                      %d                 %d\n",body_spray,bosp);
    printf("Hair Spray                      %d                 %d\n",hair_spray,hs);
    printf("Sugar                           %d                 %d\n",Sugar,s);
    printf("Tea                             %d                 %d\n",Tea,t);
    printf("Coffee                          %d                 %d\n",Coffee,c);
    printf("Rice                            %d                 %d\n",Rice,r);
    printf("Wheat                           %d                 %d\n",Wheat,w);
    printf("Pepsi                           %d                 %d\n",Pepsi,pep);
    printf("Sprite                          %d                 %d\n",Sprite,spr);
    printf("Coke                            %d                 %d\n",Coke,cok);
    printf("Mojitos                         %d                 %d\n",Mojitos,moj);
    printf("Thums_up                        %d                 %d\n",Thums_up,thu);

    printf("Grocery Total Price : %d\n\n",grocery_total);

    printf("Cosmetics Total Price : %d\n\n",cosmetics_total);

    printf("Beverage Total Price : %d\n\n",beverage_total);

    printf("Total Price : %d\n\n",total);

}