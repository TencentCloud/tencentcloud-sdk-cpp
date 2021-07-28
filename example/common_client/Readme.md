简介
   编译编译common client示例代码步骤
   1、新建并且进入build目录 mkdir build
   2、执行cmake ../
   3、执行make命令
   4、运行common client示例代码  ./DescribeInstances or ./ClsUploadLog 
   注意：如执行./ClsUploadLog示例代码，示例中使用的是在bulid文件上层目录下的二进制文件binary.data，如用户需使用其他二进制文件，将filein读取二进制接口路径替换为目标二进制文件即可