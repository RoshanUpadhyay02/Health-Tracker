#include<graphics.h>
#include <stdio.h>
#include<conio.h>
#include <string.h>
#include<math.h>
void my_outtextxy(int x, int y, const char* text) {
  outtextxy(x, y, const_cast<char*>(text));
}
int main()
{ // menu
  int ch;
  char c;
  int maxX,m,i;
  int gd=DETECT,gm;

  initgraph(&gd,&gm,"");



 //game name animation
 settextstyle(1,HORIZ_DIR,4);
 setcolor(15);
 readimagefile("fin.jpg", 100, 75, 500, 500);
 delay(15000);
 maxX=getmaxx();
 m=maxX - 400;
 for(i=0;i<m;i++)
 {
    settextstyle(3,HORIZ_DIR,4);
    setcolor(11);
    my_outtextxy(200,240,"Loading");
    setcolor(12);
    my_outtextxy(150+i,300,"||||||||||||||||||");
    delay(15);
    if(i<m)
       cleardevice();
}
  closegraph();
  char name[1000],gender[2];
    int age;
    int BMR;
    int TDEE;
    float bmi;
    float weight,height;
    Label :
  system("cls");
  printf("\n1.Start the programme...");
  printf("\n2.Quit the programme....");
  printf("\n\nEnter your choice....\n");
  scanf("%d",&ch);
  switch(ch){
     case 1 :{ system("cls");
              printf("NOTE\n");
              printf("\tEnter M for MALE and F for FEMALE.\n");
              printf("\tEnter WEIGHT in kgs and HEIGHT in cms.\n");

              printf("Enter Your Name: ");
              fflush(stdin);
              gets(name);

    printf("Enter your Gender: ");
    fflush(stdin);
    gets(gender);
    printf("Enter your Age: ");
    fflush(stdin);
    scanf("%d",&age);
    printf("Enter your Weight: ");
    fflush(stdin);
    scanf("%f",&weight);
    printf("Enter your Height: ");
    fflush(stdin);
    scanf("%f",&height);
    printf("HI %s\n\n\n\n\n\n", name);

    system("pause");
              system("cls");

              bmi=weight/((height*height)/10000);
    printf("Your BMI is: %f\n",bmi);
    printf("The most basic definition of overweight and obesity is having too much body fat-so much so that it “presents a risk to health.” A reliable way to determine whether a person has too much body fat is to calculate the ratio of their weight to their height squared. (BMI)\n");
    system("pause");
              system("cls");
    printf("Your are: ");
    if (bmi < 16.5)
    {
        printf("Severely Underweight\n");
        system("pause");
              system("cls");
     }
    else if (16.5<bmi && bmi<18.5)
    {
        printf("Underweight\n");
        system("pause");
              system("cls");
              }
    else if (18.5<=bmi && bmi<=24.9)
    {
        printf("Normal Weight\n");
        system("pause");
              system("cls");
     }
    else if (25<=bmi && bmi<=29.9)

       { printf("Overweight\n");
        system("pause");
              system("cls");
     }
    else if (bmi>=30 && bmi<=34.9)
    {
        printf("Obesity Class I\n");
        system("pause");
              system("cls");
    }
    else if (35<=bmi && bmi<=39.9)
    {
        printf("Obesity Class II\n");
        system("pause");
              system("cls");
    }
    else
    {
        printf("Obesity Class III\n");
        system("pause");
              system("cls");
     }

    printf("\n");
    if (strcmp(gender,"M") == 0)
        BMR = 10*weight + 6.25*height - 5*age + 5;
    else
        BMR = 10*weight + 6.25*height - 5*height - 161;
    printf("Your BMR is: %d\n",BMR);
    printf("BMR is the minimum number of calories required for basic functions at rest.\n");
    system("pause");
              system("cls");

    printf("\nNOTE\n");
    printf("What is your Level of Activity?\n");
    printf("\t1. SEDENTARY or LIGHT ACTIVITY LIFESTYLE\n");
    printf("\t2. ACTIVE OR MODERATELY ACTIVE LIFESTYLE\n");
    printf("\t3. VIGOROUS OR VIGOROUSLY ACTIVE LIFESTYLE\n");
    int LOA;
    printf("Enter Your Level Of Activity: ");
    scanf("%d",&LOA);
    system("pause");
              system("cls");
    if (LOA==1)
        TDEE= 1.5*BMR;
    else if (LOA==2)
        TDEE= 1.8*BMR;
    else
        TDEE= 2.2*BMR;
    printf("Your Level Of Activity is: %d\n",TDEE);
    system("pause");
              system("cls");

    float tdee= (float)TDEE;

    printf("\n\nNOTE\n");
    printf("What is your GOAL?\n");
    printf("1. Weight Losss\n");
    printf("2. Weight Gain\n");

    int goal;
    float RC,carbohydrate,protein,fat;
    printf("Enter your Goal: ");
    scanf("%d",&goal);
    system("pause");
              system("cls");
    if (goal==1)
    {
        RC= tdee-500;
        carbohydrate = (0.45*RC)/4 ;
        protein = (0.30*RC)/4;
        fat = (0.25*RC)/9;
    }
    else
    {
        RC= tdee+500;
        carbohydrate = (0.30*RC)/4;
        protein = (0.40*RC)/4;
        fat = (0.30*RC)/9;
    }
    printf("Required Calories: %.2f\n\n\n",RC);
    printf("Carbohydrates: %.2f gms\n",carbohydrate);
    printf("Protein: %.2f gms\n",protein);
    printf("Fat: %.2f gms\n",fat);
    system("pause");
              system("cls");

    printf("Enter Y for Yes and N for No.\n\n");
    char FHD[2];
    printf("Does anyone in your family has diabetes?\n");
    scanf("%s",FHD);
    system("pause");
              system("cls");
    if(strcmp(FHD,"Y") == 0)
    {
        if(age >= 45 && bmi >= 30)
           { printf("You are at High Risk of Diabetes and Stroke\n");
            system("pause");
              system("cls");
           }
        else
            {printf("You are at Low Risk of Diabetes and Stroke\n");
            system("pause");
              system("cls");
            }
    }
    else
      {  printf("Your are safe\n");
        system("pause");
              system("cls");
     }

    printf("\n\nAdditional Health details\n\n");
    printf("\tA normal resting heart rate for adults ranges from 60 to 100 beats per minute.\n");
    printf("\tA normal blood pressure level is less than 120/80 mmHg.\n");
    printf("\tA blood sugar level less than 140 mg/dL (7.8 mmol/L) is normal. A reading of more than 200 mg/dL (11.1 mmol/L) after two hours indicates diabetes. A reading between 140 and 199 mg/dL (7.8 mmol/L and 11.0 mmol/L) indicates prediabetes.\n\n");
    if (bmi <= 16.5)
    {
        if (goal==2)
        {
            printf("Tips to Gain Weight\n");
            printf("\t1. Rice is a convenient, low cost carb source to help you gain weight.\n");
            printf("\t2. Nuts and nut butters are perfect choices if you’re looking to gain weight.\n");
            printf("\t3. Red meats are probably one of the best muscle-building foods available.\n");
            printf("\t4. Potatoes and other starchy foods are a very easy and cost-effective way to add in extra calories.\n");
            printf("\t5. Taking protein supplements is a common strategy for athletes and bodybuilders who want to gain weight. There are many types available, including whey, soy, egg, and pea protein.\n");
            printf("\t6. Dried fruit is a high calorie snack that also provides antioxidants and micronutrients.\n");
            printf("\t7. Eggs are one of the healthiest muscle-building foods on the planet. They provide a great combination of high quality proteins and healthy fats. Each large raw egg weighing 2 ounces, with shell (50 grams), has about 74 calories.\n");
            printf("\t8. The secret behind gaining weight is consistently eating more calories than you’re burning with activity.\n\n");
            system("pause");
              system("cls");
        }
        if (goal==1)
        {
            printf("ALert!!! Losing more weight may lead to bad health so recommend to gain weight.\n");
            printf("RECOMENDATION: WL.\n\n");
            system("pause");
              system("cls");
        }
    }
    else if (16.5<=bmi && bmi<18.5)
    {
        if (goal==2)
        {
            printf("Tips to Gain Weight\n");
            printf("\t1. Rice is a convenient, low cost carb source to help you gain weight.\n");
            printf("\t2. Nuts and nut butters are perfect choices if you’re looking to gain weight.\n");
            printf("\t3. Red meats are probably one of the best muscle-building foods available.\n");
            printf("\t4. Potatoes and other starchy foods are a very easy and cost-effective way to add in extra calories.\n");
            printf("\t5. Taking protein supplements is a common strategy for athletes and bodybuilders who want to gain weight. There are many types available, including whey, soy, egg, and pea protein.\n");
            printf("\t6. Dried fruit is a high calorie snack that also provides antioxidants and micronutrients.\n");
            printf("\t7. Eggs are one of the healthiest muscle-building foods on the planet. They provide a great combination of high quality proteins and healthy fats. Each large raw egg weighing 2 ounces, with shell (50 grams), has about 74 calories.\n");
            printf("\t8. The secret behind gaining weight is consistently eating more calories than you’re burning with activity.\n\n");
            system("pause");
              system("cls");
        }
        if (goal==1)
        {
            printf("ALert!!! Losing more weight may lead to bad health so recommend to gain weight.\n");
            printf("RECOMENDATION: WL.\n\n");
            system("pause");
              system("cls");
        }
    }
    else if (18.5<=bmi && bmi<=24.9)
    {
        printf("Tips to maintain Healthy Weight.\n");
        printf("\t1. Exercise Regularly.\n");
        printf("\t2. Reduce screen time.\n");
        printf("\t3. Eat 5 servings of fruits and veggies a day.\n");
        printf("\t4. Don't skip breakfast.\n");
        printf("\t5. Eat Lots of Protein.\n");
        printf("\t6. Stay Hydrated.\n");
        printf("\t7. Get Enough Sleep.\n\n");

        if (goal==2)
        {
            printf("\tYou are Healthy Please DO NOT GAIN WEIGTH. It may lead to several health consequences.\n\n");
            system("pause");
              system("cls");
        }
        else
        {
            printf("\tYou are Healthy Please DO NOT LOSE WEIGTH. It may lead to several health consequences.\n\n");
            system("pause");
              system("cls");
        }
    }
    else if (25<=bmi && bmi<=29.9)
    {
        if (goal==1)
        {
            printf("Tips to Reduce Weight.\n");
            printf("\t1. Exercise Regularly.\n");
            printf("\t2. Eat a balanced diet.\n");
            printf("\t3. Eat lots of fibrous food.\n");
            printf("\t4. Avoid Fats.\n");
            printf("\t5. Avoid Junk food.\n");
            printf("\t6. Never Try slimming pills.\n");
            printf("\t7. Balance the intakes of calories and expenditure of calories.\n\n");
            printf("*Note*\n");
            printf("PLease DON'T DIET as it may lead the bad health.\n");
            printf("Some pitfals of dieting are mentioned below.\n");
            printf("\t1. Lack of Essential Nutrients.\n");
            printf("\t2. Extreme Reduction of calories.\n");
            printf("\t3. Not performing physical Activity: People often consider that reducing diet for controlling weight but they neglect physical activities which is equally important for healthy Lifestyle.\n");
            printf("\t4. Skipping meals: People often skip meals to reduce weight where as in react meal they take large amoung of food.\n\n");
 system("pause");
              system("cls");


        }
        else
        {
            printf("ALert!!! Gaining more weight may lead to bad health so recommend to lose weight.\n");
            printf("RECOMENDATION: WG.\n\n");
            system("pause");
              system("cls");
        }
    }
    else if (bmi>=30 && bmi<=34.9)
    {
        if (goal==2)
        {
            printf("Tips to Reduce Weight.\n");
            printf("\t1. Exercise Regularly.\n");
            printf("\t2. Eat a balanced diet.\n");
            printf("\t3. Eat lots of fibrous food.\n");
            printf("\t4. Avoid Fats.\n");
            printf("\t5. Avoid Junk food.\n");
            printf("\t6. Never Try slimming pills.\n");
            printf("\t7. Balance the intakes of calories and expenditure of calories.\n\n");
            printf("*Note*\n");
            printf("PLease DON'T DIET as it may lead the bad health.\n");
            printf("Some pitfals of dieting are mentioned below.\n");
            printf("\t1. Lack of Essential Nutrients.\n");
            printf("\t2. Extreme Reduction of calories.\n");
            printf("\t3. Not performing physical Activity: People often consider that reducing diet for controlling weight but they neglect physical activities which is equally important for healthy Lifestyle.\n");
            printf("\t4. Skipping meals: People often skip meals to reduce weight where as in react meal they take large amoung of food.\n\n");
       system("pause");
              system("cls");


        }
        else
        {
            printf("ALert!!! Gaining more weight may lead to bad health so recommend to lose weight.\n");
            printf("RECOMENDATION: WG.\n\n");
            system("pause");
              system("cls");
        }
    }
    else if (35<=bmi && bmi<=39.9)
    {
        if (goal==2)
        {
            printf("Tips to Reduce Weight.\n");
            printf("\t1. Exercise Regularly.\n");
            printf("\t2. Eat a balanced diet.\n");
            printf("\t3. Eat lots of fibrous food.\n");
            printf("\t4. Avoid Fats.\n");
            printf("\t5. Avoid Junk food.\n");
            printf("\t6. Never Try slimming pills.\n");
            printf("\t7. Balance the intakes of calories and expenditure of calories.\n\n");
            printf("*Note*\n");
            printf("PLease DON'T DIET as it may lead the bad health.\n");
            printf("Some pitfals of dieting are mentioned below.\n");
            printf("\t1. Lack of Essential Nutrients.\n");
            printf("\t2. Extreme Reduction of calories.\n");
            printf("\t3. Not performing physical Activity: People often consider that reducing diet for controlling weight but they neglect physical activities which is equally important for healthy Lifestyle.\n");
            printf("\t4. Skipping meals: People often skip meals to reduce weight where as in react meal they take large amoung of food.\n\n");
        system("pause");
              system("cls");


        }
        else
        {
            printf("ALert!!! Gaining more weight may lead to bad health so recommend to lose weight.\n");
            printf("RECOMENDATION: WG.\n\n");
            system("pause");
              system("cls");
        }
    }
    else
    {
        printf("Tips to Reduce Weight.\n");
        printf("\t1. Exercise Regularly.\n");
        printf("\t2. Eat a balanced diet.\n");
        printf("\t3. Eat lots of fibrous food.\n");
        printf("\t4. Avoid Fats.\n");
        printf("\t5. Avoid Junk food.\n");
        printf("\t6. Never Try slimming pills.\n");
        printf("\t7. Balance the intakes of calories and expenditure of calories.\n\n");
        printf("*Note*\n");
        printf("PLease DON'T DIET as it may lead the bad health.\n");
        printf("Some pitfals of dieting are mentioned below.\n");
        printf("\t1. Lack of Essential Nutrients.\n");
        printf("\t2. Extreme Reduction of calories.\n");
        printf("\t3. Not performing physical Activity: People often consider that reducing diet for controlling weight but they neglect physical activities which is equally important for healthy Lifestyle.\n");
        printf("\t4. Skipping meals: People often skip meals to reduce weight where as in react meal they take large amoung of food.\n\n");
system("pause");
              system("cls");

if (goal==2)
        {
            printf("Tips to Reduce Weight.\n");
            printf("\t1. Exercise Regularly.\n");
            printf("\t2. Eat a balanced diet.\n");
            printf("\t3. Eat lots of fibrous food.\n");
            printf("\t4. Avoid Fats.\n");
            printf("\t5. Avoid Junk food.\n");
            printf("\t6. Never Try slimming pills.\n");
            printf("\t7. Balance the intakes of calories and expenditure of calories.\n\n");
            printf("*Note*\n");
            printf("PLease DON'T DIET as it may lead the bad health.\n");
            printf("Some pitfals of dieting are mentioned below.\n");
            printf("\t1. Lack of Essential Nutrients.\n");
            printf("\t2. Extreme Reduction of calories.\n");
            printf("\t3. Not performing physical Activity: People often consider that reducing diet for controlling weight but they neglect physical activities which is equally important for healthy Lifestyle.\n");
            printf("\t4. Skipping meals: People often skip meals to reduce weight where as in react meal they take large amoung of food.\n\n");
        }
        else
        {
            printf("ALert!!! Gaining more weight may lead to bad health so recommend to lose weight.\n");
            printf("RECOMENDATION: WG.\n\n");
            system("pause");
              system("cls");
        }
    }

    if (25<bmi)
    {
        printf("RECOMMENDATION: Please maintain your physical health as it is one of the most important thing to live your life happily.\n");
        printf("IF you are not maintaining you health it may lead to several health issues some of them are mentioned below:\n");
        printf("\t1. Heart disease and stroke.\n");
        printf("\t2. High blood pressure.\n");
        printf("\t3. Diabetes.\n");
        printf("\t4. Some cancers.\n");
        printf("\t5. Gallbladder disease and gallstones.\n");
        printf("\t6. Osteoarthritis.\n");
        printf("\t7. Gout.\n");
        printf("\t8. Breathing problems, such as sleep apnea (when a person stops breathing for short episodes during sleep) and asthma.\n\n");
    system("pause");
              system("cls");

    }
    printf("Symptons Of COVID 19\n");
    printf("\t1. COUGH\n\t2. FEVER\n\t3. MUSCLE OR BODY PAIN\n\t4. VOMITTING\n\t5. DIARRHEA\n\t6. NEW LOSS OF TASTE OR SMELL\n");
    printf("Enter Y for YES and N for NO.\n\n");
    char CS[2];
    printf("Do you have any of the above SYMPTOMS: ");
    scanf("%s",CS);
    if(strcmp(CS,"Y") == 0)
    {


        printf("Get yourself Tested ASAP!\n");
        system("pause");
              system("cls");
    }
    else
    {


        printf("Keep wearing a Mask and maintain Social Distancing!");
        system("pause");
              system("cls");
    }

    printf("\n\n!!!THANK YOU \"%s\" FOR YOUR COOPERATION VISIT AGAIN!!!\n",name);

              system("pause");
              goto Label;
	      break ;
	      }
     case 2 :{
             system("cls");
             printf("\nAre you sure you want to exit? y/n\n");
             scanf("%s",&c);
             if(c=='y')
                exit(0);
             else
                goto Label;
	      break ;
	      }
     getch();
    return 0;
}
}
