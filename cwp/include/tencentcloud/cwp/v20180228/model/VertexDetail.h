/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AlarmInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 点详细信息
                */
                class VertexDetail : public AbstractModel
                {
                public:
                    VertexDetail();
                    ~VertexDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该节点类型，进程:1；网络:2；文件:3；ssh:4
                     * @return Type 该节点类型，进程:1；网络:2；文件:3；ssh:4
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置该节点类型，进程:1；网络:2；文件:3；ssh:4
                     * @param _type 该节点类型，进程:1；网络:2；文件:3；ssh:4
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取各节点类型用到的时间，2022-11-29 00:00:00 格式
                     * @return Time 各节点类型用到的时间，2022-11-29 00:00:00 格式
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置各节点类型用到的时间，2022-11-29 00:00:00 格式
                     * @param _time 各节点类型用到的时间，2022-11-29 00:00:00 格式
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取告警信息
                     * @return AlarmInfo 告警信息
                     * 
                     */
                    std::vector<AlarmInfo> GetAlarmInfo() const;

                    /**
                     * 设置告警信息
                     * @param _alarmInfo 告警信息
                     * 
                     */
                    void SetAlarmInfo(const std::vector<AlarmInfo>& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取进程名，当该节点为进程时生效
                     * @return ProcName 进程名，当该节点为进程时生效
                     * 
                     */
                    std::string GetProcName() const;

                    /**
                     * 设置进程名，当该节点为进程时生效
                     * @param _procName 进程名，当该节点为进程时生效
                     * 
                     */
                    void SetProcName(const std::string& _procName);

                    /**
                     * 判断参数 ProcName 是否已赋值
                     * @return ProcName 是否已赋值
                     * 
                     */
                    bool ProcNameHasBeenSet() const;

                    /**
                     * 获取命令行，当该节点为进程时生效
                     * @return CmdLine 命令行，当该节点为进程时生效
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令行，当该节点为进程时生效
                     * @param _cmdLine 命令行，当该节点为进程时生效
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取进程id，当该节点为进程时生效
                     * @return Pid 进程id，当该节点为进程时生效
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程id，当该节点为进程时生效
                     * @param _pid 进程id，当该节点为进程时生效
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取文件md5，当该节点为文件时生效
                     * @return FileMd5 文件md5，当该节点为文件时生效
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件md5，当该节点为文件时生效
                     * @param _fileMd5 文件md5，当该节点为文件时生效
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取文件写入内容，当该节点为文件时生效
                     * @return FileContent 文件写入内容，当该节点为文件时生效
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文件写入内容，当该节点为文件时生效
                     * @param _fileContent 文件写入内容，当该节点为文件时生效
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取文件路径，当该节点为文件时生效
                     * @return FilePath 文件路径，当该节点为文件时生效
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径，当该节点为文件时生效
                     * @param _filePath 文件路径，当该节点为文件时生效
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件创建时间，当该节点为文件时生效
                     * @return FileCreateTime 文件创建时间，当该节点为文件时生效
                     * 
                     */
                    std::string GetFileCreateTime() const;

                    /**
                     * 设置文件创建时间，当该节点为文件时生效
                     * @param _fileCreateTime 文件创建时间，当该节点为文件时生效
                     * 
                     */
                    void SetFileCreateTime(const std::string& _fileCreateTime);

                    /**
                     * 判断参数 FileCreateTime 是否已赋值
                     * @return FileCreateTime 是否已赋值
                     * 
                     */
                    bool FileCreateTimeHasBeenSet() const;

                    /**
                     * 获取请求目的地址，当该节点为网络时生效
                     * @return Address 请求目的地址，当该节点为网络时生效
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置请求目的地址，当该节点为网络时生效
                     * @param _address 请求目的地址，当该节点为网络时生效
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取目标端口，当该节点为网络时生效
                     * @return DstPort 目标端口，当该节点为网络时生效
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置目标端口，当该节点为网络时生效
                     * @param _dstPort 目标端口，当该节点为网络时生效
                     * 
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取登录源ip，当该节点为ssh时生效
                     * @return SrcIP 登录源ip，当该节点为ssh时生效
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置登录源ip，当该节点为ssh时生效
                     * @param _srcIP 登录源ip，当该节点为ssh时生效
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取登录用户名用户组，当该节点为ssh时生效
                     * @return User 登录用户名用户组，当该节点为ssh时生效
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置登录用户名用户组，当该节点为ssh时生效
                     * @param _user 登录用户名用户组，当该节点为ssh时生效
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取漏洞名称，当该节点为漏洞时生效
                     * @return VulName 漏洞名称，当该节点为漏洞时生效
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称，当该节点为漏洞时生效
                     * @param _vulName 漏洞名称，当该节点为漏洞时生效
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞利用时间，当该节点为漏洞时生效
                     * @return VulTime 漏洞利用时间，当该节点为漏洞时生效
                     * 
                     */
                    std::string GetVulTime() const;

                    /**
                     * 设置漏洞利用时间，当该节点为漏洞时生效
                     * @param _vulTime 漏洞利用时间，当该节点为漏洞时生效
                     * 
                     */
                    void SetVulTime(const std::string& _vulTime);

                    /**
                     * 判断参数 VulTime 是否已赋值
                     * @return VulTime 是否已赋值
                     * 
                     */
                    bool VulTimeHasBeenSet() const;

                    /**
                     * 获取http请求内容，当该节点为漏洞时生效
                     * @return HttpContent http请求内容，当该节点为漏洞时生效
                     * 
                     */
                    std::string GetHttpContent() const;

                    /**
                     * 设置http请求内容，当该节点为漏洞时生效
                     * @param _httpContent http请求内容，当该节点为漏洞时生效
                     * 
                     */
                    void SetHttpContent(const std::string& _httpContent);

                    /**
                     * 判断参数 HttpContent 是否已赋值
                     * @return HttpContent 是否已赋值
                     * 
                     */
                    bool HttpContentHasBeenSet() const;

                    /**
                     * 获取漏洞利用者来源ip，当该节点为漏洞时生效
                     * @return VulSrcIP 漏洞利用者来源ip，当该节点为漏洞时生效
                     * 
                     */
                    std::string GetVulSrcIP() const;

                    /**
                     * 设置漏洞利用者来源ip，当该节点为漏洞时生效
                     * @param _vulSrcIP 漏洞利用者来源ip，当该节点为漏洞时生效
                     * 
                     */
                    void SetVulSrcIP(const std::string& _vulSrcIP);

                    /**
                     * 判断参数 VulSrcIP 是否已赋值
                     * @return VulSrcIP 是否已赋值
                     * 
                     */
                    bool VulSrcIPHasBeenSet() const;

                    /**
                     * 获取点id
                     * @return VertexId 点id
                     * 
                     */
                    std::string GetVertexId() const;

                    /**
                     * 设置点id
                     * @param _vertexId 点id
                     * 
                     */
                    void SetVertexId(const std::string& _vertexId);

                    /**
                     * 判断参数 VertexId 是否已赋值
                     * @return VertexId 是否已赋值
                     * 
                     */
                    bool VertexIdHasBeenSet() const;

                private:

                    /**
                     * 该节点类型，进程:1；网络:2；文件:3；ssh:4
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 各节点类型用到的时间，2022-11-29 00:00:00 格式
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 告警信息
                     */
                    std::vector<AlarmInfo> m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * 进程名，当该节点为进程时生效
                     */
                    std::string m_procName;
                    bool m_procNameHasBeenSet;

                    /**
                     * 命令行，当该节点为进程时生效
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 进程id，当该节点为进程时生效
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 文件md5，当该节点为文件时生效
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 文件写入内容，当该节点为文件时生效
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 文件路径，当该节点为文件时生效
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件创建时间，当该节点为文件时生效
                     */
                    std::string m_fileCreateTime;
                    bool m_fileCreateTimeHasBeenSet;

                    /**
                     * 请求目的地址，当该节点为网络时生效
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 目标端口，当该节点为网络时生效
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 登录源ip，当该节点为ssh时生效
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 登录用户名用户组，当该节点为ssh时生效
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 漏洞名称，当该节点为漏洞时生效
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞利用时间，当该节点为漏洞时生效
                     */
                    std::string m_vulTime;
                    bool m_vulTimeHasBeenSet;

                    /**
                     * http请求内容，当该节点为漏洞时生效
                     */
                    std::string m_httpContent;
                    bool m_httpContentHasBeenSet;

                    /**
                     * 漏洞利用者来源ip，当该节点为漏洞时生效
                     */
                    std::string m_vulSrcIP;
                    bool m_vulSrcIPHasBeenSet;

                    /**
                     * 点id
                     */
                    std::string m_vertexId;
                    bool m_vertexIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERTEXDETAIL_H_
