import java.util.Arrays;

/**
 * <a href="https://www.bilibili.com/video/BV1Cv411372m?p=156">题目来源</a>
 * 需求：啤酒2元1瓶，4个盖子可以换一瓶，2个空瓶可以换一瓶，请问10元钱可以喝多少瓶酒，剩余多少空瓶和盖子。
 * 答案：15瓶 3盖子 1瓶子
 * 新解：By fys
 * 思路：用10元先买好5瓶啤酒，然后用这5瓶啤酒的盖子和空瓶，兑换新的啤酒
 */
public class BuyBeer {
    public static void main(String[] args) {
        fun1();
        fun2(new int[]{5, 5, 5});
    }


    private static void fun1() {
        // a, b, c 依次为总共酒瓶数、剩余盖子、剩余空瓶
        int a = 5, b = 5, c = 5, newBuy = 0;
        while (b >= 4 || c >= 2) {
            newBuy = b / 4 + c / 2;
            a += newBuy;
            b = b % 4 + newBuy;
            c = c % 2 + newBuy;
        }
        System.out.println(a + ", " + b + ", " + c);
    }

    private static void fun2(int[] ints) {
        // ints[] 依次为总共酒瓶数、剩余盖子、剩余空瓶
        int newBuy = ints[1] / 4 + ints[2] / 2;
        ints[0] += newBuy;
        ints[1] = ints[1] % 4 + newBuy;
        ints[2] = ints[2] % 2 + newBuy;
        if (ints[1] >= 4 || ints[2] >= 2) {
            fun2(ints);
        } else {
            System.out.println(Arrays.toString(ints));
        }
    }
}
