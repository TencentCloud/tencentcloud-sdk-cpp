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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTLOG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTLOG_H_

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
                * Bot攻击日志
                */
                class BotLog : public AbstractModel
                {
                public:
                    BotLog();
                    ~BotLog() = default;
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
                     * 获取攻击ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackIp 攻击ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置攻击ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackIp 攻击ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     */
                    bool AttackIpHasBeenSet() const;

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
                     * 获取攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackType 攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackType 攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestMethod 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackContent 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttackContent 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     */
                    bool AttackContentHasBeenSet() const;

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
                     * 获取user agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ua user agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUa() const;

                    /**
                     * 设置user agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ua user agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取检出方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectionMethod 检出方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDetectionMethod() const;

                    /**
                     * 设置检出方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DetectionMethod 检出方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetectionMethod(const std::string& _detectionMethod);

                    /**
                     * 判断参数 DetectionMethod 是否已赋值
                     * @return DetectionMethod 是否已赋值
                     */
                    bool DetectionMethodHasBeenSet() const;

                    /**
                     * 获取置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfidence() const;

                    /**
                     * 设置置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Confidence 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfidence(const std::string& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取恶意度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Maliciousness 恶意度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMaliciousness() const;

                    /**
                     * 设置恶意度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Maliciousness 恶意度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaliciousness(const std::string& _maliciousness);

                    /**
                     * 判断参数 Maliciousness 是否已赋值
                     * @return Maliciousness 是否已赋值
                     */
                    bool MaliciousnessHasBeenSet() const;

                private:

                    /**
                     * 攻击时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * 攻击ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 请求uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * 攻击类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

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
                     * user agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * 检出方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectionMethod;
                    bool m_detectionMethodHasBeenSet;

                    /**
                     * 置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 恶意度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousness;
                    bool m_maliciousnessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTLOG_H_
