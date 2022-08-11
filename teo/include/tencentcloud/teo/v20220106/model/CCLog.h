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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/SecRuleRelatedInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CC日志
                */
                class CCLog : public AbstractModel
                {
                public:
                    CCLog();
                    ~CCLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击请求时间，采用unix秒级时间戳。
                     * @return AttackTime 攻击请求时间，采用unix秒级时间戳。
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置攻击请求时间，采用unix秒级时间戳。
                     * @param AttackTime 攻击请求时间，采用unix秒级时间戳。
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取客户端ip。
                     * @return AttackSip 客户端ip。
                     */
                    std::string GetAttackSip() const;

                    /**
                     * 设置客户端ip。
                     * @param AttackSip 客户端ip。
                     */
                    void SetAttackSip(const std::string& _attackSip);

                    /**
                     * 判断参数 AttackSip 是否已赋值
                     * @return AttackSip 是否已赋值
                     */
                    bool AttackSipHasBeenSet() const;

                    /**
                     * 获取受攻击域名。
                     * @return AttackDomain 受攻击域名。
                     */
                    std::string GetAttackDomain() const;

                    /**
                     * 设置受攻击域名。
                     * @param AttackDomain 受攻击域名。
                     */
                    void SetAttackDomain(const std::string& _attackDomain);

                    /**
                     * 判断参数 AttackDomain 是否已赋值
                     * @return AttackDomain 是否已赋值
                     */
                    bool AttackDomainHasBeenSet() const;

                    /**
                     * 获取URI。
                     * @return RequestUri URI。
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置URI。
                     * @param RequestUri URI。
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取命中次数。
                     * @return HitCount 命中次数。
                     */
                    uint64_t GetHitCount() const;

                    /**
                     * 设置命中次数。
                     * @param HitCount 命中次数。
                     */
                    void SetHitCount(const uint64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)。
                     * @return SipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)。
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)。
                     * @param SipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)。
                     */
                    void SetSipCountryCode(const std::string& _sipCountryCode);

                    /**
                     * 判断参数 SipCountryCode 是否已赋值
                     * @return SipCountryCode 是否已赋值
                     */
                    bool SipCountryCodeHasBeenSet() const;

                    /**
                     * 获取请求（事件）ID。
                     * @return EventId 请求（事件）ID。
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置请求（事件）ID。
                     * @param EventId 请求（事件）ID。
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalMethod 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisposalMethod() const;

                    /**
                     * 设置当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisposalMethod 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisposalMethod(const std::string& _disposalMethod);

                    /**
                     * 判断参数 DisposalMethod 是否已赋值
                     * @return DisposalMethod 是否已赋值
                     */
                    bool DisposalMethodHasBeenSet() const;

                    /**
                     * 获取当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpLog 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpLog 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskLevel 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取User Agent，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ua User Agent，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUa() const;

                    /**
                     * 设置User Agent，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ua User Agent，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取请求方法，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod 请求方法，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置请求方法，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestMethod 请求方法，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取规则信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleDetailList 规则信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecRuleRelatedInfo> GetRuleDetailList() const;

                    /**
                     * 设置规则信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleDetailList 规则信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleDetailList(const std::vector<SecRuleRelatedInfo>& _ruleDetailList);

                    /**
                     * 判断参数 RuleDetailList 是否已赋值
                     * @return RuleDetailList 是否已赋值
                     */
                    bool RuleDetailListHasBeenSet() const;

                private:

                    /**
                     * 攻击请求时间，采用unix秒级时间戳。
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * 客户端ip。
                     */
                    std::string m_attackSip;
                    bool m_attackSipHasBeenSet;

                    /**
                     * 受攻击域名。
                     */
                    std::string m_attackDomain;
                    bool m_attackDomainHasBeenSet;

                    /**
                     * URI。
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * 命中次数。
                     */
                    uint64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)。
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * 请求（事件）ID。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disposalMethod;
                    bool m_disposalMethodHasBeenSet;

                    /**
                     * 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 当前该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * User Agent，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * 请求方法，仅自定义规则日志中存在。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * 规则信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecRuleRelatedInfo> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_
