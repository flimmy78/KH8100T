/* **************************************************
* Copyright(c) 2011-, JNKH. All rights reserved.
*
* File：warningmsg.ice
* 
*****************************************************/ 
 
#ifndef _WARNINGMSG_ICE
#define _WARNINGMSG_ICE
 
[["java:package:com.gridnt.warningmsg"]]
/**
* 
* 传输告警信息文件
* 
*/
module WarningMsg
{ 
    ["java:type:java.util.ArrayList<String>"]   sequence<string> Strings;
    /**
    *
    *文件内容
    *
    **/
    struct WarningMsgContent
    {
        //读取文件位置
        long pos;
        
        //内容
        Strings content;
    };
                 
    interface WarningMsgFile
    {
        /**
         *
         *读取报警文件内容
         * @parameter pos:上次读取文件位置
         * @parameter length:读取行数
         * @parameter strFilename:文件名称
         * @return LogContent
         **/
        ["cpp:const","nonmutating"] WarningMsgContent getContent(long pos, int length, string strFilename) ;
    };

    sequence<byte> Bytes;    
    const string SendWarningMsgTopic = "SendWarningMsg";  // 主题
    interface SendWarningMsg
    {
        void sendWarningMsgBinary(string title, Bytes datas);
    };
};
 
#endif 