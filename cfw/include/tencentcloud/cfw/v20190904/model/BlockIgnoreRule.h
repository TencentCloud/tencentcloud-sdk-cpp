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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CustomWhiteRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 入侵防御放通封禁规则
                */
                class BlockIgnoreRule : public AbstractModel
                {
                public:
                    BlockIgnoreRule();
                    ~BlockIgnoreRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1 封禁 2外部IP 3域名 4情报 5assets 6udf  7入侵防御规则id （2-7属于白名单类型）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 1 封禁 2外部IP 3域名 4情报 5assets 6udf  7入侵防御规则id （2-7属于白名单类型）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置1 封禁 2外部IP 3域名 4情报 5assets 6udf  7入侵防御规则id （2-7属于白名单类型）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 1 封禁 2外部IP 3域名 4情报 5assets 6udf  7入侵防御规则id （2-7属于白名单类型）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则ip或白名单内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ioc 规则ip或白名单内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置规则ip或白名单内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioc 规则ip或白名单内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取资产实例名称、自定义策略名称等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IocName 资产实例名称、自定义策略名称等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIocName() const;

                    /**
                     * 设置资产实例名称、自定义策略名称等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iocName 资产实例名称、自定义策略名称等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIocName(const std::string& _iocName);

                    /**
                     * 判断参数 IocName 是否已赋值
                     * @return IocName 是否已赋值
                     * 
                     */
                    bool IocNameHasBeenSet() const;

                    /**
                     * 获取白名单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IocInfo 白名单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIocInfo() const;

                    /**
                     * 设置白名单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iocInfo 白名单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIocInfo(const std::string& _iocInfo);

                    /**
                     * 判断参数 IocInfo 是否已赋值
                     * @return IocInfo 是否已赋值
                     * 
                     */
                    bool IocInfoHasBeenSet() const;

                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventName 来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _direction 方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取所有方向聚合成字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectionList 所有方向聚合成字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置所有方向聚合成字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _directionList 所有方向聚合成字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirectionList(const std::string& _directionList);

                    /**
                     * 判断参数 DirectionList 是否已赋值
                     * @return DirectionList 是否已赋值
                     * 
                     */
                    bool DirectionListHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议
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
                     * 获取地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 地理位置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreReason 忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreReason() const;

                    /**
                     * 设置忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreReason 忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreReason(const std::string& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     * 
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqueId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqueId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchTimes 规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMatchTimes() const;

                    /**
                     * 设置规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchTimes 规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchTimes(const int64_t& _matchTimes);

                    /**
                     * 判断参数 MatchTimes 是否已赋值
                     * @return MatchTimes 是否已赋值
                     * 
                     */
                    bool MatchTimesHasBeenSet() const;

                    /**
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取上次命中时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastHitTime 上次命中时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastHitTime() const;

                    /**
                     * 设置上次命中时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastHitTime 上次命中时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastHitTime(const std::string& _lastHitTime);

                    /**
                     * 判断参数 LastHitTime 是否已赋值
                     * @return LastHitTime 是否已赋值
                     * 
                     */
                    bool LastHitTimeHasBeenSet() const;

                    /**
                     * 获取自定义规则细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRule 自定义规则细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomWhiteRule GetCustomRule() const;

                    /**
                     * 设置自定义规则细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customRule 自定义规则细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomRule(const CustomWhiteRule& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                    /**
                     * 获取1 border 2 nat 4 vpc 8 border-serial
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwType 1 border 2 nat 4 vpc 8 border-serial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置1 border 2 nat 4 vpc 8 border-serial
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwType 1 border 2 nat 4 vpc 8 border-serial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFwType(const int64_t& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * 1 封禁 2外部IP 3域名 4情报 5assets 6udf  7入侵防御规则id （2-7属于白名单类型）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则ip或白名单内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                    /**
                     * 资产实例名称、自定义策略名称等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iocName;
                    bool m_iocNameHasBeenSet;

                    /**
                     * 白名单信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iocInfo;
                    bool m_iocInfoHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 所有方向聚合成字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreReason;
                    bool m_ignoreReasonHasBeenSet;

                    /**
                     * 安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * 规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_matchTimes;
                    bool m_matchTimesHasBeenSet;

                    /**
                     * 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 上次命中时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastHitTime;
                    bool m_lastHitTimeHasBeenSet;

                    /**
                     * 自定义规则细节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomWhiteRule m_customRule;
                    bool m_customRuleHasBeenSet;

                    /**
                     * 1 border 2 nat 4 vpc 8 border-serial
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_
