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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_

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
                * 漏洞详细信息
                */
                class VulDefenceEventDetail : public AbstractModel
                {
                public:
                    VulDefenceEventDetail();
                    ~VulDefenceEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
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
                     * 获取cve编号
                     * @return CveId cve编号
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve编号
                     * @param _cveId cve编号
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取漏洞事件id
                     * @return Id 漏洞事件id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置漏洞事件id
                     * @param _id 漏洞事件id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机quuid
                     * @return Quuid 主机quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
                     * @param _quuid 主机quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return Alias 主机名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置主机名
                     * @param _alias 主机名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return PrivateIp 内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param _privateIp 内网ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取0: 尝试攻击(WeDetect) 1:尝试攻击成功(WeDetect) 2:rasp防御事件
                     * @return EventType 0: 尝试攻击(WeDetect) 1:尝试攻击成功(WeDetect) 2:rasp防御事件
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置0: 尝试攻击(WeDetect) 1:尝试攻击成功(WeDetect) 2:rasp防御事件
                     * @param _eventType 0: 尝试攻击(WeDetect) 1:尝试攻击成功(WeDetect) 2:rasp防御事件
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取攻击源ip
                     * @return SourceIp 攻击源ip
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置攻击源ip
                     * @param _sourceIp 攻击源ip
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取攻击源ip地址所在城市
                     * @return City 攻击源ip地址所在城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置攻击源ip地址所在城市
                     * @param _city 攻击源ip地址所在城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取攻击源端口
                     * @return SourcePort 攻击源端口
                     * 
                     */
                    std::vector<uint64_t> GetSourcePort() const;

                    /**
                     * 设置攻击源端口
                     * @param _sourcePort 攻击源端口
                     * 
                     */
                    void SetSourcePort(const std::vector<uint64_t>& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取创建事件时间
                     * @return CreateTime 创建事件时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建事件时间
                     * @param _createTime 创建事件时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新事件时间
                     * @return MergeTime 更新事件时间
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置更新事件时间
                     * @param _mergeTime 更新事件时间
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取事件发生次数
                     * @return Count 事件发生次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置事件发生次数
                     * @param _count 事件发生次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除
                     * @return Status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除
                     * @param _status 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ONLINE OFFLINE
                     * @return MachineStatus ONLINE OFFLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置ONLINE OFFLINE
                     * @param _machineStatus ONLINE OFFLINE
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取漏洞描述信息
                     * @return Description 漏洞描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置漏洞描述信息
                     * @param _description 漏洞描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return Fix 修复建议
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复建议
                     * @param _fix 修复建议
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取攻击payload
                     * @return NetworkPayload 攻击payload
                     * 
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置攻击payload
                     * @param _networkPayload 攻击payload
                     * 
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     * 
                     */
                    bool NetworkPayloadHasBeenSet() const;

                    /**
                     * 获取关联进程pid
                     * @return Pid 关联进程pid
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置关联进程pid
                     * @param _pid 关联进程pid
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取关联进程主类名
                     * @return MainClass 关联进程主类名
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置关联进程主类名
                     * @param _mainClass 关联进程主类名
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取堆栈信息(rasp特有)
                     * @return StackTrace 堆栈信息(rasp特有)
                     * 
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置堆栈信息(rasp特有)
                     * @param _stackTrace 堆栈信息(rasp特有)
                     * 
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     * 
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取漏洞ID相关的事件详情(json array格式 rasp特有)
                     * @return EventDetail 漏洞ID相关的事件详情(json array格式 rasp特有)
                     * 
                     */
                    std::string GetEventDetail() const;

                    /**
                     * 设置漏洞ID相关的事件详情(json array格式 rasp特有)
                     * @param _eventDetail 漏洞ID相关的事件详情(json array格式 rasp特有)
                     * 
                     */
                    void SetEventDetail(const std::string& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     * 
                     */
                    bool EventDetailHasBeenSet() const;

                    /**
                     * 获取主机失陷事件进程树(json格式 WeDetect特有)
                     * @return ExceptionPstree 主机失陷事件进程树(json格式 WeDetect特有)
                     * 
                     */
                    std::string GetExceptionPstree() const;

                    /**
                     * 设置主机失陷事件进程树(json格式 WeDetect特有)
                     * @param _exceptionPstree 主机失陷事件进程树(json格式 WeDetect特有)
                     * 
                     */
                    void SetExceptionPstree(const std::string& _exceptionPstree);

                    /**
                     * 判断参数 ExceptionPstree 是否已赋值
                     * @return ExceptionPstree 是否已赋值
                     * 
                     */
                    bool ExceptionPstreeHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * cve编号
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 漏洞事件id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 0: 尝试攻击(WeDetect) 1:尝试攻击成功(WeDetect) 2:rasp防御事件
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 攻击源ip
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 攻击源ip地址所在城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 攻击源端口
                     */
                    std::vector<uint64_t> m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * 创建事件时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新事件时间
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 事件发生次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 状态 0: 待处理 1:已防御 2:已处理 3: 已忽略 4: 已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ONLINE OFFLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 漏洞描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 攻击payload
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

                    /**
                     * 关联进程pid
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 关联进程主类名
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 堆栈信息(rasp特有)
                     */
                    std::string m_stackTrace;
                    bool m_stackTraceHasBeenSet;

                    /**
                     * 漏洞ID相关的事件详情(json array格式 rasp特有)
                     */
                    std::string m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                    /**
                     * 主机失陷事件进程树(json格式 WeDetect特有)
                     */
                    std::string m_exceptionPstree;
                    bool m_exceptionPstreeHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENTDETAIL_H_
