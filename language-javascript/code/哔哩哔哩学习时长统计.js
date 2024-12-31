/**
 * 哔哩哔哩学习时长统计.js
 * 
 * 统计哔哩哔哩，某个合集视频的学习时长
 * [在B站刷学习视频时如何知道剩余分集视频总时长？](https://www.bilibili.com/read/cv17764897/)
 * [[自制插件]在B站刷学习视频时如何知道剩余分集视频总时长？](https://www.bilibili.com/read/cv23034438/)
 * [哔哩哔哩分集视频的区间内总时长计算](https://github.com/Whimmey/BiliBiliTimer)
 */


/**
timeBetween(start, end)，区间左闭右闭，
是视频的P1、P2，所以从1开始
*/
function timeBetween(start, end) {
  let arr = document.querySelectorAll('.video-pod__list .duration');

  let timeH = 0;
  let timeM = 0;
  let timeS = 0;

  for (let i = start - 1; i < end; i++) {
    let time = arr[i].innerHTML;
    let timeArr = time.split(':');
    switch (timeArr.length) {
      case 1:
        timeS += Number(timeArr[0]);
        break;
      case 2:
        timeM += Number(timeArr[0]);
        timeS += Number(timeArr[1]);
        break;
      case 3:
        timeH += Number(timeArr[0]);
        timeM += Number(timeArr[1]);
        timeS += Number(timeArr[2]);
        break;
    }
  }

  timeM += Math.floor(timeS / 60);
  timeS %= 60;

  timeH += Math.floor(timeM / 60);
  timeM %= 60;

  return [timeH, timeM, timeS];
}


/**
获取当前播放视频的页码
*/
function getCurrentPage() {
  let page = document.querySelector('.list-box .on .page-num').innerHTML.slice(1);
  return Number(page);
}


/**
获取最后一页
*/
function getLastPage() {
  let arr = document.querySelectorAll('.list-box .page-num');
  let page = arr[arr.length - 1].innerHTML.slice(1);
  return Number(page);
}


/**
输出学习结果
*/
function printStudy() {
  let totalTime = timeBetween(1, getLastPage());
  let learnedTime = timeBetween(1, getCurrentPage());

  console.log('视频总时长：' + totalTime.join(':'));
  console.log('已学总时长：' + learnedTime.join(':'));
}