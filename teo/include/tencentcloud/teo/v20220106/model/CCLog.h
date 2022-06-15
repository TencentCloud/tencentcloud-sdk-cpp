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


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 限速拦截日志
                */
                class CCLog : public AbstractModel
                {
                public:
                    CCLog();
                    ~CCLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackTime 攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackTime 攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackSip 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackSip() const;

                    /**
                     * 设置攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackSip 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackSip(const std::string& _attackSip);

                    /**
                     * 判断参数 AttackSip 是否已赋值
                     * @return AttackSip 是否已赋值
                     */
                    bool AttackSipHasBeenSet() const;

                    /**
                     * 获取攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackDomain 攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackDomain() const;

                    /**
                     * 设置攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackDomain 攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackDomain(const std::string& _attackDomain);

                    /**
                     * 判断参数 AttackDomain 是否已赋值
                     * @return AttackDomain 是否已赋值
                     */
                    bool AttackDomainHasBeenSet() const;

                    /**
                     * 获取请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestUri 请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestUri 请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitCount 命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHitCount() const;

                    /**
                     * 设置命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HitCount 命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHitCount(const uint64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取IP所在国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SipCountryCode IP所在国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置IP所在国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SipCountryCode IP所在国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSipCountryCode(const std::string& _sipCountryCode);

                    /**
                     * 判断参数 SipCountryCode 是否已赋值
                     * @return SipCountryCode 是否已赋值
                     */
                    bool SipCountryCodeHasBeenSet() const;

                    /**
                     * 获取事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取处置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisposalMethod 处置方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisposalMethod() const;

                    /**
                     * 设置处置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisposalMethod 处置方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisposalMethod(const std::string& _disposalMethod);

                    /**
                     * 判断参数 DisposalMethod 是否已赋值
                     * @return DisposalMethod 是否已赋值
                     */
                    bool DisposalMethodHasBeenSet() const;

                    /**
                     * 获取http_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpLog http_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置http_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpLog http_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * 攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * 攻击源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackSip;
                    bool m_attackSipHasBeenSet;

                    /**
                     * 攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackDomain;
                    bool m_attackDomainHasBeenSet;

                    /**
                     * 请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * 命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * IP所在国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 处置方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disposalMethod;
                    bool m_disposalMethodHasBeenSet;

                    /**
                     * http_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * 规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CCLOG_H_
