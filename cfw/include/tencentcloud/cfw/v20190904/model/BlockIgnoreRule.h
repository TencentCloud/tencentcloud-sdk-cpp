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
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ioc 规则ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置规则ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ioc 规则ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 危险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventName 来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventName 来源事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Direction 方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Direction 方向：1入站，0出站
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address 地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 规则类型：1封禁，2放通
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 规则生效开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 规则生效结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreReason 忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIgnoreReason() const;

                    /**
                     * 设置忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IgnoreReason 忽略原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIgnoreReason(const std::string& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSource() const;

                    /**
                     * 设置安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Source 安全事件来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqueId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqueId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchTimes 规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMatchTimes() const;

                    /**
                     * 设置规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MatchTimes 规则命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMatchTimes(const int64_t& _matchTimes);

                    /**
                     * 判断参数 MatchTimes 是否已赋值
                     * @return MatchTimes 是否已赋值
                     */
                    bool MatchTimesHasBeenSet() const;

                    /**
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Comment 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_
