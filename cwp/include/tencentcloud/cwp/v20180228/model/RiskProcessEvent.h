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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 异常进程事件
                */
                class RiskProcessEvent : public AbstractModel
                {
                public:
                    RiskProcessEvent();
                    ~RiskProcessEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件ID
                     * @param _eventId 事件ID
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return WanIp 外网IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网IP
                     * @param _wanIp 外网IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取进程ID
                     * @return ProcessId 进程ID
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置进程ID
                     * @param _processId 进程ID
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取文件路径
                     * @return FilePath 文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
                     * @param _filePath 文件路径
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
                     * 获取执行命令
                     * @return CmdLine 执行命令
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置执行命令
                     * @param _cmdLine 执行命令
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
                     * 获取进程启动时间
                     * @return StartTime 进程启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置进程启动时间
                     * @param _startTime 进程启动时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取最近检测时间
                     * @return DetectTime 最近检测时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置最近检测时间
                     * @param _detectTime 最近检测时间
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取病毒名称
                     * @return VirusName 病毒名称
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名称
                     * @param _virusName 病毒名称
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]
                     * @return CheckPlatform 木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]
                     * @param _checkPlatform 木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]
                     * 
                     */
                    void SetCheckPlatform(const std::vector<std::string>& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取病毒标签
                     * @return VirusTags 病毒标签
                     * 
                     */
                    std::vector<std::string> GetVirusTags() const;

                    /**
                     * 设置病毒标签
                     * @param _virusTags 病毒标签
                     * 
                     */
                    void SetVirusTags(const std::vector<std::string>& _virusTags);

                    /**
                     * 判断参数 VirusTags 是否已赋值
                     * @return VirusTags 是否已赋值
                     * 
                     */
                    bool VirusTagsHasBeenSet() const;

                    /**
                     * 获取威胁描述
                     * @return ThreatDesc 威胁描述
                     * 
                     */
                    std::string GetThreatDesc() const;

                    /**
                     * 设置威胁描述
                     * @param _threatDesc 威胁描述
                     * 
                     */
                    void SetThreatDesc(const std::string& _threatDesc);

                    /**
                     * 判断参数 ThreatDesc 是否已赋值
                     * @return ThreatDesc 是否已赋值
                     * 
                     */
                    bool ThreatDescHasBeenSet() const;

                    /**
                     * 获取建议方案
                     * @return SuggestSolution 建议方案
                     * 
                     */
                    std::string GetSuggestSolution() const;

                    /**
                     * 设置建议方案
                     * @param _suggestSolution 建议方案
                     * 
                     */
                    void SetSuggestSolution(const std::string& _suggestSolution);

                    /**
                     * 判断参数 SuggestSolution 是否已赋值
                     * @return SuggestSolution 是否已赋值
                     * 
                     */
                    bool SuggestSolutionHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return ReferenceLink 参考链接
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置参考链接
                     * @param _referenceLink 参考链接
                     * 
                     */
                    void SetReferenceLink(const std::string& _referenceLink);

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                    /**
                     * 获取处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]
                     * @return HandleStatus 处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]
                     * @param _handleStatus 处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取主机在线状态
                     * @return OnlineStatus 主机在线状态
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置主机在线状态
                     * @param _onlineStatus 主机在线状态
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 进程ID
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 执行命令
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 进程启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 最近检测时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 病毒名称
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * 病毒标签
                     */
                    std::vector<std::string> m_virusTags;
                    bool m_virusTagsHasBeenSet;

                    /**
                     * 威胁描述
                     */
                    std::string m_threatDesc;
                    bool m_threatDescHasBeenSet;

                    /**
                     * 建议方案
                     */
                    std::string m_suggestSolution;
                    bool m_suggestSolutionHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * 处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 主机在线状态
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_
