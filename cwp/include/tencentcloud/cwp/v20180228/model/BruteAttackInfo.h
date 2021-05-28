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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 密码破解列表实体
                */
                class BruteAttackInfo : public AbstractModel
                {
                public:
                    BruteAttackInfo();
                    ~BruteAttackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一Id
                     * @return Id 唯一Id
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一Id
                     * @param Id 唯一Id
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云镜客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 云镜客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 云镜客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取失败：FAILED；成功：SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 失败：FAILED；成功：SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置失败：FAILED；成功：SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 失败：FAILED；成功：SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param City 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取阻断状态：0-未阻断；1-已阻断；2-阻断失败；3-内网攻击暂不支持阻断；4-安平暂不支持阻断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BanStatus 阻断状态：0-未阻断；1-已阻断；2-阻断失败；3-内网攻击暂不支持阻断；4-安平暂不支持阻断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBanStatus() const;

                    /**
                     * 设置阻断状态：0-未阻断；1-已阻断；2-阻断失败；3-内网攻击暂不支持阻断；4-安平暂不支持阻断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BanStatus 阻断状态：0-未阻断；1-已阻断；2-阻断失败；3-内网攻击暂不支持阻断；4-安平暂不支持阻断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBanStatus(const uint64_t& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Count 发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Quuid 机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProVersion 是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsProVersion 是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModifyTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 失败：FAILED；成功：SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 阻断状态：0-未阻断；1-已阻断；2-阻断失败；3-内网攻击暂不支持阻断；4-安平暂不支持阻断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * 被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
