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
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一Id
                     * @param _id 唯一Id
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
                     * 获取主机安全客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 主机安全客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uuid 主机安全客户端唯一标识UUID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineIp 主机ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取SUCCESS：破解成功；FAILED：破解失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status SUCCESS：破解成功；FAILED：破解失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置SUCCESS：破解成功；FAILED：破解失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status SUCCESS：破解成功；FAILED：破解失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 国家id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 城市id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProvince() const;

                    /**
                     * 设置省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _province 省份id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvince(const uint64_t& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取0 -不阻断(客户端版本不支持)
1 -已阻断
2 -阻断失败(程序异常)
3 -不阻断(内网不阻断)
4 -可用区不支持阻断
10-阻断中
81-不阻断(未开启阻断)
82-不阻断(非专业版)
83-不阻断(已加白名单)
86-不阻断(系统白名单)
87-不阻断(客户端离线)
88-不阻断(来源Ip归属相同客户)
89-不阻断(ipv6不支持阻断)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BanStatus 0 -不阻断(客户端版本不支持)
1 -已阻断
2 -阻断失败(程序异常)
3 -不阻断(内网不阻断)
4 -可用区不支持阻断
10-阻断中
81-不阻断(未开启阻断)
82-不阻断(非专业版)
83-不阻断(已加白名单)
86-不阻断(系统白名单)
87-不阻断(客户端离线)
88-不阻断(来源Ip归属相同客户)
89-不阻断(ipv6不支持阻断)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBanStatus() const;

                    /**
                     * 设置0 -不阻断(客户端版本不支持)
1 -已阻断
2 -阻断失败(程序异常)
3 -不阻断(内网不阻断)
4 -可用区不支持阻断
10-阻断中
81-不阻断(未开启阻断)
82-不阻断(非专业版)
83-不阻断(已加白名单)
86-不阻断(系统白名单)
87-不阻断(客户端离线)
88-不阻断(来源Ip归属相同客户)
89-不阻断(ipv6不支持阻断)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _banStatus 0 -不阻断(客户端版本不支持)
1 -已阻断
2 -阻断失败(程序异常)
3 -不阻断(内网不阻断)
4 -可用区不支持阻断
10-阻断中
81-不阻断(未开启阻断)
82-不阻断(非专业版)
83-不阻断(已加白名单)
86-不阻断(系统白名单)
87-不阻断(客户端离线)
88-不阻断(来源Ip归属相同客户)
89-不阻断(ipv6不支持阻断)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBanStatus(const uint64_t& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取事件类型：200-暴力破解事件，300-暴力破解成功事件（页面展示），400-暴力破解不存在的帐号事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型：200-暴力破解事件，300-暴力破解成功事件（页面展示），400-暴力破解不存在的帐号事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置事件类型：200-暴力破解事件，300-暴力破解成功事件（页面展示），400-暴力破解不存在的帐号事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventType 事件类型：200-暴力破解事件，300-暴力破解成功事件（页面展示），400-暴力破解不存在的帐号事件
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置发生次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 发生次数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器UUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid 机器UUID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsProVersion 是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isProVersion 是否为专业版（true/false）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 被攻击的服务的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 最近攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0：待处理，1：忽略，5：已处理，6：加入白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataStatus 0：待处理，1：忽略，5：已处理，6：加入白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDataStatus() const;

                    /**
                     * 设置0：待处理，1：忽略，5：已处理，6：加入白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataStatus 0：待处理，1：忽略，5：已处理，6：加入白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataStatus(const uint64_t& _dataStatus);

                    /**
                     * 判断参数 DataStatus 是否已赋值
                     * @return DataStatus 是否已赋值
                     * 
                     */
                    bool DataStatusHasBeenSet() const;

                    /**
                     * 获取附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineExtraInfo 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineExtraInfo 附加信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地理位置中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 地理位置中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置地理位置中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 地理位置中文名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取威胁等级：0低危，1中危，2高危
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 威胁等级：0低危，1中危，2高危
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置威胁等级：0低危，1中危，2高危
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskLevel 威胁等级：0低危，1中危，2高危
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取事件来源：0--阻断规则，1--威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFrom 事件来源：0--阻断规则，1--威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataFrom() const;

                    /**
                     * 设置事件来源：0--阻断规则，1--威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFrom 事件来源：0--阻断规则，1--威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFrom(const int64_t& _dataFrom);

                    /**
                     * 判断参数 DataFrom 是否已赋值
                     * @return DataFrom 是否已赋值
                     * 
                     */
                    bool DataFromHasBeenSet() const;

                    /**
                     * 获取破解状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackStatusDesc 破解状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackStatusDesc() const;

                    /**
                     * 设置破解状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackStatusDesc 破解状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackStatusDesc(const std::string& _attackStatusDesc);

                    /**
                     * 判断参数 AttackStatusDesc 是否已赋值
                     * @return AttackStatusDesc 是否已赋值
                     * 
                     */
                    bool AttackStatusDescHasBeenSet() const;

                    /**
                     * 获取阻断过期时间（仅阻断中事件有效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BanExpiredTime 阻断过期时间（仅阻断中事件有效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBanExpiredTime() const;

                    /**
                     * 设置阻断过期时间（仅阻断中事件有效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _banExpiredTime 阻断过期时间（仅阻断中事件有效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBanExpiredTime(const std::string& _banExpiredTime);

                    /**
                     * 判断参数 BanExpiredTime 是否已赋值
                     * @return BanExpiredTime 是否已赋值
                     * 
                     */
                    bool BanExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 唯一Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机安全客户端唯一标识UUID
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
                     * SUCCESS：破解成功；FAILED：破解失败
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
                     * 0 -不阻断(客户端版本不支持)
1 -已阻断
2 -阻断失败(程序异常)
3 -不阻断(内网不阻断)
4 -可用区不支持阻断
10-阻断中
81-不阻断(未开启阻断)
82-不阻断(非专业版)
83-不阻断(已加白名单)
86-不阻断(系统白名单)
87-不阻断(客户端离线)
88-不阻断(来源Ip归属相同客户)
89-不阻断(ipv6不支持阻断)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * 事件类型：200-暴力破解事件，300-暴力破解成功事件（页面展示），400-暴力破解不存在的帐号事件
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

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0：待处理，1：忽略，5：已处理，6：加入白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dataStatus;
                    bool m_dataStatusHasBeenSet;

                    /**
                     * 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 地理位置中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 威胁等级：0低危，1中危，2高危
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 事件来源：0--阻断规则，1--威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataFrom;
                    bool m_dataFromHasBeenSet;

                    /**
                     * 破解状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackStatusDesc;
                    bool m_attackStatusDescHasBeenSet;

                    /**
                     * 阻断过期时间（仅阻断中事件有效）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_banExpiredTime;
                    bool m_banExpiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKINFO_H_
