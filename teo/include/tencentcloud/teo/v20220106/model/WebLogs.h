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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_

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
                * web攻击日志
                */
                class WebLogs : public AbstractModel
                {
                public:
                    WebLogs();
                    ~WebLogs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackContent 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackContent 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取攻击源（客户端）Ip。
                     * @return AttackIp 攻击源（客户端）Ip。
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置攻击源（客户端）Ip。
                     * @param AttackIp 攻击源（客户端）Ip。
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     */
                    bool AttackIpHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackType 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackType 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取受攻击子域名。
                     * @return Domain 受攻击子域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置受攻击子域名。
                     * @param Domain 受攻击子域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msuuid 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMsuuid() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Msuuid 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsuuid(const std::string& _msuuid);

                    /**
                     * 判断参数 Msuuid 是否已赋值
                     * @return Msuuid 是否已赋值
                     */
                    bool MsuuidHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestMethod 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取URI
                     * @return RequestUri URI
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置URI
                     * @param RequestUri URI
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskLevel 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * @return SipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * @param SipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
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
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalMethod 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisposalMethod() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisposalMethod 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisposalMethod(const std::string& _disposalMethod);

                    /**
                     * 判断参数 DisposalMethod 是否已赋值
                     * @return DisposalMethod 是否已赋值
                     */
                    bool DisposalMethodHasBeenSet() const;

                    /**
                     * 获取http log。
                     * @return HttpLog http log。
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置http log。
                     * @param HttpLog http log。
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ua 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUa() const;

                    /**
                     * 设置该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ua 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取攻击时间，采用unix秒级时间戳。
                     * @return AttackTime 攻击时间，采用unix秒级时间戳。
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置攻击时间，采用unix秒级时间戳。
                     * @param AttackTime 攻击时间，采用unix秒级时间戳。
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleDetailList 规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecRuleRelatedInfo> GetRuleDetailList() const;

                    /**
                     * 设置规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleDetailList 规则相关信息列表。
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
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * 攻击源（客户端）Ip。
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 受攻击子域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msuuid;
                    bool m_msuuidHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * URI
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * 请求（事件）ID。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disposalMethod;
                    bool m_disposalMethodHasBeenSet;

                    /**
                     * http log。
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * 该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * 攻击时间，采用unix秒级时间戳。
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * 规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecRuleRelatedInfo> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WEBLOGS_H_
