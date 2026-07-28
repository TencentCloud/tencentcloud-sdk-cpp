/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>事件ID</p>
                     * @return EventId <p>事件ID</p>
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置<p>事件ID</p>
                     * @param _eventId <p>事件ID</p>
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
                     * 获取<p>主机名称</p>
                     * @return HostName <p>主机名称</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _hostName <p>主机名称</p>
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
                     * 获取<p>主机IP</p>
                     * @return HostIp <p>主机IP</p>
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置<p>主机IP</p>
                     * @param _hostIp <p>主机IP</p>
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
                     * 获取<p>外网IP</p>
                     * @return WanIp <p>外网IP</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>外网IP</p>
                     * @param _wanIp <p>外网IP</p>
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
                     * 获取<p>进程ID</p>
                     * @return ProcessId <p>进程ID</p>
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置<p>进程ID</p>
                     * @param _processId <p>进程ID</p>
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
                     * 获取<p>文件路径</p>
                     * @return FilePath <p>文件路径</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>文件路径</p>
                     * @param _filePath <p>文件路径</p>
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
                     * 获取<p>执行命令</p>
                     * @return CmdLine <p>执行命令</p>
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置<p>执行命令</p>
                     * @param _cmdLine <p>执行命令</p>
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
                     * 获取<p>进程启动时间</p>
                     * @return StartTime <p>进程启动时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>进程启动时间</p>
                     * @param _startTime <p>进程启动时间</p>
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
                     * 获取<p>最近检测时间</p>
                     * @return DetectTime <p>最近检测时间</p>
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置<p>最近检测时间</p>
                     * @param _detectTime <p>最近检测时间</p>
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
                     * 获取<p>病毒名称</p>
                     * @return VirusName <p>病毒名称</p>
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置<p>病毒名称</p>
                     * @param _virusName <p>病毒名称</p>
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
                     * 获取<p>木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]</p>
                     * @return CheckPlatform <p>木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]</p>
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置<p>木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]</p>
                     * @param _checkPlatform <p>木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]</p>
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
                     * 获取<p>病毒标签</p>
                     * @return VirusTags <p>病毒标签</p>
                     * 
                     */
                    std::vector<std::string> GetVirusTags() const;

                    /**
                     * 设置<p>病毒标签</p>
                     * @param _virusTags <p>病毒标签</p>
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
                     * 获取<p>威胁描述</p>
                     * @return ThreatDesc <p>威胁描述</p>
                     * 
                     */
                    std::string GetThreatDesc() const;

                    /**
                     * 设置<p>威胁描述</p>
                     * @param _threatDesc <p>威胁描述</p>
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
                     * 获取<p>建议方案</p>
                     * @return SuggestSolution <p>建议方案</p>
                     * 
                     */
                    std::string GetSuggestSolution() const;

                    /**
                     * 设置<p>建议方案</p>
                     * @param _suggestSolution <p>建议方案</p>
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
                     * 获取<p>参考链接</p>
                     * @return ReferenceLink <p>参考链接</p>
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置<p>参考链接</p>
                     * @param _referenceLink <p>参考链接</p>
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
                     * 获取<p>处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]</p>
                     * @return HandleStatus <p>处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]</p>
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置<p>处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]</p>
                     * @param _handleStatus <p>处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]</p>
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
                     * 获取<p>主机在线状态</p>
                     * @return OnlineStatus <p>主机在线状态</p>
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置<p>主机在线状态</p>
                     * @param _onlineStatus <p>主机在线状态</p>
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
                     * 获取<p>附加信息</p>
                     * @return MachineExtraInfo <p>附加信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>附加信息</p>
                     * @param _machineExtraInfo <p>附加信息</p>
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
                     * 获取<p>主机uuid</p>
                     * @return Uuid <p>主机uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机uuid</p>
                     * @param _uuid <p>主机uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>首次检出方式 0扫描;1实时监控</p>
                     * @return FirstDetectionMethod <p>首次检出方式 0扫描;1实时监控</p>
                     * 
                     */
                    uint64_t GetFirstDetectionMethod() const;

                    /**
                     * 设置<p>首次检出方式 0扫描;1实时监控</p>
                     * @param _firstDetectionMethod <p>首次检出方式 0扫描;1实时监控</p>
                     * 
                     */
                    void SetFirstDetectionMethod(const uint64_t& _firstDetectionMethod);

                    /**
                     * 判断参数 FirstDetectionMethod 是否已赋值
                     * @return FirstDetectionMethod 是否已赋值
                     * 
                     */
                    bool FirstDetectionMethodHasBeenSet() const;

                    /**
                     * 获取<p>quuid</p>
                     * @return QUUID <p>quuid</p>
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置<p>quuid</p>
                     * @param _qUUID <p>quuid</p>
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取<p>进程md5</p>
                     * @return ExeMd5 <p>进程md5</p>
                     * 
                     */
                    std::string GetExeMd5() const;

                    /**
                     * 设置<p>进程md5</p>
                     * @param _exeMd5 <p>进程md5</p>
                     * 
                     */
                    void SetExeMd5(const std::string& _exeMd5);

                    /**
                     * 判断参数 ExeMd5 是否已赋值
                     * @return ExeMd5 是否已赋值
                     * 
                     */
                    bool ExeMd5HasBeenSet() const;

                private:

                    /**
                     * <p>事件ID</p>
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>主机IP</p>
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>进程ID</p>
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>文件路径</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>执行命令</p>
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * <p>进程启动时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>最近检测时间</p>
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * <p>病毒名称</p>
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * <p>木马检测平台 [1:云查杀引擎|2:TAV|3:binaryAi|4:异常行为|5:威胁情报]</p>
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * <p>病毒标签</p>
                     */
                    std::vector<std::string> m_virusTags;
                    bool m_virusTagsHasBeenSet;

                    /**
                     * <p>威胁描述</p>
                     */
                    std::string m_threatDesc;
                    bool m_threatDescHasBeenSet;

                    /**
                     * <p>建议方案</p>
                     */
                    std::string m_suggestSolution;
                    bool m_suggestSolutionHasBeenSet;

                    /**
                     * <p>参考链接</p>
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * <p>处理状态[0待处理;1已处理;2查杀中;3已查杀;4已退出;5忽略]</p>
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * <p>主机在线状态</p>
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * <p>附加信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>主机uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>首次检出方式 0扫描;1实时监控</p>
                     */
                    uint64_t m_firstDetectionMethod;
                    bool m_firstDetectionMethodHasBeenSet;

                    /**
                     * <p>quuid</p>
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * <p>进程md5</p>
                     */
                    std::string m_exeMd5;
                    bool m_exeMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKPROCESSEVENT_H_
