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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecRuleRelatedInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取请求（事件）ID。
                     * @return EventId 请求（事件）ID。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置请求（事件）ID。
                     * @param _eventId 请求（事件）ID。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取http 日志内容。
                     * @return HttpLog http 日志内容。
                     * 
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置http 日志内容。
                     * @param _httpLog http 日志内容。
                     * 
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     * 
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取受攻击子域名。
                     * @return Domain 受攻击子域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置受攻击子域名。
                     * @param _domain 受攻击子域名。
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
                     * 获取攻击源（客户端）Ip。
                     * @return AttackIp 攻击源（客户端）Ip。
                     * 
                     */
                    std::string GetAttackIp() const;

                    /**
                     * 设置攻击源（客户端）Ip。
                     * @param _attackIp 攻击源（客户端）Ip。
                     * 
                     */
                    void SetAttackIp(const std::string& _attackIp);

                    /**
                     * 判断参数 AttackIp 是否已赋值
                     * @return AttackIp 是否已赋值
                     * 
                     */
                    bool AttackIpHasBeenSet() const;

                    /**
                     * 获取IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * @return SipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * 
                     */
                    std::string GetSipCountryCode() const;

                    /**
                     * 设置IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * @param _sipCountryCode IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     * 
                     */
                    void SetSipCountryCode(const std::string& _sipCountryCode);

                    /**
                     * 判断参数 SipCountryCode 是否已赋值
                     * @return SipCountryCode 是否已赋值
                     * 
                     */
                    bool SipCountryCodeHasBeenSet() const;

                    /**
                     * 获取真实客户端Ip。
                     * @return RealClientIp 真实客户端Ip。
                     * 
                     */
                    std::string GetRealClientIp() const;

                    /**
                     * 设置真实客户端Ip。
                     * @param _realClientIp 真实客户端Ip。
                     * 
                     */
                    void SetRealClientIp(const std::string& _realClientIp);

                    /**
                     * 判断参数 RealClientIp 是否已赋值
                     * @return RealClientIp 是否已赋值
                     * 
                     */
                    bool RealClientIpHasBeenSet() const;

                    /**
                     * 获取真实客户端Ip所在国家iso-3166中alpha-2编码。
                     * @return RealClientIpCountryCode 真实客户端Ip所在国家iso-3166中alpha-2编码。
                     * 
                     */
                    std::string GetRealClientIpCountryCode() const;

                    /**
                     * 设置真实客户端Ip所在国家iso-3166中alpha-2编码。
                     * @param _realClientIpCountryCode 真实客户端Ip所在国家iso-3166中alpha-2编码。
                     * 
                     */
                    void SetRealClientIpCountryCode(const std::string& _realClientIpCountryCode);

                    /**
                     * 判断参数 RealClientIpCountryCode 是否已赋值
                     * @return RealClientIpCountryCode 是否已赋值
                     * 
                     */
                    bool RealClientIpCountryCodeHasBeenSet() const;

                    /**
                     * 获取攻击时间，采用unix秒级时间戳。
                     * @return AttackTime 攻击时间，采用unix秒级时间戳。
                     * 
                     */
                    uint64_t GetAttackTime() const;

                    /**
                     * 设置攻击时间，采用unix秒级时间戳。
                     * @param _attackTime 攻击时间，采用unix秒级时间戳。
                     * 
                     */
                    void SetAttackTime(const uint64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     * 
                     */
                    bool AttackTimeHasBeenSet() const;

                    /**
                     * 获取请求地址。
                     * @return RequestUri 请求地址。
                     * 
                     */
                    std::string GetRequestUri() const;

                    /**
                     * 设置请求地址。
                     * @param _requestUri 请求地址。
                     * 
                     */
                    void SetRequestUri(const std::string& _requestUri);

                    /**
                     * 判断参数 RequestUri 是否已赋值
                     * @return RequestUri 是否已赋值
                     * 
                     */
                    bool RequestUriHasBeenSet() const;

                    /**
                     * 获取请求类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqMethod 请求类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReqMethod() const;

                    /**
                     * 设置请求类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reqMethod 请求类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReqMethod(const std::string& _reqMethod);

                    /**
                     * 判断参数 ReqMethod 是否已赋值
                     * @return ReqMethod 是否已赋值
                     * 
                     */
                    bool ReqMethodHasBeenSet() const;

                    /**
                     * 获取规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleDetailList 规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecRuleRelatedInfo> GetRuleDetailList() const;

                    /**
                     * 设置规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleDetailList 规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleDetailList(const std::vector<SecRuleRelatedInfo>& _ruleDetailList);

                    /**
                     * 判断参数 RuleDetailList 是否已赋值
                     * @return RuleDetailList 是否已赋值
                     * 
                     */
                    bool RuleDetailListHasBeenSet() const;

                    /**
                     * 获取攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackContent 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackContent 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     * 
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取日志所属区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 日志所属区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置日志所属区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 日志所属区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 请求（事件）ID。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * http 日志内容。
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * 受攻击子域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 攻击源（客户端）Ip。
                     */
                    std::string m_attackIp;
                    bool m_attackIpHasBeenSet;

                    /**
                     * IP所在国家iso-3166中alpha-2编码，编码信息请参考[ISO-3166](https://git.woa.com/edgeone/iso-3166/blob/master/all/all.json)
                     */
                    std::string m_sipCountryCode;
                    bool m_sipCountryCodeHasBeenSet;

                    /**
                     * 真实客户端Ip。
                     */
                    std::string m_realClientIp;
                    bool m_realClientIpHasBeenSet;

                    /**
                     * 真实客户端Ip所在国家iso-3166中alpha-2编码。
                     */
                    std::string m_realClientIpCountryCode;
                    bool m_realClientIpCountryCodeHasBeenSet;

                    /**
                     * 攻击时间，采用unix秒级时间戳。
                     */
                    uint64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                    /**
                     * 请求地址。
                     */
                    std::string m_requestUri;
                    bool m_requestUriHasBeenSet;

                    /**
                     * 请求类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reqMethod;
                    bool m_reqMethodHasBeenSet;

                    /**
                     * 规则相关信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecRuleRelatedInfo> m_ruleDetailList;
                    bool m_ruleDetailListHasBeenSet;

                    /**
                     * 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * 日志所属区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBLOGS_H_
