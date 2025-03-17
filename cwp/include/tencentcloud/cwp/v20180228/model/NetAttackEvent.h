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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_

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
                * 网络攻击事件
                */
                class NetAttackEvent : public AbstractModel
                {
                public:
                    NetAttackEvent();
                    ~NetAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志ID
                     * @return Id 日志ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置日志ID
                     * @param _id 日志ID
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
                     * 获取客户端ID
                     * @return Uuid 客户端ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端ID
                     * @param _uuid 客户端ID
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
                     * 获取来源IP
                     * @return SrcIP 来源IP
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置来源IP
                     * @param _srcIP 来源IP
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
                     * 获取来源地
                     * @return Location 来源地
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置来源地
                     * @param _location 来源地
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
                     * 获取攻击时间
                     * @return MergeTime 攻击时间
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置攻击时间
                     * @param _mergeTime 攻击时间
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
                     * 获取攻击状态，0: 尝试攻击 1: 实锤攻击(攻击成功)
                     * @return Type 攻击状态，0: 尝试攻击 1: 实锤攻击(攻击成功)
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置攻击状态，0: 尝试攻击 1: 实锤攻击(攻击成功)
                     * @param _type 攻击状态，0: 尝试攻击 1: 实锤攻击(攻击成功)
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
                     * 获取是否开启漏洞防御，0关1开
                     * @return VulDefenceStatus 是否开启漏洞防御，0关1开
                     * 
                     */
                    uint64_t GetVulDefenceStatus() const;

                    /**
                     * 设置是否开启漏洞防御，0关1开
                     * @param _vulDefenceStatus 是否开启漏洞防御，0关1开
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
                     * 获取是否今日新增主机
                     * @return New 是否今日新增主机
                     * 
                     */
                    bool GetNew() const;

                    /**
                     * 设置是否今日新增主机
                     * @param _new 是否今日新增主机
                     * 
                     */
                    void SetNew(const bool& _new);

                    /**
                     * 判断参数 New 是否已赋值
                     * @return New 是否已赋值
                     * 
                     */
                    bool NewHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 来源IP
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 来源地
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 攻击时间
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 攻击状态，0: 尝试攻击 1: 实锤攻击(攻击成功)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 处理状态，0 待处理 1 已处理 2 已加白  3 已忽略 4 已删除 5: 已开启防御
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 漏洞是否支持防御，0:不支持 1:支持
                     */
                    uint64_t m_vulSupportDefense;
                    bool m_vulSupportDefenseHasBeenSet;

                    /**
                     * 是否开启漏洞防御，0关1开
                     */
                    uint64_t m_vulDefenceStatus;
                    bool m_vulDefenceStatusHasBeenSet;

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
                     * 攻击次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 是否今日新增主机
                     */
                    bool m_new;
                    bool m_newHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKEVENT_H_
