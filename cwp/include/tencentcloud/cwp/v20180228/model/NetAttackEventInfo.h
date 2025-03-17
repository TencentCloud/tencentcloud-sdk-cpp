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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_

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
                * 网络攻击事件详情
                */
                class NetAttackEventInfo : public AbstractModel
                {
                public:
                    NetAttackEventInfo();
                    ~NetAttackEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     * @return Status 处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     * @param _status 处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取攻击源ip
                     * @return SrcIP 攻击源ip
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置攻击源ip
                     * @param _srcIP 攻击源ip
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
                     * 获取攻击源地
                     * @return Location 攻击源地
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置攻击源地
                     * @param _location 攻击源地
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

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
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞CVE编号
                     * @return CVEId 漏洞CVE编号
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置漏洞CVE编号
                     * @param _cVEId 漏洞CVE编号
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取漏洞攻击热度
                     * @return AttackLevel 漏洞攻击热度
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置漏洞攻击热度
                     * @param _attackLevel 漏洞攻击热度
                     * 
                     */
                    void SetAttackLevel(const uint64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取漏洞防御状态，0关闭，1开启
                     * @return VulDefenceStatus 漏洞防御状态，0关闭，1开启
                     * 
                     */
                    uint64_t GetVulDefenceStatus() const;

                    /**
                     * 设置漏洞防御状态，0关闭，1开启
                     * @param _vulDefenceStatus 漏洞防御状态，0关闭，1开启
                     * 
                     */
                    void SetVulDefenceStatus(const uint64_t& _vulDefenceStatus);

                    /**
                     * 判断参数 VulDefenceStatus 是否已赋值
                     * @return VulDefenceStatus 是否已赋值
                     * 
                     */
                    bool VulDefenceStatusHasBeenSet() const;

                    /**
                     * 获取漏洞是否支持防御，0:不支持 1:支持
                     * @return VulSupportDefense 漏洞是否支持防御，0:不支持 1:支持
                     * 
                     */
                    uint64_t GetVulSupportDefense() const;

                    /**
                     * 设置漏洞是否支持防御，0:不支持 1:支持
                     * @param _vulSupportDefense 漏洞是否支持防御，0:不支持 1:支持
                     * 
                     */
                    void SetVulSupportDefense(const uint64_t& _vulSupportDefense);

                    /**
                     * 判断参数 VulSupportDefense 是否已赋值
                     * @return VulSupportDefense 是否已赋值
                     * 
                     */
                    bool VulSupportDefenseHasBeenSet() const;

                    /**
                     * 获取服务进程 base64 
                     * @return SvcPs 服务进程 base64 
                     * 
                     */
                    std::string GetSvcPs() const;

                    /**
                     * 设置服务进程 base64 
                     * @param _svcPs 服务进程 base64 
                     * 
                     */
                    void SetSvcPs(const std::string& _svcPs);

                    /**
                     * 判断参数 SvcPs 是否已赋值
                     * @return SvcPs 是否已赋值
                     * 
                     */
                    bool SvcPsHasBeenSet() const;

                    /**
                     * 获取攻击数据包
                     * @return NetPayload 攻击数据包
                     * 
                     */
                    std::string GetNetPayload() const;

                    /**
                     * 设置攻击数据包
                     * @param _netPayload 攻击数据包
                     * 
                     */
                    void SetNetPayload(const std::string& _netPayload);

                    /**
                     * 判断参数 NetPayload 是否已赋值
                     * @return NetPayload 是否已赋值
                     * 
                     */
                    bool NetPayloadHasBeenSet() const;

                    /**
                     * 获取异常行为
                     * @return AbnormalAction 异常行为
                     * 
                     */
                    std::string GetAbnormalAction() const;

                    /**
                     * 设置异常行为
                     * @param _abnormalAction 异常行为
                     * 
                     */
                    void SetAbnormalAction(const std::string& _abnormalAction);

                    /**
                     * 判断参数 AbnormalAction 是否已赋值
                     * @return AbnormalAction 是否已赋值
                     * 
                     */
                    bool AbnormalActionHasBeenSet() const;

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

                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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

                    /**
                     * 获取目标端口
                     * @return DstPort 目标端口
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置目标端口
                     * @param _dstPort 目标端口
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
                     * 获取攻击次数
                     * @return Count 攻击次数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置攻击次数
                     * @param _count 攻击次数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取机器付费版本，0 基础版，1专业版，2旗舰版，3轻量版
                     * @return PayVersion 机器付费版本，0 基础版，1专业版，2旗舰版，3轻量版
                     * 
                     */
                    uint64_t GetPayVersion() const;

                    /**
                     * 设置机器付费版本，0 基础版，1专业版，2旗舰版，3轻量版
                     * @param _payVersion 机器付费版本，0 基础版，1专业版，2旗舰版，3轻量版
                     * 
                     */
                    void SetPayVersion(const uint64_t& _payVersion);

                    /**
                     * 判断参数 PayVersion 是否已赋值
                     * @return PayVersion 是否已赋值
                     * 
                     */
                    bool PayVersionHasBeenSet() const;

                    /**
                     * 获取cvm uuid
                     * @return Quuid cvm uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm uuid
                     * @param _quuid cvm uuid
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
                     * 获取攻击发生时间
                     * @return MergeTime 攻击发生时间
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置攻击发生时间
                     * @param _mergeTime 攻击发生时间
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
                     * 获取0: 尝试攻击 1:攻击成功
                     * @return Type 0: 尝试攻击 1:攻击成功
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: 尝试攻击 1:攻击成功
                     * @param _type 0: 尝试攻击 1:攻击成功
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取0:无失陷行为 1: rce(命令执行) 2: dnslog 3: writefile
                     * @return HostOpType 0:无失陷行为 1: rce(命令执行) 2: dnslog 3: writefile
                     * 
                     */
                    uint64_t GetHostOpType() const;

                    /**
                     * 设置0:无失陷行为 1: rce(命令执行) 2: dnslog 3: writefile
                     * @param _hostOpType 0:无失陷行为 1: rce(命令执行) 2: dnslog 3: writefile
                     * 
                     */
                    void SetHostOpType(const uint64_t& _hostOpType);

                    /**
                     * 判断参数 HostOpType 是否已赋值
                     * @return HostOpType 是否已赋值
                     * 
                     */
                    bool HostOpTypeHasBeenSet() const;

                    /**
                     * 获取进程树,需要用base64 解码
                     * @return HostOpProcessTree 进程树,需要用base64 解码
                     * 
                     */
                    std::string GetHostOpProcessTree() const;

                    /**
                     * 设置进程树,需要用base64 解码
                     * @param _hostOpProcessTree 进程树,需要用base64 解码
                     * 
                     */
                    void SetHostOpProcessTree(const std::string& _hostOpProcessTree);

                    /**
                     * 判断参数 HostOpProcessTree 是否已赋值
                     * @return HostOpProcessTree 是否已赋值
                     * 
                     */
                    bool HostOpProcessTreeHasBeenSet() const;

                private:

                    /**
                     * 处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 攻击源ip
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 攻击源地
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞CVE编号
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * 漏洞攻击热度
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * 漏洞防御状态，0关闭，1开启
                     */
                    uint64_t m_vulDefenceStatus;
                    bool m_vulDefenceStatusHasBeenSet;

                    /**
                     * 漏洞是否支持防御，0:不支持 1:支持
                     */
                    uint64_t m_vulSupportDefense;
                    bool m_vulSupportDefenseHasBeenSet;

                    /**
                     * 服务进程 base64 
                     */
                    std::string m_svcPs;
                    bool m_svcPsHasBeenSet;

                    /**
                     * 攻击数据包
                     */
                    std::string m_netPayload;
                    bool m_netPayloadHasBeenSet;

                    /**
                     * 异常行为
                     */
                    std::string m_abnormalAction;
                    bool m_abnormalActionHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 攻击次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 机器付费版本，0 基础版，1专业版，2旗舰版，3轻量版
                     */
                    uint64_t m_payVersion;
                    bool m_payVersionHasBeenSet;

                    /**
                     * cvm uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 攻击发生时间
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 0: 尝试攻击 1:攻击成功
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 0:无失陷行为 1: rce(命令执行) 2: dnslog 3: writefile
                     */
                    uint64_t m_hostOpType;
                    bool m_hostOpTypeHasBeenSet;

                    /**
                     * 进程树,需要用base64 解码
                     */
                    std::string m_hostOpProcessTree;
                    bool m_hostOpProcessTreeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENTINFO_H_
