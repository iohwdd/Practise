import java.util.Scanner;

public class manager {
    public void print(){
        System.out.println("1、修改密码      2、添加班级");
        System.out.println("3、删除班级      4、修改班级");
        System.out.println("5、添加同学      0、退出");
    }
    public manager(){
        System.out.println("尊敬的管理员，您好！");

        while(true){
            Scanner sc=new Scanner(System.in);
            int op=sc.nextInt();
            if(op==0){
                System.out.println("退出成功");
                break;
            }
            switch (op){
                case 1:
            }
        }
    }
}
