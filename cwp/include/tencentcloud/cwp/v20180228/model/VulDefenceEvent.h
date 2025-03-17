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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENT_H_

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
                class VulDefenceEvent : public AbstractModel
                {
                public:
                    VulDefenceEvent();
                    ~VulDefenceEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞ID
                     * @return VulId 漏洞ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞ID
                     * @param _vulId 漏洞ID
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
                     * 获取0 专业版,1 旗舰版,2 LH轻量版（仅限LH使用）,3  CVM轻量版（仅限CVM使用）
                     * @return UpgradeType 0 专业版,1 旗舰版,2 LH轻量版（仅限LH使用）,3  CVM轻量版（仅限CVM使用）
                     * 
                     */
                    int64_t GetUpgradeType() const;

                    /**
                     * 设置0 专业版,1 旗舰版,2 LH轻量版（仅限LH使用）,3  CVM轻量版（仅限CVM使用）
                     * @param _upgradeType 0 专业版,1 旗舰版,2 LH轻量版（仅限LH使用）,3  CVM轻量版（仅限CVM使用）
                     * 
                     */
                    void SetUpgradeType(const int64_t& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取0 不支持修复，1 支持修复
                     * @return FixType 0 不支持修复，1 支持修复
                     * 
                     */
                    int64_t GetFixType() const;

                    /**
                     * 设置0 不支持修复，1 支持修复
                     * @param _fixType 0 不支持修复，1 支持修复
                     * 
                     */
                    void SetFixType(const int64_t& _fixType);

                    /**
                     * 判断参数 FixType 是否已赋值
                     * @return FixType 是否已赋值
                     * 
                     */
                    bool FixTypeHasBeenSet() const;

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
                     * 漏洞ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

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
                     * 0 专业版,1 旗舰版,2 LH轻量版（仅限LH使用）,3  CVM轻量版（仅限CVM使用）
                     */
                    int64_t m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 0 不支持修复，1 支持修复
                     */
                    int64_t m_fixType;
                    bool m_fixTypeHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEEVENT_H_
