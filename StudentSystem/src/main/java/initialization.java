import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class initialization {
    public boolean checkManger(String status,String number,String code) throws IOException {//检查账号密码是否正确
        String str=number+" "+code;//将账号密码以空格为间隔连起来，因为记事本里是这种格式存的信息

        BufferedReader br = new BufferedReader(new FileReader("student.txt"));//默认是学生
        if("Manager".equals(status)) {
            br = new BufferedReader(new FileReader("manager.txt"));
        }else{
            System.out.println("请输入正确的身份");
            return false;
        }

        while(true){//遍历文件内容查找
                if(str.equals(br.readLine()))
                    return true;
                if(br.readLine()==null)
                    return false;
            }
    }

    public initialization() throws IOException {
        System.out.println("欢迎使用学生信息管理系统");
        System.out.println("请输入您的身份：");//输入英文，有含义
        System.out.println("1、Manager   2、Student");
        Scanner str1=new Scanner(System.in);//读身份
        String status=str1.next();

        if(!status.equals("Manager")&&!status.equals("Student")){
            System.out.println("请输入正确的身份：");
            status=str1.next();
        }

        Scanner accout=new Scanner(System.in);//读账号密码信息
        System.out.println("账号:");
        String number=accout.next();
        System.out.println("密码:");
        String code=accout.next();

        while(true){
            if(checkManger(status,number,code)){
                System.out.println("登录成功");
                break;
            }else{
                System.out.println("账号或密码错误，请重新输入:");
                System.out.println("账号:");
                number=accout.next();
                System.out.println("密码:");
                code=accout.next();
            }
        }
    }
}
